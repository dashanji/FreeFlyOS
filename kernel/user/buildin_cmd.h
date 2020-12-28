#ifndef _BUILDIN_CMD_H_
#define _BUILDIN_CMD_H_
#include "../file/fs.h"
#define MAX_FILE_NAME_LEN 16
#define NULL ((void *)0)
#define MAX_PATH_LEN 512	    // 路径最大长度

/*
enum user_file_types {
   FT_UNKNOWN,	  // 不支持的文件类型
   FT_REGULAR,	  // 普通文件
   FT_DIRECTORY	  // 目录
};

struct stat {
   unsigned int st_ino;		 // inode编号
   unsigned int st_size;		 // 尺寸
   enum file_types st_filetype;	 // 文件类型
};*/
void make_clear_abs_path(char* path, char* final_path);
void buildin_pwd(int argc, char** argv __attribute__ ((unused))) ;
char* buildin_cd(int argc, char** argv);
void buildin_ls(int argc, char** argv);
int buildin_mkdir(int argc, char** argv);
int buildin_rmdir(int argc, char** argv);
int buildin_rm(int argc, char** argv);
void buildin_help(int argc, char** argv);
#endif