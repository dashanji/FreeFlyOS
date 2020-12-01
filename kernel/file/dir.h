#ifndef _DIR_H_
#define _DIR_H_
#define MAX_FILE_NAME_LEN 16
enum file_types{
    FT_UNKNOWN, //不支持文件类型
    FT_REGULAR, //普通文件
    FT_DIRCTORY, //目录文件
};
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

#endif