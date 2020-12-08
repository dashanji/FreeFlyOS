#ifndef _DIR_H_
#define _DIR_H_
#include "fs.h"
#include "ide-dev.h"
#define MAX_FILE_NAME_LEN 16

/* 目录结构 */
struct dir
{
    struct inode *inode;
    unsigned int dir_pos;  //记录在目录内的偏移
    unsigned char dir_buf[512];  //目录的数据缓存
};
/* 目录项结构 */
struct  dir_entry
{
    char filename[MAX_FILE_NAME_LEN]; //普通文件或目录名称
    unsigned i_no;  //普通文件或目录对应的inode结点号
    enum file_types f_type; //文件类型
};
void open_root_dir(struct partition* part);
struct dir* dir_open(struct partition* part, unsigned int inode_no);
char search_dir_entry(struct partition* part, struct dir* pdir, const char* name, struct dir_entry* dir_e);
void dir_close(struct dir* dir);
void create_dir_entry(char* filename, unsigned int inode_no, unsigned char file_type, struct dir_entry* p_de);
struct dir_entry* dir_read(struct dir* dir);
#endif