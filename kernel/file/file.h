#ifndef _FILE_H_
#define _FILE_H_
#define MAX_FILE_OPEN 32 //可打开的最大文件数
#include "dir.h"
#include "ide-dev.h"
/* 文件结构 */
struct file{
    unsigned int fd_pos; 
    unsigned int fd_flag;
    struct inode *fd_inode;
};
/* 标准输入输出描述符 */
enum std_fd{
    stdin_no, //0 标准输入
    stdout_no, //1 标准输出
    stderr_no //2 标准错误
};
/* 位图类型 */
enum bitmap_type{
    INODE_BITMAP,  //inode位图
    BLOCK_BITMAP  //块位图
};
int get_free_slot_in_global(void);
int task_fd_install(int global_fd_idx);
int inode_bitmap_alloc(struct partition *part);
int block_bitmap_alloc(struct partition *part);
void bitmap_sync(struct partition *part,unsigned int bit_idx,unsigned char btmp);
int file_create(struct dir* parent_dir, char* filename, unsigned char flag);
int file_open(unsigned int inode_no, unsigned char flag);
int file_close(struct file* file);
int file_write(struct file* file, const void* buf, unsigned int count);
int file_read(struct file* file, void* buf, unsigned int count);
#endif