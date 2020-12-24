#ifndef _TASK_H_
#define _TASK_H_

#include "../dt/dt.h"
#include "../mem/vmm.h"
#include "../mem/memlayout.h"
#include "../asm/asm.h"
#include "../interrupt/trap.h"
#include "../vga/vga.h"
#include "../stl/list.h"
#include "../stl/hash.h"
#include "../stl/defs.h"
#include "../file/fs.h"
#include "../file/file.h"
//进程魔数
#define TASK_MAGIC 0x19971211
//最大进程数量  pid号从0-32767 
#define pid_max 32768
//进程名最大值
#define task_name_max 20

//将list_entry_t转化为sturct task_struct
#define list_to_task(list_entry_addr,member)         \
    to_struct(list_entry_addr,struct task_struct,member)

#define EFLAGS_MBS (1<<1)
#define EFLAGS_IF_1  (1<<9)
#define EFLAGS_IF_0 0
#define EFLAGS_IOPL_3 (3<<12) 
#define EFLGAS_IOPL_0 (0<<12)

#define FL_IF           0x00000200  // Interrupt Flag
/* 自定义通用函数类型,它将在很多线程函数中做为形参类型 */
typedef void thread_func(void*);
/* 自定义函数类型function,用于在list_traversal中做回调函数 */
typedef char (function)(struct list_entry_t*, int arg);
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
    HANGING=2,
    EXIT=3,
};
enum task_kind{
    USER_TASK=0,
    KERNEL_TASK=1,
};
struct task_struct{
    enum task_state state;  //-1 unrunnable , 0 runnable, 1 stopped
    int counter; //计数器，已经运行多长时间
    int priority; //优先级
    int pid,ppid;
    char name[task_name_max]; //进程名
    //unsigned int start_code,end_code,end_data,brk,start_stack;
    unsigned int kernel_stack;    //内核栈
    unsigned int cr3;            //cr3基址
    unsigned int cr3_va;         //cr3虚拟地址（访问地址）
    struct task_struct *parent;  //父进程
    struct trapframe *tf;
    //struct taskstate tss;
    struct context context;
    //struct trapframe *tf;
    list_entry_t link;                //进程状态链表
    list_entry_t all_link;            //所有进程链表
    list_entry_t hash_link;           //哈希链表
    unsigned int fd_table[MAX_FILE_OPEN]; //文件描述符数组
    unsigned int magic;
    unsigned int cwd_inode_nr;
    char exit_status;  //进程退出状态
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
void kernel_task_init(void *function);
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
static void add_all_link(list_entry_t *new);
static void remove_link(list_entry_t *node);

/* PID哈希表管理函数 */
static void add_pid_hash(struct task_struct *task);
static void remove_pid_hash(int pid);
static struct task_struct* find_task(int pid);

/* 进程名管理函数 */
char *set_task_name(struct task_struct *task, const char *name);
char *get_task_name(struct task_struct *task);
/* 分配task_struct结构体 */
static struct task_struct* alloc_task(enum task_kind kind);

/* fork产生新进程 */
static void forkret(void);
static void copy_thread(struct task_struct *task, unsigned int esp, struct trapframe *tf);
int do_fork(unsigned int clone_flags, unsigned int stack, struct trapframe *tf);
int kernel_thread(int (*fun)(void *), void *args, unsigned int flags);

/* 进程调度管理函数 */
static void task_run(struct task_struct *task);
static void wakeup_task(struct task_struct *task);
void schedule(); 
void thread_block(enum task_state stat);
void thread_unblock(struct task_struct* task);

static int print_taskinfo(void *arg); 
static void print_task1();
static void print_task2();
void do_exit();

int do_execve(const char *name, unsigned int len, unsigned char *binary, unsigned int size);
void set_user_cr3();
void copy_user_cr3(struct task_struct *task);
void task_exit(struct task_struct *task);
void user_task_init(void *function);

struct list_entry_t* list_traversal(struct list_entry_t* list, function func, int arg);
unsigned int* pte_ptr(unsigned int vaddr);
void sys_print_task();
int sys_wait(int* status);
void sys_exit(int status);
#endif