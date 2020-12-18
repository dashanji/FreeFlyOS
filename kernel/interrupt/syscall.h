#ifndef _SYSCALL_H_
#define _SYSCALL_H_
#include "trap.h"
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

void syscall_trap(struct trapframe *tf);
int user_sys_getpid(void);
void user_print_char(char c); 
void user_print_string(char *str);
void user_print_num(int num,unsigned char base,char len,int flag);
#endif