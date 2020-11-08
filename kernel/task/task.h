#ifndef _TASK_H_
#define _TASK_H_

#include "../dt/dt.h"
#include "../mem/vmm.h"
#include "../mem/memlayout.h"
#include "../debug/debug.h"
#include "../asm/asm.h"
#include "../interrupt/trap.h"
#include "../vga/vga.h"
#include "../stl/list.h"
#include "../stl/hash.h"
#include "../stl/defs.h"

//最大进程数量  pid号从0-32767 
#define pid_max 32768
//进程名最大值
#define task_name_max 20
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
enum task_state{
    UNRUNNABLE=-1,
    RUNNABLE=0,
    STOPPED=1,
};
struct task_struct{
    enum task_state state;  //-1 unrunnable , 0 runnable, 1 stopped
    int counter; //计数器，已经运行多长时间
    int priority; //优先级
    int pid;
    char name[task_name_max]; //进程名
    //unsigned int start_code,end_code,end_data,brk,start_stack;
    unsigned int kernel_stack;    //内核栈
    unsigned int cr3;            //cr3基址
    struct trapframe *tf;
    //struct taskstate tss;
    struct context context;
    //struct trapframe *tf;
    list_entry_t link;                //进程链表
    list_entry_t hash_link;           //哈希链表
};
union task_union
{
    struct task_struct task;
    unsigned char stack[VMM_PAGE_SIZE];
};

//进程号位映射
typedef struct pidmap
{
    unsigned int nr_free; //还剩下多少个进程号没有分配
    char bits[4096]; //0代表未被占用，1代表被占用
}pidmap_t;

// 内核线程入口函数 thread_entry.S
extern int kernel_thread_entry(void *args);
void task_init();
//void print1();
//void print2();
int kernel_thread(int (*fun)(void *), void *args, unsigned int flags); 

/*  PID管理函数 */
static int set_pid_bit(int pid);
static int clear_pid_bit(int pid);
static int find_free_pid();
static int alloc_pid();
static void free_pid(int pid);

/* 进程链表管理函数 */
static void add_link(list_entry_t *new);
static void remove_link(list_entry_t *node);

/* PID哈希表管理函数 */
static void add_pid_hash(struct task_struct *task);
static void remove_pid_hash(int pid);
static struct task_struct* find_task(int pid);

/* 进程名管理函数 */
char *set_task_name(struct task_struct *task, const char *name);
char *get_task_name(struct task_struct *task);
/* 分配task_struct结构体 */
static struct task_struct* alloc_task();

/* fork产生新进程 */
static void forkret(void);
static void copy_thread(struct task_struct *task, unsigned int esp, struct trapframe *tf);
int do_fork(unsigned int clone_flags, unsigned int stack, struct trapframe *tf);
int kernel_thread(int (*fun)(void *), void *args, unsigned int flags);

/* 进程调度管理函数 */
static void task_run(struct task_struct *task);
static void wakeup_task(struct task_struct *task);
void schedule(); 

static int print_taskinfo(void *arg); 
void do_exit();
#endif