#include "ide-dev.h"
#include "fs.h"
#include "inode.h"
#include "super_block.h"
#include "dir.h"
#include "bitmap.h"
#include "file.h"
#include "../vga/vga.h"
#include "../mem/vmm.h"
#include "../asm/asm.h"
#include "../debug/debug.h"
#include "../task/task.h"
#include "../keyboard/keyboard.h"
#include "../sync/sync.h"
#include "../pipe/pipe.h"
#define NULL (void *)0
struct partition *cur_part;
extern struct task_struct *current;
extern struct dir *root_dir;             // 根目录
extern struct file file_table[MAX_FILE_OPEN];
extern char shell_input; //shell输入缓冲区
extern struct semaphore user_sema;
/* 格式化分区，创建文件系统 */
static void partition_format(){
    //2048-9999扇区是主分区起始扇区和终止扇区
    struct partition *main_partition=read_main_partition();
    
    //超级块所占扇区数
    unsigned int super_block_sects=1;
    //inode位图所占扇区数
    unsigned int inode_bitmap_sects=(MAX_FILE+8*SEC_SIZE-1)/(8*SEC_SIZE);
    //inode结点表所占扇区数
    unsigned int inode_table_sects=((MAX_FILE*sizeof(struct inode))+8*SEC_SIZE-1)/(8*SEC_SIZE);
    unsigned int useful_sects=main_partition->sector_size-super_block_sects
                            -inode_bitmap_sects-inode_table_sects;
    /* 可用块位图所占扇区 */
    unsigned int block_bitmap_sects=(useful_sects+8*SEC_SIZE-1)/(8*SEC_SIZE);
    /* 空闲块数量 */
    unsigned int block_sects=useful_sects-block_bitmap_sects;
    
    /*   超级块初始化   */
    struct super_block sb;
    sb.magic=0x19590318;
    sb.sec_cnt=main_partition->sector_size;
    sb.inode_cnt=MAX_FILE;
    sb.part_lba_base=2048;  //超级块
    sb.block_bitmap_lba=2048+1;
    sb.block_bitmap_sects=block_bitmap_sects;

    sb.inode_bitmap_lba=sb.block_bitmap_lba+sb.block_bitmap_sects;
    sb.inode_bitmap_sects=inode_bitmap_sects;

    sb.inode_table_lba=sb.inode_bitmap_lba+sb.inode_bitmap_sects;
    sb.inode_table_sects=inode_table_sects;

    sb.data_start_lba=sb.inode_table_lba+sb.inode_table_sects;
    sb.root_inode_no=0;
    sb.dir_entry_size=sizeof(struct dir_entry);

    /* 打印数据 */
    clear();
    printk("sb.magic:%08ux\n",sb.magic);
    printk("sb.sec_cnt:%08ux\n",sb.sec_cnt);
    printk("sb.inode_cnt:%08ux\n",sb.inode_cnt);
    printk("sb.block_bitmap_lba:%08ux\n",sb.block_bitmap_lba);
    printk("sb.block_bitmap_sects:%08ux\n",sb.block_bitmap_sects);

    printk("sb.inode_bitmap_lba:%08ux\n",sb.inode_bitmap_lba);
    printk("sb.inode_bitmap_sects:%08ux\n",sb.inode_bitmap_sects);

    printk("sb.inode_table_lba:%08ux\n",sb.inode_table_lba);
    printk("sb.inode_table_sects:%08ux\n",sb.inode_table_sects);
    printk("sb.data_start_lba:%08ux\n",sb.data_start_lba); 
    /* 将超级块写入起始扇区-2048 */
    ide_write(&sb,2048,1); 
    /* 找到空闲块位图、inode位图和inode数组位图中的最大值,并算出其总字节数 */
    unsigned int buf_size=sb.block_bitmap_sects>sb.inode_bitmap_sects?
        sb.block_bitmap_sects:sb.inode_bitmap_sects;
    buf_size=(buf_size>sb.inode_table_sects?buf_size:sb.inode_table_sects)*SEC_SIZE;
    unsigned char *buf=(unsigned char *)vmm_malloc(buf_size,2);

    /* 初始化空闲块位图并写入空闲块位图起始扇区中 */
    buf[0] |= 0x01; //先给根目录占位

    /*将空闲块位图中多余的部分置位*/
    unsigned int last_byte=block_sects/8;
    unsigned char last_bit=block_sects%8;
    unsigned int last_size=SEC_SIZE-(last_byte%SEC_SIZE);

    /* 将超出实际块数的部分设置为占用 */
    memset(&buf[last_byte],0xFF,last_size);
    /* 把最后一字节内覆盖的空闲扇区置为0 */
    for(char i=0;i<last_bit;i++){
        buf[last_byte] &= ~(1<<i);
    }
    ide_write(buf,sb.block_bitmap_lba,sb.block_bitmap_sects);

    /* 初始化inode位图并写入inode位图起始扇区中 */
    memset(buf,0,buf_size);
    buf[0] |= 0x1; //第一个inode结点预留给根目录
    //处理最后一个扇区多余部分
    last_byte=MAX_FILE/8;
    last_bit=MAX_FILE%8;
    last_size=SEC_SIZE-last_byte;
    memset(&buf[last_byte],0xFF,last_size);
    for(char i=0;i<last_bit;i++){
        buf[last_byte] &= ~(1<<i);
    }
    ide_write(buf,sb.inode_bitmap_lba,sb.inode_bitmap_sects);

    /* 初始化inode数组并写入inode表位图起始扇区中 */
    memset(buf,0,buf_size);
    struct inode *i=(struct inode*)buf;
    i->i_size=sb.dir_entry_size*2; // . 和 ..
    i->i_num=0; //根目录占inode数组中第0个inode
    i->i_sectors[0]=sb.data_start_lba;
    ide_write(buf,sb.inode_table_lba,sb.inode_table_sects);

    /* 将根目录写入sb.data_start_lba */
    memset(buf,0,buf_size);

    struct dir_entry *p_de=(struct dir_entry*)buf;
    /* 初始化当前目录"." */
    memcpy(p_de->filename,".",1);
    p_de->i_no=0;
    p_de->f_type=FT_DIRECTORY;
    p_de++;

    /* 初始化当前目录父目录".." */
    memcpy(p_de->filename,"..",2);
    p_de->i_no=0;  //根目录的父目录依然是根目录
    p_de->f_type=FT_DIRECTORY;
    
    ide_write(buf,sb.data_start_lba,1);
    vmm_free(buf,buf_size);
}
/*
**   mount_partition():挂载分区，即将分区信息读入内存中
*/
void mount_partition(){
    cur_part=read_main_partition();
    struct super_block *sb_buf=(struct super_block *)vmm_malloc(SEC_SIZE,2);
    memset(sb_buf,0,sizeof(struct super_block));
    ide_read((unsigned char *)sb_buf,2048,1);

    /* 把sb_buf中超级块的信息复制到分区的超级块sb中*/
    cur_part->sb=sb_buf;

    /* 读取硬盘上的块位图信息 */
    cur_part->block_bitmap.bits=
    (unsigned char *)vmm_malloc(sb_buf->block_bitmap_sects*SEC_SIZE,2);
    cur_part->block_bitmap.btmp_bytes_len=sb_buf->block_bitmap_sects*SEC_SIZE;
    ide_read(cur_part->block_bitmap.bits,sb_buf->block_bitmap_lba,sb_buf->block_bitmap_sects);
    
    /* 读取硬盘上的inode位图信息 */
    cur_part->inode_bitmap.bits=
    (unsigned char *)vmm_malloc(sb_buf->inode_bitmap_sects*SEC_SIZE,2);
    cur_part->inode_bitmap.btmp_bytes_len=sb_buf->inode_bitmap_sects*SEC_SIZE;
    ide_read(cur_part->inode_bitmap.bits,sb_buf->inode_bitmap_lba,sb_buf->inode_bitmap_sects);

    /* 测试数据 */
    clear();
    
    printk("sb.magic:%08ux\n",cur_part->sb->magic);
    printk("sb.sec_cnt:%08ux\n",cur_part->sb->sec_cnt);
    printk("sb.inode_cnt:%08ux\n",cur_part->sb->inode_cnt);
    printk("sb.block_bitmap_lba:%08ux\n",cur_part->sb->block_bitmap_lba);
    printk("sb.block_bitmap_sects:%08ux\n",cur_part->sb->block_bitmap_sects);

    printk("sb.inode_bitmap_lba:%08ux\n",cur_part->sb->inode_bitmap_lba);
    printk("sb.inode_bitmap_sects:%08ux\n",cur_part->sb->inode_bitmap_sects);

    printk("sb.inode_table_lba:%08ux\n",cur_part->sb->inode_table_lba);
    printk("sb.inode_table_sects:%08ux\n",cur_part->sb->inode_table_sects);
    printk("sb.data_start_lba:%08ux\n",cur_part->sb->data_start_lba); 
    printk("cur_part->block_bitmap.bits:%08ux\n",cur_part->block_bitmap.bits);
    printk("cur_part->block_bitmap.btmp_bytes_len:%08ux\n",cur_part->block_bitmap.btmp_bytes_len);
    printk("cur_part->inode_bitmap.bits:%08ux\n",cur_part->inode_bitmap.bits);
    printk("cur_part->inode_bitmap.btmp_bytes_len:%08ux\n",cur_part->inode_bitmap.btmp_bytes_len);
    
    /* 将当前分区的根目录打开 */
   open_root_dir(cur_part);

   /* 初始化文件表 */
   unsigned int fd_idx = 0;
   while (fd_idx < MAX_FILE_OPEN) {
      file_table[fd_idx++].fd_inode = NULL;
   }
}
/* 将最上层路径名称解析出来 */
static char* path_parse(char* pathname, char* name_store) {
   if (pathname[0] == '/') {   // 根目录不需要单独解析
    /* 路径中出现1个或多个连续的字符'/',将这些'/'跳过,如"///a/b" */
       while(*(++pathname) == '/');
   }

   /* 开始一般的路径解析 */
   while (*pathname != '/' && *pathname != 0) {
      *name_store++ = *pathname++;
   }

   if (pathname[0] == 0) {   // 若路径字符串为空则返回NULL
      return NULL;
   }
   return pathname; 
}

