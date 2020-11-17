#include "syscall.h"
#include "../task/task.h"
#include "trap.h"
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
sys_putc(unsigned int arg[]) {
    int c = (int)arg[0];
    //cputchar(c);
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
    [SYS_putc]              sys_putc,
    [SYS_pgdir]             sys_pgdir,
};

#define NUM_SYSCALLS        ((sizeof(syscalls)) / (sizeof(syscalls[0])))

void
syscall(void) {
    struct trapframe *tf = current->tf;
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
    print_trapframe(tf);
    printk("undefined syscall %d, pid = %d, name = %s.\n",
            num, current->pid, current->name);
}

