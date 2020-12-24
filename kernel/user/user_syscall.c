#include "user_syscall.h"
#include "va_list.h"

#define MAX_ARGS            5
#define T_SYSCALL           0x80

static inline int
user_syscall(int num, ...) {
    user_va_list ap;
    user_va_start(ap, num);
    unsigned int a[MAX_ARGS];
    int i, ret;
    for (i = 0; i < MAX_ARGS; i ++) {
        a[i] = user_va_arg(ap, unsigned int);
    }
    user_va_end(ap);

    asm volatile (
        "int %1;"
        : "=a" (ret)
        : "i" (T_SYSCALL),
          "a" (num),
          "d" (a[0]),
          "c" (a[1]),
          "b" (a[2]),
          "D" (a[3]),
          "S" (a[4])
        : "cc", "memory");
    return ret;
}
int
user_sys_getpid(void) {
    return user_syscall(SYS_getpid);
}
void 
user_print_char(char c) {
    user_syscall(SYS_print_char,c);
}
void 
user_print_string(char *str) {
    user_syscall(SYS_print_string,str);
}
void 
user_print_num(int num,unsigned char base,char len,int flag) {
    user_syscall(SYS_print_num,num,base,len,flag);
}
void 
user_backtrace() {
    user_syscall(SYS_backtrace);
}
/* 从文件描述符fd中读取count个字节到buf */
int 
read(int fd, void* buf, unsigned int count) {
   return user_syscall(SYS_fdread, fd, buf, count);
}

/* 以flag方式打开文件pathname */
int open(char* pathname, unsigned char flag) {
   return user_syscall(SYS_open, pathname, flag);
}

/* 关闭文件fd */
int close(int fd) {
   return user_syscall(SYS_close, fd);
}

/* 把buf中count个字符写入文件描述符fd */
unsigned int write(int fd, const void* buf, int count) {
   return user_syscall(SYS_write, fd, buf, count);
}


/* 设置文件偏移量 */
int lseek(int fd, int offset, unsigned char whence) {
   return user_syscall(SYS_lseek, fd, offset, whence);
}

/* 删除文件pathname */
int unlink(const char* pathname) {
   return user_syscall(SYS_unlink, pathname);
}

/* 创建目录pathname */
int mkdir(const char* pathname) {
   return user_syscall(SYS_mkdir, pathname);
}

/* 删除目录pathname */
int rmdir(const char* pathname) {
   return user_syscall(SYS_rmdir, pathname);
}


/* 回归目录指针 */
void rewinddir(struct dir* dir) {
   user_syscall(SYS_rewinddir, dir);
}

/* 获取当前工作目录 */
char* getcwd(char* buf, unsigned int size) {
   return (char*)user_syscall(SYS_getcwd, buf, size);
}

/* 改变工作目录为path */
int chdir(const char* path) {
   return user_syscall(SYS_chdir, path);
}

/* 获取path属性到buf中 */
int stat(const char* path, struct stat* buf) {
   return user_syscall(SYS_stat, path, buf);
}

/* 打开目录name */
struct dir* opendir(const char* name) {
   return (struct dir*)user_syscall(SYS_opendir, name);
}

/* 关闭目录dir */
int closedir(struct dir* dir) {
   return user_syscall(SYS_closedir, dir);
}

/* 读取目录dir */
struct dir_entry* readdir(struct dir* dir) {
   return (struct dir_entry*)user_syscall(SYS_readdir, dir);
}

/* 打印全部进程 */
void ps(){
  return user_syscall(SYS_print_task);
}

/* 获取内存 */
unsigned int malloc(unsigned int bytes){
   return user_syscall(SYS_malloc,bytes);
}

/* 释放内存 */
void free(unsigned int addr,unsigned int size){
   user_syscall(SYS_free,addr,size);
}

/* 拷贝进程 */
int fork(){
   return user_syscall(SYS_fork);
}
/* 映射一段内存 */
void mmap(unsigned int va_start,unsigned int va_end,unsigned pa_start){
   return user_syscall(SYS_mmap,va_start,va_end,pa_start);
}
/* 执行程序 */
void exec(char *path,char **argv){
   return user_syscall(SYS_exec,path,argv);
}
/* 等待子进程结束 */
int wait(int* status){
   return user_syscall(SYS_wait,status);
}
/* 进程退出 */
void exit(int status){
   return user_syscall(SYS_exit,status);
}