/* 返回路径深度,比如/a/b/c,深度为3 */
int path_depth_cnt(char* pathname) {
   ASSERT(pathname != NULL);
   char* p = pathname;
   char name[MAX_FILE_NAME_LEN];       // 用于path_parse的参数做路径解析
   unsigned int depth = 0;

   /* 解析路径,从中拆分出各级名称 */ 
   p = path_parse(p, name);
   while (name[0]) {
      depth++;
      memset(name, 0, MAX_FILE_NAME_LEN);
      if (p) {	     // 如果p不等于NULL,继续分析路径
	      p  = path_parse(p, name);
      }
   }
   return depth;
}

/* 搜索文件pathname,若找到则返回其inode号,否则返回-1 */
static int search_file(const char* pathname, struct path_search_record* searched_record) {
   /* 如果待查找的是根目录,为避免下面无用的查找,直接返回已知根目录信息 */
   if (!strcmp(pathname, "/") || !strcmp(pathname, "/.") || !strcmp(pathname, "/..")) {
      searched_record->parent_dir = root_dir;
      searched_record->file_type = FT_DIRECTORY;
      searched_record->searched_path[0] = 0;	   // 搜索路径置空
      return 0;
   }

   unsigned int path_len = strlen(pathname);
   /* 保证pathname至少是这样的路径/x且小于最大长度 */
   ASSERT(pathname[0] == '/' && path_len > 1 && path_len < MAX_PATH_LEN);
   char* sub_path = (char*)pathname;
   struct dir* parent_dir = root_dir;	
   struct dir_entry dir_e;

   /* 记录路径解析出来的各级名称,如路径"/a/b/c",
    * 数组name每次的值分别是"a","b","c" */
   char name[MAX_FILE_NAME_LEN] = {0};

   searched_record->parent_dir = parent_dir;
   searched_record->file_type = FT_UNKNOWN;
   unsigned int parent_inode_no = 0;  // 父目录的inode号
   
   sub_path = path_parse(sub_path, name);
   
   while (name[0]) {	   // 若第一个字符就是结束符,结束循环
      /* 记录查找过的路径,但不能超过searched_path的长度512字节 */
      ASSERT(strlen(searched_record->searched_path) < 512);

      /* 记录已存在的父目录 */
      strcat(searched_record->searched_path, "/");
      strcat(searched_record->searched_path, name);

      /* 在所给的目录中查找文件 */
      if (search_dir_entry(cur_part, parent_dir, name, &dir_e)) {         
         memset(name, 0, MAX_FILE_NAME_LEN);
         /* 若sub_path不等于NULL,也就是未结束时继续拆分路径 */
         if (sub_path) {
            sub_path = path_parse(sub_path, name);
         }

         if (FT_DIRECTORY == dir_e.f_type) {   // 如果被打开的是目录
            parent_inode_no = parent_dir->inode->i_num;
            dir_close(parent_dir);
            parent_dir = dir_open(cur_part, dir_e.i_no); // 更新父目录
            searched_record->parent_dir = parent_dir;
            continue;
         } else if (FT_REGULAR == dir_e.f_type) {	 // 若是普通文件
            searched_record->file_type = FT_REGULAR;
            return dir_e.i_no;
         }
      } else {		   //若找不到,则返回-1
         /* 找不到目录项时,要留着parent_dir不要关闭,
         * 若是创建新文件的话需要在parent_dir中创建 */
         return -1;
      }
   }

   /* 执行到此,必然是遍历了完整路径并且查找的文件或目录只有同名目录存在 */
   dir_close(searched_record->parent_dir);	      

   /* 保存被查找目录的直接父目录 */
   searched_record->parent_dir = dir_open(cur_part, parent_inode_no);	   
   searched_record->file_type = FT_DIRECTORY;
   return dir_e.i_no;
}
/* 打开或创建文件成功后,返回文件描述符,否则返回-1 */
int sys_open(const char* pathname, unsigned char flags) {
  /* 对目录要用dir_open,这里只有open文件 */
   if (pathname[strlen(pathname) - 1] == '/') {
      printk("can`t open a directory %s\n",pathname);
      return -1;
   }
   ASSERT(flags <= 7);
   int fd = -1;	   // 默认为找不到

   struct path_search_record searched_record;
   memset(&searched_record, 0, sizeof(struct path_search_record));

   /* 记录目录深度.帮助判断中间某个目录不存在的情况 */
   unsigned int pathname_depth = path_depth_cnt((char*)pathname);

   //printk("pathname : %s\n",pathname);
   /* 先检查文件是否存在 */
   int inode_no = search_file(pathname, &searched_record);
   char found = inode_no != -1 ? 1 : 0; 
  // printk("found : %02d\n",found);
   if (searched_record.file_type == FT_DIRECTORY) {
      printk("can`t open a direcotry with open(), use opendir() to instead\n");
      dir_close(searched_record.parent_dir);
      return -1;
   }

   unsigned int path_searched_depth = path_depth_cnt(searched_record.searched_path);

   /* 先判断是否把pathname的各层目录都访问到了,即是否在某个中间目录就失败了 */
   if (pathname_depth != path_searched_depth) {   // 说明并没有访问到全部的路径,某个中间目录是不存在的
      printk("cannot access %s: Not a directory, subpath %s is`t exist\n", \
	    pathname, searched_record.searched_path);
      dir_close(searched_record.parent_dir);
      return -1;
   }

   /* 若是在最后一个路径上没找到,并且并不是要创建文件,直接返回-1 */
   if (!found && !(flags & O_CREAT)) {
      printk("in path %s, file %s is`t exist\n", \
	    searched_record.searched_path, \
	    (strrchr(searched_record.searched_path, '/') + 1));
      dir_close(searched_record.parent_dir);
      return -1;
   } else if (found && flags & O_CREAT) {  // 若要创建的文件已存在
      printk("%s has already exist!\n", pathname);
      dir_close(searched_record.parent_dir);
      return -1;
   }

   switch (flags & O_CREAT) {
      case O_CREAT:
         printk("creating file\n");
         fd = file_create(searched_record.parent_dir, (strrchr(pathname, '/') + 1), flags);
         dir_close(searched_record.parent_dir);
         break;
      default:
         /* 其余情况均为打开已存在文件:
         * O_RDONLY,O_WRONLY,O_RDWR */
         //printk("inode_no:%08d\n",inode_no);
         fd = file_open(inode_no, flags);
   }

   /* 此fd是指任务task->fd_table数组中的元素下标,
    * 并不是指全局file_table中的下标 */
   return fd;
}
/* 将文件描述符转化为文件表的下标 */
unsigned int fd_local2global(unsigned int local_fd) {
   int global_fd = current->fd_table[local_fd];  
   ASSERT(global_fd >= 0 && global_fd < MAX_FILE_OPEN);
   return (unsigned int)global_fd;
} 

