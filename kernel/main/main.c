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
#define TIME_FREQUENCY 100

//三个管理区
extern pm_zone dma_zone;
extern pm_zone normal_zone;
extern pm_zone highmem_zone;
extern struct task_struct *current;
extern unsigned int volatile jiffies;

static struct lock test_lock;
static void delay(unsigned int xms);
void user_task_print();
int test_user_task=0;
void printf(char *fmt,...);
void main(void)
{
	clear();
	
    printk("FreeFlyOS is running\n");
   // print_seg();
    
    gdt_init();
   // printk("After gdt init\n");
  //print_seg();

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

    task_init();
   // clear();
    //必须放在task_init后，不然访问current会出现缺页
    //timer_init(TIME_FREQUENCY); //100HZ
    
    //test_user();
    //lock_init(&test_lock);
    //test_schedule();
    //test_schedule();
    //print_seg();
    //printk("successful\n");
    //test_ide_io();
    test_fs();
    while(1);
}
void test_pmm(){
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
    int newtask1_pid=kernel_thread(print_task1,"task1 ",0);
    //struct task_struct *newtask1=find_task(newtask1_pid);
    
    //set_task_name(newtask1,"task1");
    
    int newtask2_pid=kernel_thread(print_task2,"task2 ",0);
   // struct task_struct *newtask2=find_task(newtask2_pid);
    printk("Hello ");
   // set_task_name(newtask2,"task2");
    intr_enable();
    printk("Hello ");
    while(1){
        //if(!(jiffies%100))
        printk("Main ");
        delay(1000000);
    }     
}
static void print_task1(void *arg){
    /* 用void*来通用表示参数,被调用的函数知道自己需要什么类型的参数,自己转换再用 */
    char* para = arg;
    while(1){
        lock_acquire(&test_lock);
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
        lock_acquire(&test_lock);
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
    user_task_init(user_task_print);
}

void user_task_print(){
    //while(1){ 
    //    test_user_task++;
    //}
    //printk("int $0x60;");
    test_user_task=user_sys_getpid();
    //asm volatile("int $0x60");
    //int num=10;
    //_syscall6(num);
    printf("user sys getpid return %08d",test_user_task);
    while(1);
}
void printf(char *fmt,...){
    va_list ap;
    
    char c;
    char *str;

    int dec_num;
    int hex_num;

    unsigned int unsigned_dec_num;
    unsigned int unsigned_hex_num;

    long long ll_hex_num;

    unsigned long long ull_hex_num;

    char bits=0;     //record the number's bits

    va_start(ap,fmt);

    while(*fmt){
        if(*fmt=='%'){
user_dis_num:    switch (*(++fmt))
            {
                case 'c':
                    c=va_arg(ap,char);
                    user_print_char(c);
                    break;
                case 's':
                    str=va_arg(ap,char *);
                    user_print_string(str);
                    break;
                case 'd':
                    dec_num=va_arg(ap,int);
                    if(bits){
                        user_print_num(dec_num,dec,bits,display_bits);
                    }
                    else{
                        user_print_num(dec_num,dec,ulonglong_max,display_num);
                    }
                    break;
                case 'X':
                case 'x':
                    hex_num=va_arg(ap,int);
                    if(bits){
                        user_print_num(hex_num,hex,bits,display_bits);
                    }
                    else{
                        user_print_num(hex_num,hex,ulonglong_max,display_num);
                    }
                    break;
                case 'l':
                case 'L':
                    ll_hex_num=va_arg(ap,long long);
                    if(bits){
                        user_print_num(ll_hex_num,hex,bits,display_bits);
                    }
                    else{
                        user_print_num(ll_hex_num,hex,ulonglong_max,display_num);
                    }
                    break;
                case 'u':
                    switch (*(++fmt))
                    {
                        case 'd':
                            unsigned_dec_num=va_arg(ap,unsigned int);
                            if(bits){
                                user_print_num(unsigned_dec_num,dec,bits,display_bits);
                            }
                            else{
                                user_print_num(unsigned_dec_num,dec,ulonglong_max,display_num);
                            }
                            break;
                        case 'X':
                        case 'x':
                            unsigned_hex_num=va_arg(ap,unsigned int);
                            if(bits){
                                user_print_num(unsigned_hex_num,hex,bits,display_bits);
                            }
                            else{
                                user_print_num(unsigned_hex_num,hex,ulonglong_max,display_num);
                            }
                            break;
                        case 'l':
                        case 'L':
                            ull_hex_num=va_arg(ap,unsigned long long);
                            if(bits){
                                user_print_num(ull_hex_num,hex,bits,display_bits);
                            }
                            else{
                                user_print_num(ull_hex_num,hex,ulonglong_max,display_num);
                                }
                            break;
                        default:
                            break;
                    }
                    break;
                //read the bits of number displayed,the range is 00-99
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    bits=(*fmt-'0')*10+(*(++fmt)-'0');
                    goto user_dis_num;
                    break;
                default:    
                    user_print_string("error format!Please correct it!");
                    break;
            }
            fmt++;
        }
        else{
            user_print_char(*fmt);
            fmt++;
        }
        bits=0;
    }
}