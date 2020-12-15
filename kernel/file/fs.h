#ifndef _FS_H_
#define _FS_H_
#define MAX_FILE 1000  //一个分区最大文件数
#define SEC_SIZE 512  //扇区大小
#define MAX_PATH_LEN 512	    // 路径最大长度
/* 文件类型 */
enum file_types {
   FT_UNKNOWN,	  // 不支持的文件类型
   FT_REGULAR,	  // 普通文件
   FT_DIRECTORY	  // 目录
};

/* 打开文件的选项 */
enum oflags {
   O_RDONLY,	  // 只读
   O_WRONLY,	  // 只写
   O_RDWR,	  // 读写
   O_CREAT = 4	  // 创建
};

/* 文件读写位置偏移量 */
enum whence {
   SEEK_SET = 1,
   SEEK_CUR,
   SEEK_END
};

/* 文件属性结构体 */
struct stat {
   unsigned int st_ino;		 // inode编号
   unsigned int st_size;		 // 尺寸
   enum file_types st_filetype;	 // 文件类型
};
/* 用来记录查找文件过程中已找到的上级路径,也就是查找文件过程中"走过的地方" */
struct path_search_record {
   char searched_path[MAX_PATH_LEN];	    // 查找过程中的父路径
   struct dir* parent_dir;		    // 文件或目录所在的直接父目录
   enum file_types file_type;		    // 找到的是普通文件还是目录,找不到将为未知类型(FT_UNKNOWN)
};
void mount_partition();
int path_depth_cnt(char* pathname);
int sys_open(const char* pathname, unsigned char flags);
int sys_close(int fd);
int sys_write(int fd, const void* buf, unsigned int count);
int sys_read(int fd, void* buf, unsigned int count);
int sys_lseek(int fd, int offset, unsigned char whence);
int sys_unlink(const char* pathname);
int sys_mkdir(const char* pathname);
struct dir_entry* sys_readdir(struct dir* dir);
void sys_rewinddir(struct dir* dir);
int sys_rmdir(const char* pathname);
char* sys_getcwd(char* buf, unsigned int size);
int sys_stat(const char* path, struct stat* buf);
int sys_chdir(const char* path);
struct dir* sys_opendir(const char* name);
int sys_closedir(struct dir* dir);
struct dir_entry* sys_readdir(struct dir* dir);
void fs_init();
#endif