/* 关闭文件描述符fd指向的文件,成功返回0,否则返回-1 */
int sys_close(int fd) {
   int ret = -1;   // 返回值默认为-1,即失败
   if (fd > 2) {
      unsigned int global_fd = fd_local2global(fd);
      if (is_pipe(fd)) {
	 /* 如果此管道上的描述符都被关闭,释放管道的环形缓冲区 */
	 if (--file_table[global_fd].fd_pos == 0) {
	    vmm_free((unsigned int)file_table[global_fd].fd_inode, VMM_PAGE_SIZE);
	    file_table[global_fd].fd_inode = NULL;
	 }
	 ret = 0;
      } else {
	 ret = file_close(&file_table[global_fd]);
      }
      current->fd_table[fd] = -1; // 使该文件描述符位可用
   }
   return ret;
}
/* 将buf中连续count个字节写入文件描述符fd,成功则返回写入的字节数,失败返回-1 */
int sys_write(int fd, const void* buf, unsigned int count) {
   if (fd < 0) {
      printk("sys_write: fd error\n");
      return -1;
   }
   if (fd == stdout_no) { 
      /* 标准输出有可能被重定向为管道缓冲区, 因此要判断 */
      if (is_pipe(fd)) {
	 return pipe_write(fd, buf, count);
      } else { 
      char tmp_buf[1024] = {0};
      memcpy(tmp_buf, buf, count);
      printk(tmp_buf);
      printk("\n");
      return count;
      }
   }else if (is_pipe(fd)){	    /* 若是管道就调用管道的方法 */
      return pipe_write(fd, buf, count);
   } else {
   unsigned int _fd = fd_local2global(fd);
   struct file* wr_file = &file_table[_fd];
   if (wr_file->fd_flag & O_WRONLY || wr_file->fd_flag & O_RDWR) {
      unsigned int bytes_written  = file_write(wr_file, buf, count);
      return bytes_written;
   } else {
      printk("sys_write: not allowed to write file without flag O_RDWR or O_WRONLY\n");
      return -1;
   }
   }
}
/* 从文件描述符fd指向的文件中读取count个字节到buf,若成功则返回读出的字节数,到文件尾则返回-1 */
int sys_read(int fd, void* buf, unsigned int count) {
   ASSERT(buf != NULL);
   int ret = -1;
   if (fd < 0 || fd == stdout_no || fd == stderr_no) {
      printk("sys_read: fd error\n");
   } else if (fd == stdin_no) {
       /* 标准输入有可能被重定向为管道缓冲区, 因此要判断 */
      if (is_pipe(fd)) {
	 ret = pipe_read(fd, buf, count);
      } else {
      char* buffer = buf;
      unsigned int bytes_read = 0;
      if(shell_input==0){
         sema_down(&user_sema);
      }
         
      while (bytes_read < count) {
         *buffer = shell_input;//
         shell_input=0;
         bytes_read++;
         buffer++;
      }
      ret = (bytes_read == 0 ? -1 : (int)bytes_read);
      }
       } else if (is_pipe(fd)) {	 /* 若是管道就调用管道的方法 */
      ret = pipe_read(fd, buf, count);
   } else {
      unsigned int _fd = fd_local2global(fd);
      ret = file_read(&file_table[_fd], buf, count);   
   }
   //printk("ret=%08x\n",ret);
   return ret; 
}

