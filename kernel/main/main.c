#include "main.h"
#include "../asm/asm.h"
#include "../dt/dt.h"
#include "../interrupt/trap.h"
#include "../timer/timer.h"
#include "../pic/pic.h"
#include "../vga/vga.h"
#include "../mem/pmm.h"
#include "../mem/vmm.h"
#include "../debug/debug.h"
#include "../task/task.h"
#include "../sync/sync.h"
#include "../interrupt/syscall.h"
#include "../file/ide-dev.h"
#include "../file/fs.h"
#include "../user/user_main.h"
#include "../keyboard/keyboard.h"
#define TIME_FREQUENCY 100

//三个管理区
extern pm_zone dma_zone;
extern pm_zone normal_zone;
extern pm_zone highmem_zone;
extern struct task_struct *current;
extern unsigned int volatile jiffies;

struct semaphore user_sema;

static void delay(unsigned int xms);
void user_task_print();
int test_user_task=0;
int offset=0;
void printf(char *fmt,...);
void kernel_main();
void main(void)
{
	clear();
    printk("FreeFlyOS is running\n");
   // print_seg();
    
    gdt_init();

    pic_init();
    idt_init();
    
    enable_interupt();
    
    serial_init();
    kbd_init();
   // ASSERT(1==2);
    setup_vpt();
    pmm_init();

    test_pmm();

    test_vmm();

    fs_init();
    kernel_task_init(kernel_main);
    //write2fs(); //放在进程初始化后，需要安装到当前进程的fd表，写入到文件系统即可，故仅需执行一次
    
    //必须放在task_init后，不然访问current会出现缺页
    timer_init(TIME_FREQUENCY); //100HZ
    
    sema_init(&user_sema,0);
    
    intr_enable();
    clear();
    user_task_init(user_main);
    
    //test_schedule();
    //test_schedule();
    //print_seg();
    //printk("successful\n");
    //test_ide_io();
    //test_fs();
    while(1);
}
/* 将test_exec和test_cat测试程序（占20个扇区）从500扇区处写入到文件系统中 */
static void write2fs(){
    //写入test_exec
    unsigned int file_size=14136; //通过本机OS 的ls -l命令获得
    unsigned int sec_cnt=(file_size+512-1)/512;    //扇区数
    unsigned int prog=vmm_malloc(file_size,1);
    ide_read((void *)prog,500,sec_cnt);
    int fd=sys_open("/prog",O_CREAT|O_RDWR);
    if(fd!=-1){
      if(sys_write(fd,prog,file_size) == -1){
            printk("file write error!\n");
            while(1);
      }
    }
    vmm_free(prog,file_size);
    //写入test_cat
    file_size=17748; //通过本机OS 的ls -l命令获得
    sec_cnt=(file_size+512-1)/512;    //扇区数
    prog=vmm_malloc(file_size,1);
    ide_read((void *)prog,530,sec_cnt);
    fd=sys_open("/cat",O_CREAT|O_RDWR);
    if(fd!=-1){
      if(sys_write(fd,prog,file_size) == -1){
            printk("file write error!\n");
            while(1);
      }
    }
    //写入test_pipe
    file_size=14536; //通过本机OS 的ls -l命令获得
    sec_cnt=(file_size+512-1)/512;    //扇区数
    prog=vmm_malloc(file_size,1);
    ide_read((void *)prog,570,sec_cnt);
    fd=sys_open("/pipe",O_CREAT|O_RDWR);
    if(fd!=-1){
      if(sys_write(fd,prog,file_size) == -1){
            printk("file write error!\n");
            while(1);
      }
    }
    vmm_free(prog,file_size);
    //写入file
    fd=sys_open("/file",O_CREAT|O_RDWR);
    char str[20]="Hello I'm a file";
    if(fd!=-1){
      if(sys_write(fd,str,20) == -1){
            printk("file write error!\n");
            while(1);
      }
    }
}
void kernel_main(){
    while(1)
    {
        //printk("kernel\n");
        //delay(1000000);
    }
}
void test_pmm(){
    //unsigned int *test=(unsigned int *)((unsigned int)0x000FFD00+(unsigned int)0xC0000000);
    //*test=0xFFFFFFFF;
    //printk("\ntest :%08x\n",*test);
    //在NORMAL区域申请200个字节
    unsigned int nor_addr=pmm_alloc(0x200,1);
    //在DMA区域申请2000个字节
    unsigned int dma_addr=pmm_alloc(0x2000,0);
    //在HIGHMEM区域申请3000个字节
    unsigned int high_addr=pmm_alloc(0x3000,2);
    //void *ptr1=(unsigned int *)nor_addr;
    //void *ptr2= (unsigned int *)dma_addr;
    //void *ptr3= (unsigned int *)high_addr;
    //unsigned char str1[0x200],str2[0x2000],str3[0x3000];
    //unsigned char *st1=(unsigned char *)(0xC0000000+nor_addr);
    //unsigned char *st2=(unsigned char *)(0xC0000000+dma_addr);
    //unsigned char *st3=(unsigned char *)high_addr;
    //*st1=0xFF;
    //*st2=0xFF;
    //*st3=0xFF;
    printk("DMA---dma_addr:%08ux\n",dma_addr);
    printk("NORMAL---nor_addr:%08ux\n",nor_addr);
   // printk("HIGHMEM---high_addr:%08ux\n",high_addr);
    //printk("str1:%08uxstr2:%08ux\n",*st1,*st2);
    //打印管理区空闲页信息
	printk("DMA free_pages:%08ux\tNORMAL free_pages:%08ux\tHIGHMEM free_pages:%08ux\n",
	dma_zone.free_pages, normal_zone.free_pages, highmem_zone.free_pages);
    pmm_free(nor_addr,0x200);
    pmm_free(dma_addr,0x2000);
    pmm_free(high_addr,0x3000);
    //打印管理区空闲页信息
	printk("DMA free_pages:%08ux\tNORMAL free_pages:%08ux\tHIGHMEM free_pages:%08ux\n",
	dma_zone.free_pages, normal_zone.free_pages, highmem_zone.free_pages);
   // str1[0]=(unsigned char *)nor_addr;
    //str2[0]=(unsigned char *)dma_addr;
    //str3[0]=(unsigned char *)high_addr;
    //printk("str1:%08uxstr2:%08ux\n",*st1,*st2);
}
void test_vmm(){
    printk("TEST-------------VMM1\n");
    //在DMA区域申请0x100字节空间
    unsigned int dma_addr=vmm_malloc(0x100,0);
    unsigned int nor_addr=vmm_malloc(0x2000,1);
    unsigned int high_addr=vmm_malloc(0x3000,2);
    printk("DMA---dma_addr:%08ux\n",dma_addr);
    printk("NORMAL---nor_addr:%08ux\n",nor_addr);
    printk("HIGHMEM---high_addr:%08ux\n",high_addr);
    printk("TEST-------------VMM2\n");
    //在DMA区域申请0x100字节空间
    unsigned int dma2_addr=vmm_malloc(0x100,0);
    unsigned int nor2_addr=vmm_malloc(0x2000,1);
    unsigned int high2_addr=vmm_malloc(0x3000,2);
    printk("DMA---dma_addr:%08ux\n",dma2_addr);
    printk("NORMAL---nor_addr:%08ux\n",nor2_addr);
    printk("HIGHMEM---high_addr:%08ux\n",high2_addr);
    unsigned char *st3=(unsigned char *)high2_addr;
    *st3=0xFF;
    printk("str3:%08ux\n",*st3);
    vmm_free(dma_addr,0x100);
    vmm_free(nor_addr,0x2000);
    vmm_free(high_addr,0x3000);
    unsigned int dma3_addr=vmm_malloc(0x100,0);
    unsigned int nor3_addr=vmm_malloc(0x2000,1);
    unsigned int high3_addr=vmm_malloc(0x3000,2);
    printk("DMA---dma_addr:%08ux\n",dma3_addr);
    printk("NORMAL---nor_addr:%08ux\n",nor3_addr);
    printk("HIGHMEM---high_addr:%08ux\n",high3_addr);
    unsigned char *st4=(unsigned char *)high3_addr;
    *st4=0xFF;
    printk("str4:%08ux\n",*st4);
}
void test_schedule(){
    //int newtask1_pid=kernel_thread(print_task1,"task1 ",0);
    //struct task_struct *newtask1=find_task(newtask1_pid);
    
    //set_task_name(newtask1,"task1");
    
    //int newtask2_pid=kernel_thread(print_task2,"task2 ",0);
   // struct task_struct *newtask2=find_task(newtask2_pid);
    //printk("Hello ");
   // set_task_name(newtask2,"task2");
    intr_enable();
    //printk("Hello ");
    while(1){
        //if(!(jiffies%100))
        //printk("Main ");
        //delay(1000000);
    }     
}
static void print_task1(void *arg){
    /* 用void*来通用表示参数,被调用的函数知道自己需要什么类型的参数,自己转换再用 */
    char* para = arg;
    while(1){
        //printk("sema_value : %08d",test_sema.value);
       // sema_down(&test_sema);
        //if(!(jiffies%100))
        printk("%s",para);
        
        delay(1000000);
        //lock_release(&test_lock);
    }
    
    //schedule();
    //  }
}
static void print_task2(void *arg){
    
    /* 用void*来通用表示参数,被调用的函数知道自己需要什么类型的参数,自己转换再用 */
    char* para = arg;
    while(1){
        //if(!(jiffies%100))
        //lock_acquire(&test_lock);
        //printk("sema_value : %08d",test_sema.value);
        //sema_up(&test_sema);
        //sema_down(&test_sema);
        //lock_release(&test_lock);
        printk("%s",para);
        delay(1000000);
        
    }
    
    //while(1);
    //schedule();
    //}
}
// 定义一个延时xus毫秒的延时函数
static void delay(unsigned int xus) // xus代表需要延时的微秒数
{
    unsigned int x,y;
    for(x=xus;x>0;x--)
        for(y=110;y>0;y--);
}
void test_user(){
    user_task_init(user_main);
}


/*void user_task_print(){
    //while(1){ 
    //    test_user_task++;
    //}
    //printk("int $0x60;");
    //test_user_task=user_sys_getpid();
    //asm volatile("int $0x60");
    //int num=10;
    //_syscall6(num);
    //printf("user sys getpid return %08d",test_user_task);
    int a=10;
    a=1000;
    user_print_string("hello,I'm User!\n");
    while(1);
}*/
