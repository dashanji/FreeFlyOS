#ifndef _TASK_H_
#define _TASK_H_

#include "../dt/dt.h"
#include "../mem/vmm.h"
#include "../mem/memlayout.h"
#include "../debug/debug.h"
//最大进程数
#define task_max 32

struct task_struct{
    char state;  //-1 unrunnable , 0 runnable, >0 stopped
    int counter; //时间片
    int priority; //优先级
    int pid;
    unsigned int start_code,end_code,end_data,brk,start_stack;
    struct taskstate tss;
    struct task_struct *next;
};
union task_union
{
    struct task_struct task;
    unsigned char stack[VMM_PAGE_SIZE];
};


void task_init();
#endif