/* 重置用于文件读写操作的偏移指针,成功时返回新的偏移量,出错时返回-1 */
int sys_lseek(int fd, int offset, unsigned char whence) {
   if (fd < 0) {
      printk("sys_lseek: fd error\n");
      return -1;
   }
   ASSERT(whence > 0 && whence < 4);
   unsigned int _fd = fd_local2global(fd);
   struct file* pf = &file_table[_fd];
   int new_pos = 0;   //新的偏移量必须位于文件大小之内
   int file_size = (int)pf->fd_inode->i_size;
   switch (whence) {
      /* SEEK_SET 新的读写位置是相对于文件开头再增加offset个位移量 */
      case SEEK_SET:
         new_pos = offset;
         break;
      /* SEEK_CUR 新的读写位置是相对于当前的位置增加offset个位移量 */
      case SEEK_CUR:	// offse可正可负
         new_pos = (int)pf->fd_pos + offset;
         break;
      /* SEEK_END 新的读写位置是相对于文件尺寸再增加offset个位移量 */
      case SEEK_END:	   // 此情况下,offset应该为负值
	      new_pos = file_size + offset;
   }
   if (new_pos < 0 || new_pos > (file_size - 1)) {	 
      return -1;
   }
   pf->fd_pos = new_pos;
   return pf->fd_pos;
}
/* 删除文件(非目录),成功返回0,失败返回-1 */
int sys_unlink(const char* pathname) {
   ASSERT(strlen(pathname) < MAX_PATH_LEN);

   /* 先检查待删除的文件是否存在 */
   struct path_search_record searched_record;
   memset(&searched_record, 0, sizeof(struct path_search_record));
   int inode_no = search_file(pathname, &searched_record);
   ASSERT(inode_no != 0);
   if (inode_no == -1) {
      printk("file %s not found!\n", pathname);
      dir_close(searched_record.parent_dir);
      return -1;
   }
   if (searched_record.file_type == FT_DIRECTORY) {
      printk("can`t delete a direcotry with unlink(), use rmdir() to instead\n");
      dir_close(searched_record.parent_dir);
      return -1;
   }

   /* 检查是否在已打开文件列表(文件表)中 */
   unsigned int file_idx = 0;
   while (file_idx < MAX_FILE_OPEN) {
      if (file_table[file_idx].fd_inode != NULL && (unsigned int)inode_no == file_table[file_idx].fd_inode->i_num) {
         break;
      }
      file_idx++;
   }
   if (file_idx < MAX_FILE_OPEN) {
      dir_close(searched_record.parent_dir);
      printk("file %s is in use, not allow to delete!\n", pathname);
      return -1;
   }
   ASSERT(file_idx == MAX_FILE_OPEN);
   
   /* 为delete_dir_entry申请缓冲区 */
   void* io_buf = vmm_malloc(SEC_SIZE*2,2);
   if (io_buf == NULL) {
      dir_close(searched_record.parent_dir);
      printk("sys_unlink: malloc for io_buf failed\n");
      return -1;
   }

   struct dir* parent_dir = searched_record.parent_dir;  
   delete_dir_entry(cur_part, parent_dir, inode_no, io_buf);
   inode_release(cur_part, inode_no);
   vmm_free(io_buf,SEC_SIZE*2);
   dir_close(searched_record.parent_dir);
   return 0;   // 成功删除文件 
}
/* 创建目录pathname,成功返回0,失败返回-1 */
int sys_mkdir(const char* pathname) {
   unsigned char rollback_step = 0;	       // 用于操作失败时回滚各资源状态
   unsigned int byte_idx,bit_odd;
   void* io_buf = vmm_malloc(SEC_SIZE * 2,2);
   if (io_buf == NULL) {
      printk("sys_mkdir: sys_malloc for io_buf failed\n");
      return -1;
   }

   struct path_search_record searched_record;
   memset(&searched_record, 0, sizeof(struct path_search_record));
   int inode_no = -1;
   inode_no = search_file(pathname, &searched_record);
   if (inode_no != -1) {      // 如果找到了同名目录或文件,失败返回
      printk("sys_mkdir: file or directory %s exist!\n", pathname);
      rollback_step = 1;
      goto rollback;
   } else {	     // 若未找到,也要判断是在最终目录没找到还是某个中间目录不存在
      unsigned int pathname_depth = path_depth_cnt((char*)pathname);
      unsigned int path_searched_depth = path_depth_cnt(searched_record.searched_path);
      /* 先判断是否把pathname的各层目录都访问到了,即是否在某个中间目录就失败了 */
      if (pathname_depth != path_searched_depth) {   // 说明并没有访问到全部的路径,某个中间目录是不存在的
         printk("sys_mkdir: can`t access %s, subpath %s is`t exist\n", pathname, searched_record.searched_path);
         rollback_step = 1;
         goto rollback;
      }
   }

   struct dir* parent_dir = searched_record.parent_dir;
   /* 目录名称后可能会有字符'/',所以最好直接用searched_record.searched_path,无'/' */
   char* dirname = strrchr(searched_record.searched_path, '/') + 1;

   inode_no = inode_bitmap_alloc(cur_part); 
   if (inode_no == -1) {
      printk("sys_mkdir: allocate inode failed\n");
      rollback_step = 1;
      goto rollback;
   }

   struct inode new_dir_inode;
   inode_init(inode_no, &new_dir_inode);	    // 初始化i结点

   unsigned int block_bitmap_idx = 0;     // 用来记录block对应于block_bitmap中的索引
   int block_lba = -1;
/* 为目录分配一个块,用来写入目录.和.. */
   block_lba = block_bitmap_alloc(cur_part);
   if (block_lba == -1) {
      printk("sys_mkdir: block_bitmap_alloc for create directory failed\n");
      rollback_step = 2;
      goto rollback;
   }
   new_dir_inode.i_sectors[0] = block_lba;
   /* 每分配一个块就将位图同步到硬盘 */
   block_bitmap_idx = block_lba - cur_part->sb->data_start_lba;
   ASSERT(block_bitmap_idx != 0);
   bitmap_sync(cur_part, block_bitmap_idx, BLOCK_BITMAP);
   
   /* 将当前目录的目录项'.'和'..'写入目录 */
   memset(io_buf, 0, SEC_SIZE * 2);	 // 清空io_buf
   struct dir_entry* p_de = (struct dir_entry*)io_buf;
   
   /* 初始化当前目录"." */
   memcpy(p_de->filename, ".", 1);
   p_de->i_no = inode_no ;
   p_de->f_type = FT_DIRECTORY;

   p_de++;
   /* 初始化当前目录".." */
   memcpy(p_de->filename, "..", 2);
   p_de->i_no = parent_dir->inode->i_num;
   p_de->f_type = FT_DIRECTORY;
   ide_write(io_buf, new_dir_inode.i_sectors[0], 1);

   new_dir_inode.i_size = 2 * cur_part->sb->dir_entry_size;

   /* 在父目录中添加自己的目录项 */
   struct dir_entry new_dir_entry;
   memset(&new_dir_entry, 0, sizeof(struct dir_entry));
   create_dir_entry(dirname, inode_no, FT_DIRECTORY, &new_dir_entry);
   memset(io_buf, 0, SEC_SIZE * 2);	 // 清空io_buf
   if (!sync_dir_entry(parent_dir, &new_dir_entry, io_buf)) {	  // sync_dir_entry中将block_bitmap通过bitmap_sync同步到硬盘
      printk("sys_mkdir: sync_dir_entry to disk failed!\n");
      rollback_step = 2;
      goto rollback;
   }

   /* 父目录的inode同步到硬盘 */
   memset(io_buf, 0, SEC_SIZE * 2);
   inode_sync(cur_part, parent_dir->inode, io_buf);

   /* 将新创建目录的inode同步到硬盘 */
   memset(io_buf, 0, SEC_SIZE * 2);
   inode_sync(cur_part, &new_dir_inode, io_buf);

   /* 将inode位图同步到硬盘 */
   bitmap_sync(cur_part, inode_no, INODE_BITMAP);

   vmm_free(io_buf,SEC_SIZE * 2);

   /* 关闭所创建目录的父目录 */
   dir_close(searched_record.parent_dir);
   return 0;

/*创建文件或目录需要创建相关的多个资源,若某步失败则会执行到下面的回滚步骤 */
rollback:	     // 因为某步骤操作失败而回滚
   switch (rollback_step) {
      case 2:
         byte_idx = inode_no / 8;
         bit_odd  = inode_no % 8;
         cur_part->inode_bitmap.bits[byte_idx] &= ~(1 << bit_odd);
	 case 1:
         /* 关闭所创建目录的父目录 */
         dir_close(searched_record.parent_dir);
         break;
   }
   vmm_free(io_buf,SEC_SIZE*2);
   return -1;
}
/* 目录打开成功后返回目录指针,失败返回NULL */
struct dir* sys_opendir(const char* name) {
   ASSERT(strlen(name) < MAX_PATH_LEN);
   /* 如果是根目录'/',直接返回&root_dir */
   if (name[0] == '/' && (name[1] == 0 || name[0] == '.')) {
      return root_dir;
   }

