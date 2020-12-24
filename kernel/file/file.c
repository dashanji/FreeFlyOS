#include "file.h"
#include "fs.h"
#include "inode.h"
#include "../debug/debug.h"
#include "../vga/vga.h"
#include "../task/task.h"
#define NULL (void *)0
#define BITMAP_MASK 1
/* 文件表 */
struct file file_table[MAX_FILE_OPEN];
extern struct task_struct *current;
extern struct partition *cur_part;
/* 从文件表file_table中获取一个空闲位,成功返回下标，失败返回-1 */
int get_free_slot_in_global(void){
   unsigned int fd_idx=3;
   while(fd_idx<MAX_FILE_OPEN){
      if(file_table[fd_idx].fd_inode==NULL)
         break;
      fd_idx++;
   }
   if(fd_idx==MAX_FILE_OPEN){
      return -1;
   }
   return fd_idx;
}
/* 将全局描述符下标安装到进程或线程自己的文件描述符数组fd_table中，成功返回下标，失败返回-1 */
int task_fd_install(int global_fd_idx){
   char local_fd_idx=3; 
   while(local_fd_idx<MAX_FILE){
      if(current->fd_table[local_fd_idx]==-1){
         current->fd_table[local_fd_idx]=global_fd_idx;
         break;
      }
      local_fd_idx++;
   }
   if(local_fd_idx==MAX_FILE){
     return -1;
   }
   return local_fd_idx;
}
/* 分配一个i节点，返回i节点号 */
int inode_bitmap_alloc(struct partition *part){
   unsigned int idx_byte=0;//记录空闲位所在字节
    /* 先逐字节比较,蛮力法 */
   while (( 0xff == part->inode_bitmap.bits[idx_byte]) && (idx_byte < part->inode_bitmap.btmp_bytes_len)) {
   /* 1表示该位已分配,所以若为0xff,则表示该字节内已无空闲位,向下一字节继续找 */
      idx_byte++;
   }
   if (idx_byte == part->inode_bitmap.btmp_bytes_len) {  // 若该内存池找不到可用空间		
      return -1;
   } 

   /* 若在位图数组范围内的某字节内找到了空闲位，
  * 在该字节内逐位比对,返回空闲位的索引。*/
   int idx_bit = 0;
 /* 和btmp->bits[idx_byte]这个字节逐位对比 */
   while ((unsigned char)(BITMAP_MASK << idx_bit) & part->inode_bitmap.bits[idx_byte]) { 
	   idx_bit++;
   }
   int bit_idx_start = idx_byte * 8 + idx_bit;    // 空闲位在位图内的下标
   part->inode_bitmap.bits[idx_byte]|= (BITMAP_MASK << idx_bit); //将空闲位置1
   return bit_idx_start;
}

