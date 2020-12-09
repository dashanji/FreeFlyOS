#include "task.h"
#include "../interrupt/syscall.h"
#include "../stl/elf.h"
#include "../mem/pmm.h"
#include "../mem/vmm.h"
#include "../mem/memlayout.h"
#include "../debug/debug.h"
#define HASH_SHIFT          10
#define HASH_LIST_SIZE      (1 << HASH_SHIFT)
#define pid_hashfn(x)       (hash32(x, HASH_SHIFT))


/*
#define __KERNEL_EXECVE(name, binary, size) ({                          \
            printk("kernel_execve: pid = %d, name = \"%s\".\n",        \
                    current->pid, name);                                \
            kernel_execve(name, binary, (unsigned int)(size));                \
        })
//#x 表示字符串操作符，即"x"
//##x##表示连接符  
#define KERNEL_EXECVE(x) ({                                             \
            extern unsigned char _binary_##x##_out_start[],  \
                _binary_##x##_out_size[];                    \
            __KERNEL_EXECVE(#x, _binary_##x##_out_start,     \
                            _binary_##x##_out_size);         \
        })

#define __KERNEL_EXECVE2(x, xstart, xsize) ({                           \
            extern unsigned char xstart[], xsize[];                     \
            __KERNEL_EXECVE(#x, xstart, (unsigned int)xsize);                 \
        })

#define KERNEL_EXECVE2(x, xstart, xsize)       __KERNEL_EXECVE2(x, xstart, xsize)
*/
// 绑定PID的哈希表
static list_entry_t hash_list[HASH_LIST_SIZE];

//PID 位图初始化
pidmap_t task_pidmap={pid_max,{0}}; 
static unsigned int volatile last_pid=0;

//就绪进程链表
static list_entry_t ready_task_list;
struct task_struct *task0;  //祖先进程，即进程0
struct task_struct *user_task; //第一个用户进程
//struct task_struct *task1;  //由进程0 do_fork出来的进程1
struct task_struct *current;  //指向当前进程

//MACOS下容易出现BUG
//静态全局变量设置为0值时，在运行的时候容易跑飞，所以为了避免出现BUG，在使用的时候应先定义0值
static unsigned int volatile nr_task=0; //当前所有进程数量  

void forkrets(struct trapframe *tf);

extern struct segdesc gdt[];
extern unsigned int new_pdt[PAGE_DIR_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );
struct task_struct *task0,*task1;
/*
*   task_init:创建第一个内核进程
*/
void task_init(){

    /*进程链表初始化*/
    list_init(&ready_task_list);
    /*哈希链表初始化*/
    for(int i=0;i<HASH_LIST_SIZE;i++){
        list_init(&hash_list[i]);
    }
    //分配task_struct结构体
    if((task0=alloc_task(KERNEL_TASK))==NULL){
        printk("alloc task error!\n");
    }
    
    /* 设置task0属性 */
    task0->state=RUNNABLE;   
    task0->counter=5;
    task0->priority=1; 
    last_pid=task0->pid=0;  //初始化task0的PID和last_pid
    set_task_name(task0,"task0");
    task0->kernel_stack=(unsigned int)task0+VMM_PAGE_SIZE;
    task0->cr3=new_pdt;
    task0->cwd_inode_nr=0;
    /* 进程链表指向task0 */
    //ask_list=task0->link;   //待调试
    //memcpy(&(task_list),&(task0->link),sizeof(list_entry_t));
    //list_init(&task0->link);
    list_init(&task0->link);
    for(int i=0;i<MAX_FILE;i++){
        task0->fd_table[i]=-1;
    }
    /* 当前进程指向task0 */
    current=task0;
    
    //clear();
    //printk("task0->counter:%08d!\n",task0->counter);
    //printk("current:%08X!\n",current);
    //printk("In task_init,current->counter=%08d\n",current->counter);
    /* 根据PID加入哈希链表 */
    add_pid_hash(task0);
    
    //这时候直接赋值，以免静态全局变量在不同编译器下跑飞
    //nr_task++;
    nr_task++;
}
//设置PID位
static int set_pid_bit(int pid){
    //获取PID所在的字节号
    int chars=pid/8;
    //获取PID所在字节的偏移位
    int offset=pid%8;
    //置位
    set_char_bit(task_pidmap.bits[chars],offset,1);
}
//清除PID位
static int clear_pid_bit(int pid){
    //获取PID所在的字节号
    int chars=pid/8;
    //获取PID所在字节的偏移位
    int offset=pid%8;
    //清零
    set_char_bit(task_pidmap.bits[chars],offset,0);
}
//返回未被占用的PID号，若没有则返回-1
static int find_free_pid(){
    int i=0,k=0;
    while(k!=32768){
        for(int j=0;j<8;j++,k++){
            if((task_pidmap.bits[i]>>j)&1==0){
                return k;
            }
        }
        i++;
    }
    return -1;
}
//分配一个可用的PID
static int alloc_pid(){

    //若无多余的PID号
    if(!task_pidmap.nr_free){
        return -1;
    }
    /*
    ** 一般将PID号设置为上个进程PID号+1
    **  若PID号已设置到末尾，则查询位图中是否还有未被占用的PID号
    */
    int pid=(pid==32767)?find_free_pid():last_pid+1;
    
    //有效PID
    if(pid>=0){
        set_pid_bit(pid);
        task_pidmap.nr_free--;
    }
    last_pid=pid;
    return pid;
}
//释放一个PID
static void free_pid(int pid){
    clear_pid_bit(pid);
    task_pidmap.nr_free++;
}