   /* 先检查待打开的目录是否存在 */
   struct path_search_record searched_record;
   memset(&searched_record, 0, sizeof(struct path_search_record));
   int inode_no = search_file(name, &searched_record);
   struct dir* ret = NULL;
   if (inode_no == -1) {	 // 如果找不到目录,提示不存在的路径 
      printk("In %s, sub path %s not exist\n", name, searched_record.searched_path); 
   } else {
      if (searched_record.file_type == FT_REGULAR) {
	      printk("%s is regular file!\n", name);
      } else if (searched_record.file_type == FT_DIRECTORY) {
	      ret = dir_open(cur_part, inode_no);
      }
   }
   dir_close(searched_record.parent_dir);
   return ret;
}

/* 成功关闭目录dir返回0,失败返回-1 */
int sys_closedir(struct dir* dir) {
   int ret = -1;
   if (dir != NULL) {
      dir_close(dir);
      ret = 0;
   }
   return ret;
}
/* 读取目录dir的1个目录项,成功后返回其目录项地址,到目录尾时或出错时返回NULL */
struct dir_entry* sys_readdir(struct dir* dir) {
   ASSERT(dir != NULL);
   return dir_read(dir);
}

/* 把目录dir的指针dir_pos置0 */
void sys_rewinddir(struct dir* dir) {
   dir->dir_pos = 0;
}
/* 删除空目录,成功时返回0,失败时返回-1*/
int sys_rmdir(const char* pathname) {
   /* 先检查待删除的文件是否存在 */
   struct path_search_record searched_record;
   memset(&searched_record, 0, sizeof(struct path_search_record));
   int inode_no = search_file(pathname, &searched_record);
   ASSERT(inode_no != 0);
   int retval = -1;	// 默认返回值
   if (inode_no == -1) {
      printk("In %s, sub path %s not exist\n", pathname, searched_record.searched_path); 
   } else {
      if (searched_record.file_type == FT_REGULAR) {
         printk("%s is regular file!\n", pathname);
      } else { 
         struct dir* dir = dir_open(cur_part, inode_no);
         if (!dir_is_empty(dir)) {	 // 非空目录不可删除
            printk("dir %s is not empty, it is not allowed to delete a nonempty directory!\n", pathname);
         } else {
            if (!dir_remove(searched_record.parent_dir, dir)) {
               retval = 0;
            }
         }
         dir_close(dir);
      }
   }
   dir_close(searched_record.parent_dir);
   return retval;
}
/* 获得父目录的inode编号 */
static unsigned int get_parent_dir_inode_nr(unsigned int child_inode_nr, void* io_buf) {
   struct inode* child_dir_inode = inode_open(cur_part, child_inode_nr);
   /* 目录中的目录项".."中包括父目录inode编号,".."位于目录的第0块 */
   unsigned int block_lba = child_dir_inode->i_sectors[0];
   ASSERT(block_lba >= cur_part->sb->data_start_lba);
   inode_close(child_dir_inode);
   ide_read(io_buf, block_lba,  1);   
   struct dir_entry* dir_e = (struct dir_entry*)io_buf;
   /* 第0个目录项是".",第1个目录项是".." */
   ASSERT(dir_e[1].i_no < 4096 && dir_e[1].f_type == FT_DIRECTORY);
   return dir_e[1].i_no;      // 返回..即父目录的inode编号
}