/* 分配1个扇区，返回扇区地址 */
int block_bitmap_alloc(struct partition *part){
   unsigned int idx_byte=0;//记录空闲位所在字节
   /* 先逐字节比较,蛮力法 */
   while (( 0xff == part->block_bitmap.bits[idx_byte]) && (idx_byte < part->block_bitmap.btmp_bytes_len)) {
   /* 1表示该位已分配,所以若为0xff,则表示该字节内已无空闲位,向下一字节继续找 */
      idx_byte++;
   }
   if (idx_byte == part->block_bitmap.btmp_bytes_len) {  // 若该内存池找不到可用空间		
      return -1;
   } 

   /* 若在位图数组范围内的某字节内找到了空闲位，
   * 在该字节内逐位比对,返回空闲位的索引。*/
   int idx_bit = 0;
   /* 和btmp->bits[idx_byte]这个字节逐位对比 */
   while ((unsigned char)(BITMAP_MASK << idx_bit) & part->block_bitmap.bits[idx_byte]) { 
	   idx_bit++;
   }
   int bit_idx_start = idx_byte * 8 + idx_bit;    // 空闲位在位图内的下标
   part->block_bitmap.bits[idx_byte]|= (BITMAP_MASK << idx_bit); //将空闲位置1
   return part->sb->data_start_lba+bit_idx_start;
}
/* 将内存中bitmap第bit_idx位所在的512字节同步到硬盘 */
void bitmap_sync(struct partition *part,unsigned int bit_idx,unsigned char btmp){
   //i节点索引相对于位图的扇区偏移量
   unsigned int off_sec=bit_idx/(512*8);
   //i节点索引相对于位图的字节偏移量
   unsigned int off_size=off_sec * SECTSIZE;
   unsigned int sec_lba;
   unsigned char *bitmap_off;

   /* 需要被同步到硬盘的位图只有inode_bitmap和block_bitmap */
   switch(btmp){
      case INODE_BITMAP:
         sec_lba=part->sb->inode_bitmap_lba+off_sec;
         bitmap_off= part->inode_bitmap.bits + off_size;
         break;
      case BLOCK_BITMAP:
         sec_lba=part->sb->block_bitmap_lba+off_sec;
         bitmap_off= part->block_bitmap.bits + off_size;
         break;
   }
   ide_write(bitmap_off,sec_lba,1);
}
/* 创建文件,若成功则返回文件描述符,否则返回-1 */
int file_create(struct dir* parent_dir, char* filename, unsigned char flag) {
   /* 后续操作的公共缓冲区 */
   void* io_buf = vmm_malloc(1024,2);
   if (io_buf == NULL) {
      printk("in file_creat: sys_malloc for io_buf failed\n");
      return -1;
   }

   unsigned char rollback_step = 0;	       // 用于操作失败时回滚各资源状态

   /* 为新文件分配inode */
   int inode_no = inode_bitmap_alloc(cur_part); 
   if (inode_no == -1) {
      printk("in file_creat: allocate inode failed\n");
      return -1;
   }

/* 此inode要从堆中申请内存,不可生成局部变量(函数退出时会释放)
 * 因为file_table数组中的文件描述符的inode指针要指向它.*/
   struct inode* new_file_inode = (struct inode*)vmm_malloc(sizeof(struct inode),2); 
   if (new_file_inode == NULL) {
      printk("file_create: sys_malloc for inode failded\n");
      rollback_step = 1;
      goto rollback;
   }
   inode_init(inode_no, new_file_inode);	    // 初始化i结点

   /* 返回的是file_table数组的下标 */
   int fd_idx = get_free_slot_in_global();
   if (fd_idx == -1) {
      printk("exceed max open files\n");
      rollback_step = 2;
      goto rollback;
   }

   file_table[fd_idx].fd_inode = new_file_inode;
   file_table[fd_idx].fd_pos = 0;
   file_table[fd_idx].fd_flag = flag;
   file_table[fd_idx].fd_inode->write_lock = 0;

   struct dir_entry new_dir_entry;
   memset(&new_dir_entry, 0, sizeof(struct dir_entry));

   create_dir_entry(filename, inode_no, FT_REGULAR, &new_dir_entry);	// create_dir_entry只是内存操作不出意外,不会返回失败

/* 同步内存数据到硬盘 */
   /* a 在目录parent_dir下安装目录项new_dir_entry, 写入硬盘后返回true,否则false */
   if (!sync_dir_entry(parent_dir, &new_dir_entry, io_buf)) {
      printk("sync dir_entry to disk failed\n");
      rollback_step = 3;
      goto rollback;
   }

   memset(io_buf, 0, 1024);
   /* b 将父目录i结点的内容同步到硬盘 */
   inode_sync(cur_part, parent_dir->inode, io_buf);

   memset(io_buf, 0, 1024);
   /* c 将新创建文件的i结点内容同步到硬盘 */
   inode_sync(cur_part, new_file_inode, io_buf);

   /* d 将inode_bitmap位图同步到硬盘 */
   bitmap_sync(cur_part, inode_no, INODE_BITMAP);

   /* e 将创建的文件i结点添加到open_inodes链表 */
   //list_push(&cur_part->open_inodes, &new_file_inode->inode_tag);
   //new_file_inode->i_open_cnts = 1;

   vmm_free(io_buf,1024);
   return task_fd_install(fd_idx);
   unsigned int byte_idx;
   unsigned int bit_odd;
   /*创建文件需要创建相关的多个资源,若某步失败则会执行到下面的回滚步骤 */
rollback:
   switch (rollback_step) {
      case 3:
	   /* 失败时,将file_table中的相应位清空 */
	      memset(&file_table[fd_idx], 0, sizeof(struct file)); 
      case 2:
	      vmm_free(new_file_inode,sizeof(struct inode));
      case 1:
	      /* 如果新文件的i结点创建失败,之前位图中分配的inode_no也要恢复 */
         byte_idx = inode_no / 8;    // 向下取整用于索引数组下标
         bit_odd  = inode_no % 8;    // 取余用于索引数组内的位
         cur_part->inode_bitmap.bits[byte_idx] &= ~(BITMAP_MASK << 0);
	      break;
   }
   vmm_free(io_buf,1024);
   return -1;
}
/* 打开编号为inode_no的inode对应的文件,若成功则返回文件描述符,否则返回-1 */
int file_open(unsigned int inode_no, unsigned char flag) {
   int fd_idx = get_free_slot_in_global();
   if (fd_idx == -1) {
      printk("exceed max open files\n");
      return -1;
   }
   //printk("fd_idx:%08d\n",inode_no);
   file_table[fd_idx].fd_inode = inode_open(cur_part, inode_no);
   //printk("file_table[fd_idx].fd_inode->inum:%08x",file_table[fd_idx].fd_inode->i_num);
   file_table[fd_idx].fd_pos = 0;	     // 每次打开文件,要将fd_pos还原为0,即让文件内的指针指向开头
   file_table[fd_idx].fd_flag = flag;
   char* write_lock = &file_table[fd_idx].fd_inode->write_lock; 

   if (flag & O_WRONLY || flag & O_RDWR) {	// 只要是关于写文件,判断是否有其它进程正写此文件
						// 若是读文件,不考虑write_deny
      /* 以下进入临界区前先关中断 */
      enum intr_status flag;
      local_intr_save(flag);
      if (!(*write_lock)) {    // 若当前没有其它进程写该文件,将其占用.
         *write_lock = 1;   // 置为true,避免多个进程同时写此文件
         local_intr_restore(flag);  // 恢复中断
      } 
      else {		// 直接失败返回
         local_intr_restore(flag);  // 恢复中断
         printk("file can`t be write now, try again later\n");
         return -1;
      }
      
   }  // 若是读文件或创建文件,不用理会write_deny,保持默认
   return task_fd_install(fd_idx);
}