// 设置进程名称
char *set_task_name(struct task_struct *task, const char *name) {
    memset(task->name, 0, sizeof(task->name));
    return memcpy(task->name, name, task_name_max);
}

// 获取进程名称
char *get_task_name(struct task_struct *task) {
    static char name[task_name_max + 1];
    memset(name, 0, sizeof(name));
    return memcpy(name, task->name, task_name_max);
}

//将新进程插入就绪进程链表队尾
static void add_link(list_entry_t *new){
    list_add_before(&ready_task_list,new);
}

//在进程链表中删除某个进程
static void remove_link(list_entry_t *node){
    list_del(node);
}

//根据PID加入到PID哈希表中
static void add_pid_hash(struct task_struct *task){
    list_add(hash_list+pid_hashfn(task->pid),&(task->hash_link));
}

//根据PID删除哈希表中的节点
static void remove_pid_hash(int pid){
    struct task_struct *task=find_task(pid);
    list_del(&(task->hash_link)); 
}

//给定PID，在哈希表查找进程
static struct task_struct* find_task(int pid){
    
    if(pid<0){
        return NULL;
    }
    //找到哈希链表头
    list_entry_t *head=&hash_list[pid_hashfn(pid)];
    list_entry_t *ite=head;
    
    //在哈希表头下的双向循环链表(不包含哈希表头)中查找PID对应的进程
    while((ite=list_next(ite))!=head){
        struct  task_struct *task=list_to_task(ite,hash_link);
        if(task->pid==pid){
            return task;
        }
    } 
    //未找到
    return NULL;
}

//给进程分配task_struct结构体,判断是用户进程还是内核进程
static struct task_struct* alloc_task(enum task_kind kind){
    struct task_struct *task;
    if(kind==KERNEL_TASK)
        task=vmm_malloc(sizeof(struct task_struct),1);
    else
        task=vmm_malloc(sizeof(struct task_struct),2);
    
    if(task!=NULL){
        task->state=UNRUNNABLE;
        task->counter=5;
        task->priority=0;
        task->pid=-1;
        memset(&(task->name),0,sizeof(task->name));
        task->kernel_stack=0;
        task->cr3=new_pdt;
        task->tf=NULL;
        memset(&(task->context),0,sizeof(task->context));
        task->magic=TASK_MAGIC;
        task->cwd_inode_nr=0;
    }
    return task;
}

/* 由kernel_thread去执行function(func_arg) */
//static void kernel_thread(thread_func* function, void* func_arg) {
/* 执行function前要开中断,避免后面的时钟中断被屏蔽,而无法调度其它线程 */
//   intr_enable();
//  function(func_arg); 
//}

// forkret -- the first kernel entry point of a new thread/task
// NOTE: the addr of forkret is setted in copy_thread function
//       after switch_to, the current proc will execute here.
static void
forkret(void) {
    forkrets(current->tf);
}