/* 在inode编号为p_inode_nr的目录中查找inode编号为c_inode_nr的子目录的名字,
 * 将名字存入缓冲区path.成功返回0,失败返-1 */
static int get_child_dir_name(unsigned int p_inode_nr, unsigned int c_inode_nr, char* path, void* io_buf) {
   struct inode* parent_dir_inode = inode_open(cur_part, p_inode_nr);
   /* 填充all_blocks,将该目录的所占扇区地址全部写入all_blocks */
   unsigned char block_idx = 0;
   unsigned int all_blocks[140] = {0}, block_cnt = 12;
   while (block_idx < 12) {
      all_blocks[block_idx] = parent_dir_inode->i_sectors[block_idx];
      block_idx++;
   }
   if (parent_dir_inode->i_sectors[12]) {	// 若包含了一级间接块表,将共读入all_blocks.
      ide_read(all_blocks + 12,parent_dir_inode->i_sectors[12],  1);
      block_cnt = 140;
   }
   inode_close(parent_dir_inode);

   struct dir_entry* dir_e = (struct dir_entry*)io_buf;
   unsigned int dir_entry_size = cur_part->sb->dir_entry_size;
   unsigned int dir_entrys_per_sec = (512 / dir_entry_size);
   block_idx = 0;
  /* 遍历所有块 */
   while(block_idx < block_cnt) {
      if(all_blocks[block_idx]) {      // 如果相应块不为空则读入相应块
         ide_read(io_buf, all_blocks[block_idx],  1);
         unsigned char dir_e_idx = 0;
         /* 遍历每个目录项 */
         while(dir_e_idx < dir_entrys_per_sec) {
            if ((dir_e + dir_e_idx)->i_no == c_inode_nr) {
               strcat(path, "/");
               strcat(path, (dir_e + dir_e_idx)->filename);
               return 0;
            }
            dir_e_idx++;
         }
      }
      block_idx++;
   }
   return -1;
}

