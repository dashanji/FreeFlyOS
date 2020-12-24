#ifndef _USER_SYSCALL_H_
#define _USER_SYSCALL_H_
#include "../file/dir.h"
#include "../file/fs.h"
/* syscall number */
#define SYS_exit            1
#define SYS_fork            2
#define SYS_wait            3
#define SYS_exec            4
#define SYS_clone           5
#define SYS_yield           10
#define SYS_sleep           11
#define SYS_kill            12
#define SYS_gettime         17
#define SYS_getpid          18
#define SYS_brk             19
#define SYS_mmap            20
#define SYS_munmap          21
#define SYS_shmem           22

#define SYS_fdread            24

#define SYS_pgdir           31

#define SYS_print_char      36
#define SYS_print_string    37
#define SYS_print_num       38
#define SYS_backtrace       39
#define SYS_open  40
#define SYS_close 41
#define SYS_write 42
#define SYS_lseek 43
#define SYS_unlink 44
#define SYS_mkdir 45
#define SYS_rmdir 46
#define SYS_rewinddir 47
#define SYS_getcwd 48
#define SYS_chdir 49
#define SYS_stat 50
#define SYS_opendir 51
#define SYS_closedir 52
#define SYS_readdir 53
#define SYS_print_task 54
#define SYS_malloc 55
#define SYS_free 56
#define SYS_mmap 57
//__attribute__( (section(".user.text") ) ) 
enum std_fd{
    stdin_no, //0 标准输入
    stdout_no, //1 标准输出
    stderr_no //2 标准错误
};
/*
*__attribute__( (section(".user.text") ) )将其设置为特定的.user.text节
*方便在链接脚本中区分kernel部分和user部分
*/
//__attribute__( (section(".user.text") ) ) 
static inline int user_syscall(int num, ...);
//__attribute__( (section(".user.text") ) ) 
int user_sys_getpid(void);
//__attribute__( (section(".user.text") ) ) 
void user_print_char(char c);
//__attribute__( (section(".user.text") ) ) 
void user_print_string(char *str);
//__attribute__( (section(".user.text") ) ) 
void user_print_num(int num,unsigned char base,char len,int flag);
//__attribute__( (section(".user.text") ) ) 
void user_backtrace();
int read(int fd, void* buf, unsigned int count);
int open(char* pathname, unsigned char flag);
int close(int fd);
unsigned int write(int fd, const void* buf, int count);
int lseek(int fd, int offset, unsigned char whence) ;
int unlink(const char* pathname);
int mkdir(const char* pathname);
int rmdir(const char* pathname);
void rewinddir(struct dir* dir);
char* getcwd(char* buf, unsigned int size);
int chdir(const char* path);
int stat(const char* path, struct stat* buf) ;
struct dir* opendir(const char* name);
int closedir(struct dir* dir);
struct dir_entry* readdir(struct dir* dir);
void ps();
unsigned int malloc(unsigned int bytes);
void free(unsigned int addr,unsigned int size);
int fork();
void mmap(unsigned int va_start,unsigned int va_end,unsigned pa_start);
void exec(char *path,char **argv);
int wait(int* status);
void exit(int status);
#endif