// copy_thread - setup the trapframe on the  task's kernel stack top and
//             - setup the kernel entry point and stack of task
static void
copy_thread(struct task_struct *task, unsigned int esp, struct trapframe *tf) {
    //在内核栈顶分配一个中断帧大小
    task->tf = (struct trapframe *)(task->kernel_stack)- 1;
    task->kernel_stack-=sizeof(struct trapframe);
    //接着分配一个上下文大小
    //task.context= (struct context *)(task->kernel_stack)- 1;
    //将trapframe信息放入内核栈中
    *(task->tf) = *tf;
    task->tf->tf_regs.reg_eax = 0;
    task->tf->tf_esp = esp;
    //task->tf->tf_eflags |= FL_IF;

    task->context.eip=tf->tf_eip;
    task->context.ebx=tf->tf_regs.reg_ebx;
    task->context.edx=tf->tf_regs.reg_edx;
    //task->context.eip = (unsigned int)forkret;//print_task1;
    task->context.esp = (unsigned int)(task->tf);  //task->kernel_stack;
}

/* do_fork -     parent task for a new child task
 * @clone_flags: used to guide how to clone the child task
 * @stack:       the parent's user stack pointer. if stack==0, It means to fork a kernel thread.
 * @tf:          the trapframe info, which will be copied to child task's task->tf
 */
int
do_fork(unsigned int clone_flags, unsigned int stack, struct trapframe *tf) {
    struct  task_struct *task;

    //判断进程数是否达到最大值
    if(nr_task>pid_max){
        return -1;
    }
    
    //分配task_struct结构体
    if((task=alloc_task(KERNEL_TASK)) == NULL){
        return -1;
    }
    task->kernel_stack=(unsigned int)task+VMM_PAGE_SIZE;
    
    //在新进程的内核栈中设置中断帧，并设置中断上下文的eip和esp
    copy_thread(task,stack,tf);

    //获取PID
    if((task->pid=alloc_pid())<0){
        return -1;
    }
    list_init(&task->link);
    //将新进程加入进程链表中,加入到队尾中
    add_link(&(task->link));
    //将新进程的PID加入到哈希表中
    add_pid_hash(task);
    nr_task++;

    wakeup_task(task);

    return task->pid;
}

static void wakeup_task(struct task_struct *task){
    task->state=RUNNABLE;
}
// 创建内核线程
int kernel_thread(int (*fun)(void *), void *args, unsigned int flags) {
    struct trapframe tf;
    memset(&tf, 0, sizeof(struct trapframe));
    tf.tf_cs = KERNEL_CS;
    tf.tf_ds = tf.tf_es = tf.tf_ss = KERNEL_DS;
    tf.tf_regs.reg_ebx = (unsigned int)fun;
    tf.tf_regs.reg_edx = (unsigned int)args;
    tf.tf_eip = (unsigned int)kernel_thread_entry;

    return do_fork(flags ,0, &tf);
}

static void task_run(struct task_struct *task){
    if(task!=current){
        struct task_struct *prev=current;
        current=task;
        set_ts_esp0(task->kernel_stack);
        //asm volatile("movl %0,%%esp"::"r"(task->kernel_stack)); 
        switch_to(&(prev->context),&(task->context));
        //printk("task_schedule!\n");
    }
}
/* 调度算法 */
void schedule(){
    //在进程链表中查找可运行的进程
    list_entry_t *head=&ready_task_list;
    list_entry_t *ite=head;
    struct  task_struct *task;

    //首先判断当前进程是不是时间片用完了
    if(current->state==RUNNABLE&&current->counter==0){
        //若该线程只是时间片用完了，重新分配时间片，并将其放入就绪进程链表队尾
        current->counter=5;
        add_link(&current->link);
    }
    //在就绪进程链表中查找时间片不为0的可用进程
    while((ite=list_next(ite))!=head){
        task=list_to_task(ite,link);
        //找到一个可运行进程，则弹出就绪链表
        if(task->state==RUNNABLE&&task->counter!=0){
            remove_link(ite);
            break;
        }
    }

    //若无可调度进程，则运行进程0
    //if(task==current||task->state==UNRUNNABLE){
    //    task=task0;
    //}

    //运行进程
    task_run(task);
}
/* 当前线程将自己阻塞,标志其状态为stat. */
void thread_block(enum task_state stat) {
/* stat取值为TASK_BLOCKED,TASK_WAITING,TASK_HANGING,也就是只有这三种状态才不会被调度*/
   ASSERT(stat == STOPPED);
   enum intr_status flag;
   local_intr_save(flag);
   {
       current->state=stat;
       schedule();
   }
   /* 待当前线程被解除阻塞后才继续运行下面的intr_set_status */
   local_intr_restore(flag);
}
/* 解除线程的阻塞状态 */
void thread_unblock(struct task_struct* task) {
    list_entry_t *head=&ready_task_list;
    list_entry_t *ite=head;
    enum intr_status flag;
    local_intr_save(flag);
    {
        ASSERT(task->state == STOPPED);
        if (task->state != STOPPED) {
            //若已堵塞的线程已经在就绪队列中
            while((ite=list_next(ite))!=head){
                if(task==list_to_task(ite,link))
                     PANIC("thread_unblock: blocked thread in ready_task_list\n");
            }
            task->state = RUNNABLE;
            add_link(&task->link);   //插入到就绪队列表尾部   
        }
    }
    local_intr_restore(flag);

}