/* 把当前工作目录绝对路径写入buf, size是buf的大小. 
 当buf为NULL时,由操作系统分配存储工作路径的空间并返回地址
 失败则返回NULL */
char* sys_getcwd(char* buf, unsigned int size) {
   /* 确保buf不为空,若用户进程提供的buf为NULL,
   系统调用getcwd中要为用户进程通过malloc分配内存 */
   ASSERT(buf != NULL);
   void* io_buf = vmm_malloc(SEC_SIZE,2);
   if (io_buf == NULL) {
      return NULL;
   }

   int parent_inode_nr = 0;
   int child_inode_nr = current->cwd_inode_nr;
   ASSERT(child_inode_nr >= 0 && child_inode_nr < 4096);      // 最大支持4096个inode
   /* 若当前目录是根目录,直接返回'/' */
   if (child_inode_nr == 0) {
      buf[0] = '/';
      buf[1] = 0;
      return buf;
   }  

   memset(buf, 0, size);
   char full_path_reverse[MAX_PATH_LEN] = {0};	  // 用来做全路径缓冲区

   /* 从下往上逐层找父目录,直到找到根目录为止.
    * 当child_inode_nr为根目录的inode编号(0)时停止,
    * 即已经查看完根目录中的目录项 */
   while ((child_inode_nr)) {
      parent_inode_nr = get_parent_dir_inode_nr(child_inode_nr, io_buf);
      if (get_child_dir_name(parent_inode_nr, child_inode_nr, full_path_reverse, io_buf) == -1) {	  // 或未找到名字,失败退出
         vmm_free(io_buf,SEC_SIZE);
         return NULL;
      }
      child_inode_nr = parent_inode_nr;
   }
   ASSERT(strlen(full_path_reverse) <= size);
/* 至此full_path_reverse中的路径是反着的,
 * 即子目录在前(左),父目录在后(右) ,
 * 现将full_path_reverse中的路径反置 */
   char* last_slash;	// 用于记录字符串中最后一个斜杠地址
   while ((last_slash = strrchr(full_path_reverse, '/'))) {
      unsigned short len = strlen(buf);
      strcpy(buf + len, last_slash);
      /* 在full_path_reverse中添加结束字符,做为下一次执行strcpy中last_slash的边界 */
      *last_slash = 0;
   }
   vmm_free(io_buf,SEC_SIZE);
   return buf;
}
/* 在buf中填充文件结构相关信息,成功时返回0,失败返回-1 */
int sys_stat(const char* path, struct stat* buf) {
   /* 若直接查看根目录'/' */
   if (!strcmp(path, "/") || !strcmp(path, "/.") || !strcmp(path, "/..")) {
      buf->st_filetype = FT_DIRECTORY;
      buf->st_ino = 0;
      buf->st_size = root_dir->inode->i_size;
      return 0;
   }

   int ret = -1;	// 默认返回值
   struct path_search_record searched_record;
   memset(&searched_record, 0, sizeof(struct path_search_record));   // 记得初始化或清0,否则栈中信息不知道是什么
   int inode_no = search_file(path, &searched_record);
   if (inode_no != -1) {
      struct inode* obj_inode = inode_open(cur_part, inode_no);   // 只为获得文件大小
      buf->st_size = obj_inode->i_size;
      inode_close(obj_inode);
      buf->st_filetype = searched_record.file_type;
      buf->st_ino = inode_no;
      ret = 0;
   } else {
      printk("sys_stat: %s not found\n", path);
   }
   dir_close(searched_record.parent_dir);
   return ret;
}

/* 更改当前工作目录为绝对路径path,成功则返回0,失败返回-1 */
int sys_chdir(const char* path) {
   int ret = -1;
   struct path_search_record searched_record;  
   memset(&searched_record, 0, sizeof(struct path_search_record));
   int inode_no = search_file(path, &searched_record);
   if (inode_no != -1) {
      if (searched_record.file_type == FT_DIRECTORY) {
         current->cwd_inode_nr = inode_no;
         ret = 0;
      } else {
         printk("sys_chdir: %s is regular file or other!\n", path);
      }
   }
   dir_close(searched_record.parent_dir); 
   return ret;
}