/* 关闭文件 */
int file_close(struct file* file) {
   if (file == NULL) {
      return -1;
   }
   file->fd_inode->write_lock = 0;
   inode_close(file->fd_inode);
   file->fd_inode = NULL;   // 使文件结构可用
   return 0;
}

/* 把buf中的count个字节写入file,成功则返回写入的字节数,失败则返回-1 */
int file_write(struct file* file, const void* buf, unsigned int count) {
   if ((file->fd_inode->i_size + count) > (SEC_SIZE * 140))	{   // 文件目前最大只支持512*140=71680字节
      printk("exceed max file_size 71680 bytes, write file failed\n");
      return -1;
   }
   unsigned char* io_buf = (unsigned char *)vmm_malloc(SEC_SIZE,2);
   if (io_buf == NULL) {
      printk("file_write: sys_malloc for io_buf failed\n");
      return -1;
   }
   unsigned int* all_blocks =(unsigned int *)vmm_malloc(SEC_SIZE + 48,2);	  // 用来记录文件所有的块地址
   if (all_blocks == NULL) {
      printk("file_write: sys_malloc for all_blocks failed\n");
      return -1;
   }

   const unsigned char* src = buf;	    // 用src指向buf中待写入的数据 
   unsigned int bytes_written = 0;	    // 用来记录已写入数据大小
   unsigned int size_left = count;	    // 用来记录未写入数据大小
   int block_lba = -1;	    // 块地址
   unsigned int block_bitmap_idx = 0;   // 用来记录block对应于block_bitmap中的索引,做为参数传给bitmap_sync
   unsigned int sec_idx;	      // 用来索引扇区
   unsigned int sec_lba;	      // 扇区地址
   unsigned int sec_off_bytes;    // 扇区内字节偏移量
   unsigned int sec_left_bytes;   // 扇区内剩余字节量
   unsigned int chunk_size;	      // 每次写入硬盘的数据块大小
   int indirect_block_table;      // 用来获取一级间接表地址
   unsigned int block_idx;		      // 块索引

   /* 判断文件是否是第一次写,如果是,先为其分配一个块 */
   if (file->fd_inode->i_sectors[0] == 0) {
      block_lba = block_bitmap_alloc(cur_part);
      if (block_lba == -1) {
         printk("file_write: block_bitmap_alloc failed\n");
         return -1;
      }
      file->fd_inode->i_sectors[0] = block_lba;

      /* 每分配一个块就将位图同步到硬盘 */
      block_bitmap_idx = block_lba - cur_part->sb->data_start_lba;
      ASSERT(block_bitmap_idx != 0);
      bitmap_sync(cur_part, block_bitmap_idx, BLOCK_BITMAP);
   }

   /* 写入count个字节前,该文件已经占用的块数 */
   unsigned int file_has_used_blocks = file->fd_inode->i_size / SEC_SIZE + 1;

   /* 存储count字节后该文件将占用的块数 */
   unsigned int file_will_use_blocks = (file->fd_inode->i_size + count) / SEC_SIZE + 1;
   ASSERT(file_will_use_blocks <= 140);

   /* 通过此增量判断是否需要分配扇区,如增量为0,表示原扇区够用 */
   unsigned int add_blocks = file_will_use_blocks - file_has_used_blocks;

/* 开始将文件所有块地址收集到all_blocks,(系统中块大小等于扇区大小)
 * 后面都统一在all_blocks中获取写入扇区地址 */
   if (add_blocks == 0) { 
   /* 在同一扇区内写入数据,不涉及到分配新扇区 */
      if (file_has_used_blocks <= 12 ) {	// 文件数据量将在12块之内
	      block_idx = file_has_used_blocks - 1;  // 指向最后一个已有数据的扇区
	      all_blocks[block_idx] = file->fd_inode->i_sectors[block_idx];
      } else { 
         /* 未写入新数据之前已经占用了间接块,需要将间接块地址读进来 */
	      ASSERT(file->fd_inode->i_sectors[12] != 0);
         indirect_block_table = file->fd_inode->i_sectors[12];
	      ide_read(all_blocks + 12, indirect_block_table, 1);
      }
   } else {
   /* 若有增量,便涉及到分配新扇区及是否分配一级间接块表,下面要分三种情况处理 */
   /* 第一种情况:12个直接块够用*/
      if (file_will_use_blocks <= 12 ) {
         /* 先将有剩余空间的可继续用的扇区地址写入all_blocks */
         block_idx = file_has_used_blocks - 1;
         ASSERT(file->fd_inode->i_sectors[block_idx] != 0);
         all_blocks[block_idx] = file->fd_inode->i_sectors[block_idx];

         /* 再将未来要用的扇区分配好后写入all_blocks */
         block_idx = file_has_used_blocks;      // 指向第一个要分配的新扇区
         while (block_idx < file_will_use_blocks) {
            block_lba = block_bitmap_alloc(cur_part);
            if (block_lba == -1) {
               printk("file_write: block_bitmap_alloc for situation 1 failed\n");
               return -1;
            }

            /* 写文件时,不应该存在块未使用但已经分配扇区的情况,当文件删除时,就会把块地址清0 */
            ASSERT(file->fd_inode->i_sectors[block_idx] == 0);     // 确保尚未分配扇区地址
            file->fd_inode->i_sectors[block_idx] = all_blocks[block_idx] = block_lba;

            /* 每分配一个块就将位图同步到硬盘 */
            block_bitmap_idx = block_lba - cur_part->sb->data_start_lba;
            bitmap_sync(cur_part, block_bitmap_idx, BLOCK_BITMAP);

            block_idx++;   // 下一个分配的新扇区
	      }
      } else if (file_has_used_blocks <= 12 && file_will_use_blocks > 12) { 
         /* 第二种情况: 旧数据在12个直接块内,新数据将使用间接块*/

         /* 先将有剩余空间的可继续用的扇区地址收集到all_blocks */
         block_idx = file_has_used_blocks - 1;      // 指向旧数据所在的最后一个扇区
         all_blocks[block_idx] = file->fd_inode->i_sectors[block_idx];

         /* 创建一级间接块表 */
         block_lba = block_bitmap_alloc(cur_part);
         if (block_lba == -1) {
            printk("file_write: block_bitmap_alloc for situation 2 failed\n");
            return -1;
         }

         ASSERT(file->fd_inode->i_sectors[12] == 0);  // 确保一级间接块表未分配
         /* 分配一级间接块索引表 */
         indirect_block_table = file->fd_inode->i_sectors[12] = block_lba;

         block_idx = file_has_used_blocks;	// 第一个未使用的块,即本文件最后一个已经使用的直接块的下一块
         while (block_idx < file_will_use_blocks) {
            block_lba = block_bitmap_alloc(cur_part);
            if (block_lba == -1) {
               printk("file_write: block_bitmap_alloc for situation 2 failed\n");
               return -1;
            }

            if (block_idx < 12) {      // 新创建的0~11块直接存入all_blocks数组
               ASSERT(file->fd_inode->i_sectors[block_idx] == 0);      // 确保尚未分配扇区地址
               file->fd_inode->i_sectors[block_idx] = all_blocks[block_idx] = block_lba;
            } else {     // 间接块只写入到all_block数组中,待全部分配完成后一次性同步到硬盘
               all_blocks[block_idx] = block_lba;
            }

            /* 每分配一个块就将位图同步到硬盘 */
            block_bitmap_idx = block_lba - cur_part->sb->data_start_lba;
            bitmap_sync(cur_part, block_bitmap_idx, BLOCK_BITMAP);

            block_idx++;   // 下一个新扇区
         }
         ide_write(all_blocks + 12, indirect_block_table, 1);      // 同步一级间接块表到硬盘
      } else if (file_has_used_blocks > 12) {
         /* 第三种情况:新数据占据间接块*/
         ASSERT(file->fd_inode->i_sectors[12] != 0); // 已经具备了一级间接块表
         indirect_block_table = file->fd_inode->i_sectors[12];	 // 获取一级间接表地址

         /* 已使用的间接块也将被读入all_blocks,无须单独收录 */
         ide_read(all_blocks + 12, indirect_block_table, 1); // 获取所有间接块地址

         block_idx = file_has_used_blocks;	  // 第一个未使用的间接块,即已经使用的间接块的下一块
         while (block_idx < file_will_use_blocks) {
            block_lba = block_bitmap_alloc(cur_part);
            if (block_lba == -1) {
               printk("file_write: block_bitmap_alloc for situation 3 failed\n");
               return -1;
            }
            all_blocks[block_idx++] = block_lba;

            /* 每分配一个块就将位图同步到硬盘 */
            block_bitmap_idx = block_lba - cur_part->sb->data_start_lba;
            bitmap_sync(cur_part, block_bitmap_idx, BLOCK_BITMAP);
         }
         ide_write(all_blocks + 12, indirect_block_table , 1);   // 同步一级间接块表到硬盘
      } 
   }

   char first_write_block = 1;      // 含有剩余空间的扇区标识
   /* 块地址已经收集到all_blocks中,下面开始写数据 */
   file->fd_pos = file->fd_inode->i_size - 1;   // 置fd_pos为文件大小-1,下面在写数据时随时更新
   while (bytes_written < count) {      // 直到写完所有数据
      memset(io_buf, 0, SEC_SIZE);
      sec_idx = file->fd_inode->i_size / SEC_SIZE;
      sec_lba = all_blocks[sec_idx];
      sec_off_bytes = file->fd_inode->i_size % SEC_SIZE;
      sec_left_bytes = SEC_SIZE - sec_off_bytes;

      /* 判断此次写入硬盘的数据大小 */
      chunk_size = size_left < sec_left_bytes ? size_left : sec_left_bytes;
      if (first_write_block) {
         ide_read(io_buf, sec_lba, 1);
         first_write_block = 0;
      }
      memcpy(io_buf + sec_off_bytes, src, chunk_size);
      ide_write(io_buf, sec_lba, 1);
     // printk("file write at lba 0x%08x\n", sec_lba);    //调试,完成后去掉

      src += chunk_size;   // 将指针推移到下个新数据
      file->fd_inode->i_size += chunk_size;  // 更新文件大小
      file->fd_pos += chunk_size;   
      bytes_written += chunk_size;
      size_left -= chunk_size;
   }
   inode_sync(cur_part, file->fd_inode, io_buf);
   vmm_free(all_blocks,SEC_SIZE + 48);
   vmm_free(io_buf,SEC_SIZE);
   return bytes_written;
}
/* 从文件file中读取count个字节写入buf, 返回读出的字节数,若到文件尾则返回-1 */
int file_read(struct file* file, void* buf, unsigned int count) {
   unsigned char* buf_dst = (unsigned char*)buf;
   unsigned int size = count, size_left = size;
   //printk("file pos %02d\n",file->fd_pos);
   //printk("file size %02d\n",file->fd_inode->i_size);
   /* 若要读取的字节数超过了文件可读的剩余量, 就用剩余量做为待读取的字节数 */
   if ((file->fd_pos + count) > file->fd_inode->i_size)	{
      size = file->fd_inode->i_size - file->fd_pos;
      size_left = size;
      if (size == 0) {	   // 若到文件尾则返回-1
	      return -1;
      }
   }
   //printk("file read size %02d\n",size);
   unsigned char* io_buf = (unsigned char *)vmm_malloc(SEC_SIZE,2);
   if (io_buf == NULL) {
      printk("file_read: sys_malloc for io_buf failed\n");
   }
   unsigned int* all_blocks = (unsigned int *)vmm_malloc(SEC_SIZE + 48,2);	  // 用来记录文件所有的块地址
   if (all_blocks == NULL) {
      printk("file_read: sys_malloc for all_blocks failed\n");
      return -1;
   }

   unsigned int block_read_start_idx = file->fd_pos / SEC_SIZE;		       // 数据所在块的起始地址
   unsigned int block_read_end_idx = (file->fd_pos + size) / SEC_SIZE;	       // 数据所在块的终止地址
   unsigned int read_blocks = block_read_start_idx - block_read_end_idx;	       // 如增量为0,表示数据在同一扇区
   ASSERT(block_read_start_idx < 139 && block_read_end_idx < 139);

   int indirect_block_table;       // 用来获取一级间接表地址
   unsigned int block_idx;		       // 获取待读的块地址 

/* 以下开始构建all_blocks块地址数组,专门存储用到的块地址(本程序中块大小同扇区大小) */
   if (read_blocks == 0) {       // 在同一扇区内读数据,不涉及到跨扇区读取
      ASSERT(block_read_end_idx == block_read_start_idx);
      if (block_read_end_idx < 12 ) {	   // 待读的数据在12个直接块之内
         block_idx = block_read_end_idx;
         all_blocks[block_idx] = file->fd_inode->i_sectors[block_idx];
      } else {		// 若用到了一级间接块表,需要将表中间接块读进来
         indirect_block_table = file->fd_inode->i_sectors[12];
         ide_read(all_blocks + 12, indirect_block_table, 1);
      }
   } else {      // 若要读多个块
      /* 第一种情况: 起始块和终止块属于直接块*/
      if (block_read_end_idx < 12 ) {	  // 数据结束所在的块属于直接块
	      block_idx = block_read_start_idx; 
	      while (block_idx <= block_read_end_idx) {
	         all_blocks[block_idx] = file->fd_inode->i_sectors[block_idx]; 
	         block_idx++;
	      }
      } else if (block_read_start_idx < 12 && block_read_end_idx >= 12) {
      /* 第二种情况: 待读入的数据跨越直接块和间接块两类*/
      /* 先将直接块地址写入all_blocks */
	      block_idx = block_read_start_idx;
	      while (block_idx < 12) {
	         all_blocks[block_idx] = file->fd_inode->i_sectors[block_idx];
	         block_idx++;
	      }
	      ASSERT(file->fd_inode->i_sectors[12] != 0);	    // 确保已经分配了一级间接块表

         /* 再将间接块地址写入all_blocks */
	      indirect_block_table = file->fd_inode->i_sectors[12];
	      ide_read(all_blocks + 12, indirect_block_table,  1);	      // 将一级间接块表读进来写入到第13个块的位置之后
      } else {	
         /* 第三种情况: 数据在间接块中*/
	      ASSERT(file->fd_inode->i_sectors[12] != 0);	    // 确保已经分配了一级间接块表
	      indirect_block_table = file->fd_inode->i_sectors[12];	      // 获取一级间接表地址
	      ide_read(all_blocks + 12, indirect_block_table,  1);	      // 将一级间接块表读进来写入到第13个块的位置之后
      } 
   }

   /* 用到的块地址已经收集到all_blocks中,下面开始读数据 */
   unsigned int sec_idx, sec_lba, sec_off_bytes, sec_left_bytes, chunk_size;
   unsigned int bytes_read = 0;
   while (bytes_read < size) {	      // 直到读完为止
      sec_idx = file->fd_pos / SEC_SIZE;
      sec_lba = all_blocks[sec_idx];
      sec_off_bytes = file->fd_pos % SEC_SIZE;
      sec_left_bytes = SEC_SIZE - sec_off_bytes;
      chunk_size = size_left < sec_left_bytes ? size_left : sec_left_bytes;	     // 待读入的数据大小

      memset(io_buf, 0, SEC_SIZE);
      ide_read(io_buf, sec_lba, 1);
      memcpy(buf_dst, io_buf + sec_off_bytes, chunk_size);

      buf_dst += chunk_size;
      file->fd_pos += chunk_size;
      bytes_read += chunk_size;
      size_left -= chunk_size;
   }
   vmm_free(all_blocks,SEC_SIZE + 48);
   vmm_free(io_buf,SEC_SIZE);
   return bytes_read;
}