/* 打印进程信息 */
static int
print_taskinfo(void *arg) {
    printk("this task, pid = %d, name = \"%s\"\n", current->pid, get_task_name(current));
    printk("To U: \"%s\".\n", (const char *)arg);
    printk("To U: \"en.., Bye, Bye. :)\"\n");
    return 0;
}

/* 进程退出 */
void do_exit(){
    printk("task exit!\n");
    //schedule();
    while(1);
}
// do_execve - call exit_mmap(mm)&put_pgdir(mm) to reclaim memory space of current process
//           - call load_icode to setup new memory space accroding binary prog.
int
do_execve(const char *name, unsigned int len, unsigned char *binary, unsigned int size) { 
    struct elfhdr *elf = (struct elfhdr *)binary;
    //(3.2) get the entry of the program section headers of the bianry program (ELF format)
    struct proghdr *ph = (struct proghdr *)(binary + elf->e_phoff);
    struct proghdr *ph_end = ph + elf->e_phnum;
    unsigned int pdt=setup_pgdir();
    //有多少个程序头
    for (; ph < ph_end; ph ++){
        unsigned char *start = binary + ph->p_offset,map_start=round_down_to(start,VMM_PAGE_SIZE);
        unsigned char *end=ph->p_va + ph->p_filesz,map_end=round_up_to(end,VMM_PAGE_SIZE);
        vmm_map(pdt,map_start+(unsigned int)0x80000000,map_end+(unsigned int)0x80000000);
        memcpy(map_start+(unsigned int)0x80000000,map_start,map_end-map_start);
    }
    vmm_map(pdt,(unsigned int)0xA0000000,(unsigned int)0xA0002000);
    unsigned int user_stack=0xA0002000;
    current->cr3=LA_PA(pdt);
    lcr3(LA_PA(pdt));
    // setup trapframe for user environment
    struct trapframe *tf = current->tf;
    memset(tf, 0, sizeof(struct trapframe));
    tf->tf_cs = USER_CS;
    tf->tf_ds = tf->tf_es = tf->tf_ss = USER_DS;
    tf->tf_esp = user_stack;
    tf->tf_eip = elf->e_entry;
    return 0;
}
// kernel_execve - do SYS_exec syscall to exec a user program called by user_main kernel_thread
static int
kernel_execve(const char *name, unsigned char *binary, unsigned int size) {
    int ret, len = strlen(name);
    /*asm volatile (
        "int %1;"
        : "=a" (ret)
        : "i" (T_SYSCALL), "0" (SYS_exec), "d" (name), "c" (len), "b" (binary), "D" (size)
        : "memory");*/
    return ret;
}

