#include "syscall.h"
#include "../task/task.h"
#include "../vga/vga.h"

#define MAX_ARGS            5
extern struct task_struct *current;  //指向当前进程

static int
sys_exit(unsigned int arg[]) {
    int error_code = (int)arg[0];
    //return do_exit(error_code);
    return 0;
}

static int
sys_fork(unsigned int arg[]) {
    struct trapframe *tf = current->tf;
    unsigned int stack = tf->tf_esp;
    return do_fork(0, stack, tf);
}

static int
sys_wait(unsigned int arg[]) {
    int pid = (int)arg[0];
    int *store = (int *)arg[1];
    //return do_wait(pid, store);
}

static int
sys_exec(unsigned int arg[]) {
    const char *name = (const char *)arg[0];
    unsigned int len = (unsigned int)arg[1];
    unsigned char *binary = (unsigned char *)arg[2];
    unsigned int size = (unsigned int)arg[3];
    return do_execve(name, len, binary, size);
}

static int
sys_yield(unsigned int arg[]) {
    //return do_yield();
}

static int
sys_kill(unsigned int arg[]) {
    int pid = (int)arg[0];
    //return do_kill(pid);
}

static int
sys_getpid(unsigned int arg[]) {
    return current->pid;
}

static int
sys_print_char(unsigned int arg[]) {
    char c = (char)arg[0];
    print_char(c,default_background,default_foreground);
    return 0;
}
static int
sys_print_string(unsigned int arg[]) {
    const char *str = (const char *)arg[0];
    print_string(str,default_background,default_foreground);
    return 0;
}
static int
sys_print_num(unsigned int arg[]) {
    int num = (int)arg[0];
    unsigned char base=(unsigned char)arg[1];
    char len=(char)arg[2];
    int flag=(int)arg[3];
    print_num(num,default_background,default_foreground,base,len,flag);
    return 0;
}

static int
sys_pgdir(unsigned int arg[]) {
    //print_pgdir();
    return 0;
}

static int (*syscalls[])(unsigned int arg[]) = {
    [SYS_exit]              sys_exit,
    [SYS_fork]              sys_fork,
    [SYS_wait]              sys_wait,
    [SYS_exec]              sys_exec,
    [SYS_yield]             sys_yield,
    [SYS_kill]              sys_kill,
    [SYS_getpid]            sys_getpid,
    [SYS_pgdir]             sys_pgdir,
    [SYS_print_char]        sys_print_char,
    [SYS_print_string]      sys_print_string,
    [SYS_print_num]         sys_print_num,
};

#define NUM_SYSCALLS        ((sizeof(syscalls)) / (sizeof(syscalls[0])))

void
syscall_trap(struct trapframe *tf) {
    //struct trapframe *tf = current->tf;
    unsigned int arg[5];
    int num = tf->tf_regs.reg_eax;
    if (num >= 0 && num < NUM_SYSCALLS) {
        if (syscalls[num] != NULL) {
            arg[0] = tf->tf_regs.reg_edx;
            arg[1] = tf->tf_regs.reg_ecx;
            arg[2] = tf->tf_regs.reg_ebx;
            arg[3] = tf->tf_regs.reg_edi;
            arg[4] = tf->tf_regs.reg_esi;
            tf->tf_regs.reg_eax = syscalls[num](arg);
            return ;
        }
    }
    
    //print_trapframe(tf);
    //printk("undefined syscall %d, pid = %d, name = %s.\n",
    //        num, current->pid, current->name);
}


static inline int
user_syscall(int num, ...) {
    va_list ap;
    va_start(ap, num);
    unsigned int a[MAX_ARGS];
    int i, ret;
    for (i = 0; i < MAX_ARGS; i ++) {
        a[i] = va_arg(ap, unsigned int);
    }
    va_end(ap);

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