void fs_init(){
    //partition_format();  //初始化主分区，只需运行一次就行，硬盘中就有分区信息
    mount_partition();
    //unsigned int fd=sys_open("/file",O_CREAT);
   // unsigned int fd=sys_open("/file",O_RDWR); //O_RDONLY
    //sys_open("/file1",O_CREAT);
    //sys_open("/file2",O_CREAT);
    //sys_open("/file",O_CREAT);
    //printk("fd:%02d\n",fd);
    //printk("open /file1 fd1:%02d\n",fd1);
    //sys_write(fd,"Hello,world!Hello,world!\n",25);
   // char buf[64]={0};
    //sys_lseek(fd,0,SEEK_SET);
    //int read_bytes=sys_read(fd,buf,13);
    //printk("read %08x bytes:\n %s\n",read_bytes,buf);
    //memset(buf,0,64);
    //read_bytes=sys_read(fd,buf,12);
    //printk("read %08x bytes:\n %s\n",read_bytes,buf);
    //sys_lseek(fd,0,SEEK_SET);
    //memset(buf,0,64);
    //read_bytes=sys_read(fd,buf,12);
    //printk("read %08x bytes:\n %s\n",read_bytes,buf);
    //sys_close(fd);
    //printk("%02d closed now\n",fd1);
    //printk("/file1 delete %s!\n", sys_unlink("/file") == 0 ? "done" : "fail");
   
    //测试目录
  /*  printk("/dir1/subdir1 create %s!\n", sys_mkdir("/dir1/subdir1") == 0 ? "done" : "fail");
   printk("/dir1 create %s!\n", sys_mkdir("/dir1") == 0 ? "done" : "fail");
   printk("now, /dir1/subdir1 create %s!\n", sys_mkdir("/dir1/subdir1") == 0 ? "done" : "fail");
   int fd = sys_open("/dir1/subdir1/file2", O_CREAT|O_RDWR);
   if (fd != -1) {
      printk("/dir1/subdir1/file2 create done!\n");
      sys_write(fd, "Catch me if you can!\n", 21);
      sys_lseek(fd, 0, SEEK_SET);
      char buf[32] = {0};
      sys_read(fd, buf, 21); 
      printk("/dir1/subdir1/file2 says:\n%s", buf);
      sys_close(fd);
   } */
   //测试打开目录
   /*   struct dir* p_dir = sys_opendir("/dir1/subdir1");
   if (p_dir) {
      printk("/dir1/subdir1 open done!\n");
      if (sys_closedir(p_dir) == 0) {
	 printk("/dir1/subdir1 close done!\n");
      } else {
	 printk("/dir1/subdir1 close fail!\n");
      }
   } else {
      printk("/dir1/subdir1 open fail!\n");
   }
   */
  //测试读目录
  /*struct dir* p_dir = sys_opendir("/dir1/subdir1");
   if (p_dir) {
      printk("/dir1/subdir1 open done!\ncontent:\n");
      char* type = NULL;
      struct dir_entry* dir_e = NULL;
      while((dir_e = sys_readdir(p_dir))) { 
	 if (dir_e->f_type == FT_REGULAR) {
	    type = "regular";
	 } else {
	    type = "directory";
	 }
	 printk("      %s   %s\n", type, dir_e->filename);
      }
      if (sys_closedir(p_dir) == 0) {
	 printk("/dir1/subdir1 close done!\n");
      } else {
	 printk("/dir1/subdir1 close fail!\n");
      }
   } else {
      printk("/dir1/subdir1 open fail!\n");
   }
   */
  //测试删除目录
  /*clear();
   printk("/dir1 content before delete /dir1/subdir1:\n");
   struct dir* dir = sys_opendir("/dir1/");
   char* type = NULL;
   struct dir_entry* dir_e = NULL;
   while((dir_e = sys_readdir(dir))) { 
      if (dir_e->f_type == FT_REGULAR) {
	 type = "regular";
      } else {
	 type = "directory";
      }
      printk("      %s   %s\n", type, dir_e->filename);
   }
   printk("try to delete nonempty directory /dir1/subdir1\n");
   if (sys_rmdir("/dir1/subdir1") == -1) {
      printk("sys_rmdir: /dir1/subdir1 delete fail!\n");
   }

   printk("try to delete /dir1/subdir1/file2\n");
   if (sys_rmdir("/dir1/subdir1/file2") == -1) {
      printk("sys_rmdir: /dir1/subdir1/file2 delete fail!\n");
   } 
   if (sys_unlink("/dir1/subdir1/file2") == 0 ) {
      printk("sys_unlink: /dir1/subdir1/file2 delete done\n");
   }
   
   printk("try to delete directory /dir1/subdir1 again\n");
   if (sys_rmdir("/dir1/subdir1") == 0) {
      printk("/dir1/subdir1 delete done!\n");
   }

   printk("/dir1 content after delete /dir1/subdir1:\n");
   sys_rewinddir(dir);
   while((dir_e = sys_readdir(dir))) { 
      if (dir_e->f_type == FT_REGULAR) {
	 type = "regular";
      } else {
	 type = "directory";
      }
      printk("      %s   %s\n", type, dir_e->filename);
   }
   */
  //测试打开工作目录
   /*char cwd_buf[32] = {0};
   sys_getcwd(cwd_buf, 32);
   printk("cwd:%s\n", cwd_buf);
   sys_chdir("/dir1");
   printk("change cwd now\n");
   sys_getcwd(cwd_buf, 32);
   printk("cwd:%s\n", cwd_buf);*/
   //获得文件属性
  /* struct stat obj_stat;
   clear();
   sys_stat("/", &obj_stat);
   printk("/`s info\n   i_no:%02x\n   size:%02x\n   filetype:%s\n", \
	 obj_stat.st_ino, obj_stat.st_size, \
	 obj_stat.st_filetype == 2 ? "directory" : "regular");
   sys_stat("/dir1", &obj_stat);
   printk("/dir1`s info\n   i_no:%02x\n   size:%02x\n   filetype:%s\n", \
	 obj_stat.st_ino, obj_stat.st_size, \
	 obj_stat.st_filetype == 2 ? "directory" : "regular");*/
}