// user_main - kernel thread used to exec a user program
static int
user_main(void *arg) {
    //KERNEL_EXECVE(exit);
}
//设置用户页表
unsigned int set_user_cr3(){
    unsigned int cr3_addr=vmm_malloc(VMM_PAGE_SIZE,2);
   // printk("cr3_addr:%08x",cr3_addr);
   // printk("new_pdt[0]:%08x",new_pdt[0]);
    memcpy(cr3_addr,new_pdt,VMM_PAGE_SIZE);
   // printk("new_pdt[0]:%08x",new_pdt[0]);
    unsigned int *pdt=(unsigned int *)cr3_addr;
    //printk("idx(PA_LA(DMA_START)):%08x",idx(PA_LA(DMA_START)));
    printk("new_pdt[0x300]:%08x",new_pdt[0x300]);
    printk("pdt[0x300]:%08x",pdt[0x300]);
    unsigned int pt_len=(unsigned int)HIGHMEM_START/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE);

    for(unsigned int i=0;i<pt_len;i++){
            pdt[i+idx(PA_LA(DMA_START))]|=VMM_PAGE_KERNEL;//VMM_PAGE_USER
        }
    //user_task_print c10021b4 user_print_string c1001aa9 user_syscall c1001a20
    pdt[idx(PA_LA(DMA_START))+4]|=VMM_PAGE_USER;
    unsigned int *pt=(unsigned int *)PA_LA((new_pdt[idx(PA_LA(DMA_START))]&VMM_PAGE_MASK));
    printk("pt[0]:%08x",pt[0]);
    for(unsigned int i=0,k=0,n=0;n<pt_len*(unsigned int)PAGE_TABLE_SIZE;i+=(unsigned int)VMM_PAGE_SIZE,n++){
        pt[k++]|=VMM_PAGE_KERNEL;//VMM_PAGE_USER
        //printk("i:%08ux\nj:%08ux\nk:%08ux\n",i,j,k);
    }
    unsigned int *cr3_ph_addr=(unsigned int *)cr3_addr;
    unsigned int *zh1=PA_LA((cr3_ph_addr[(unsigned int)((cr3_addr>>22)&0x3FF)]&VMM_PAGE_MASK));
    unsigned int phaddr=zh1[((cr3_addr&0x003FF000)>>12)]&VMM_PAGE_MASK;
    //unsigned int ph_addr=(unsigned int)(*cr3_ph_addr[((cr3_addr>>22)&0x3FF)/4]&VMM_PAGE_MASK)[((cr3_addr&0x003FF000)>>12)/4]&VMM_PAGE_MASK;
    printk("phaddr:%08ux\n",phaddr);
    pt[0x1001]|=VMM_PAGE_USER;
    pt[0x1002]|=VMM_PAGE_USER;
    return phaddr;//cr3_addr;
}
/*用户进程初始化*/
void  user_task_init(void *function){
    
    //分配task_struct结构体
    if((user_task=alloc_task(USER_TASK))==NULL){
        printk("alloc task error!\n");
    }
    /* 复制父进程的程序代码 */
    unsigned int *user_space1=(unsigned int *)vmm_malloc(VMM_PAGE_SIZE,2);
    memcpy(user_space1,(unsigned int *)function,VMM_PAGE_SIZE);
    /* 设置task0属性 */
    user_task->state=RUNNABLE;   
    user_task->counter=5;
    user_task->priority=1; 
    user_task->pid=alloc_pid();  //初始化task0的PID和last_pid
    set_task_name(user_task,"user_task");
    user_task->kernel_stack=(unsigned int)user_task+VMM_PAGE_SIZE;
    user_task->cr3=set_user_cr3();//LA_PA(set_user_cr3());
    
    lcr3(user_task->cr3);
    user_task->tf = (struct trapframe *)(user_task->kernel_stack)- 1;
    user_task->tf->tf_regs.reg_eax=0;
    user_task->tf->tf_regs.reg_ebp=0;
    user_task->tf->tf_regs.reg_ebx=0;
    user_task->tf->tf_regs.reg_ecx=0;
    user_task->tf->tf_regs.reg_edi=0;
    user_task->tf->tf_regs.reg_edx=0;
    user_task->tf->tf_regs.reg_esi=0;
    user_task->tf->tf_regs.reg_oesp=0;

    user_task->tf->tf_cs=USER_CS;
    user_task->tf->tf_ds=user_task->tf->tf_es=user_task->tf->tf_fs=user_task->tf->tf_ss=USER_DS;
    user_task->tf->tf_gs=0;
    user_task->tf->tf_eip=function; //user_space1
    user_task->tf->tf_eflags=(EFLGAS_IOPL_0|EFLAGS_MBS|EFLAGS_IF_1);

    user_task->tf->tf_esp=user_task->kernel_stack-sizeof(struct trapframe);
    /* 进程链表指向task0 */
    //ask_list=task0->link;   //待调试
    //memcpy(&(task_list),&(task0->link),sizeof(list_entry_t));
    //list_init(&task0->link);
    list_init(&user_task->link);
    
    //printk("task0->counter:%08d!\n",task0->counter);
    //printk("current:%08X!\n",current);
    //printk("In task_init,current->counter=%08d\n",current->counter);
    /* 根据PID加入哈希链表 */
    add_pid_hash(user_task);
    
    //这时候直接赋值，以免静态全局变量在不同编译器下跑飞
    //nr_task++;
    nr_task++;
    asm volatile ("movl %0, %%esp; jmp __trapret" : : "g" (user_task->tf) : "memory");
}