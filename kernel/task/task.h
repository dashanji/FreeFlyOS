#ifndef _TASK_H_
#define _TASK_H_

#include "../dt/dt.h"
#include "../mem/vmm.h"
#include "../mem/memlayout.h"
#include "../debug/debug.h"
#include "../asm/asm.h"
#include "../interrupt/trap.h"
#include "../vga/vga.h"
//最大进程数
#define task_max 32

// Saved registers for kernel context switches.
// Don't need to save all the %fs etc. segment registers,
// because they are constant across kernel contexts.
// Save all the regular registers so we don't need to care
// which are caller save, but not the return register %eax.
// (Not saving %eax just simplifies the switching code.)
// The layout of context must match code in switch.S.
struct context {
    unsigned int eip;
    unsigned int esp;
    unsigned int ebx;
    unsigned int ecx;
    unsigned int edx;
    unsigned int esi;
    unsigned int edi;
    unsigned int ebp;
};

struct task_struct{
    char state;  //-1 unrunnable , 0 runnable, >0 stopped
    int counter; //时间片
    int priority; //优先级
    int pid;
    unsigned int start_code,end_code,end_data,brk,start_stack;
    struct taskstate tss;
    struct context context;
    //struct trapframe *tf;
    struct task_struct *next;
};
union task_union
{
    struct task_struct task;
    unsigned char stack[VMM_PAGE_SIZE];
};

// 内核线程入口函数 thread_entry.S
extern int kernel_thread_entry(void *args);
void task_init();
void print1();
void print2();
int kernel_thread(int (*fun)(void *), void *args, unsigned int flags); 
#endif