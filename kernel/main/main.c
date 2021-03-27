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
#include "../apic/apic.h"
#include "../mp/mp_config.h"
#include "../ap/ap.h"
#include "../ap/apheader.h"
#include "../internet/pci.h"
#include "../internet/rtl8139.h"
#include "../internet/ethernet.h"
#include "../internet/arp.h"
#include "../internet/ip.h"
#include "../internet/icmp.h"
#include "../socket/localsocket.h"
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
    write2fs(); //放在进程初始化后，需要安装到当前进程的fd表，写入到文件系统即可，故仅需执行一次
    
    //必须放在task_init后，不然访问current会出现缺页
    timer_init(TIME_FREQUENCY); //100HZ
    /*************************测试socket********************/
    socket_init();
    /*************************测试socket********************/
    sema_init(&user_sema,0);
    user_task_init(user_main);
    clear();
    
    /*************************测试多核********************/
    

    // clear();
    //init_apic();
    //ioapic_init();
    
    //enable_irq(IRQ_KBD,0);
   // mp_config_init();
    //ap_init();
  
    /*************************测试多核********************/
   
    /*************************测试网络********************/
    //clear();
    //pci_init();
     
    //rtl8139_init();

    //test_arp();
    //unsigned char dst[eth_macaddr_len]={0xd2,0xc0,0xcb,0x35,0xb2,0xd3};
    //test_icmp();
  /*  struct net_buf *nb=(struct net_buf *)vmm_malloc(200,1);
    nb->data=(char *)nb+sizeof(struct net_buf);
    nb->data_len=98;
    char str[98]={
        0x00,0x50,0x56,0xee,0x8f,0x0c,0x00,0x0c,
        0x29,0x87,0x7e,0xf3,0x08,0x00,0x45,0x00,
        0x00,0x54,0x0f,0x55,0x40,0x00,0x40,0x01,
        0x7e,0x46,0xac,0x10,0xaa,0xea,0xac,0x10,
        0xaa,0x02,0x08,0x00,0x97,0x33,0x0d,0xde,
        0x00,0x01,0x55,0x83,0x58,0x60,0x00,0x00,
        0x00,0x00,0xde,0x36,0x08,0x00,0x00,0x00,
        0x00,0x00,0x10,0x11,0x12,0x13,0x14,0x15,
        0x16,0x17,0x18,0x19,0x1a,0x1b,0x1c,0x1d,
        0x1e,0x1f,0x20,0x21,0x22,0x23,0x24,0x25,
        0x26,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d,
        0x2e,0x2f,0x30,0x31,0x32,0x33,0x34,0x35,
        0x36,0x37
    };
    memcpy(nb->data,str,98);
    transmit(nb);*/
    
    /*************************测试网络********************/
    
    
    //test_schedule();
    //test_schedule();
    //print_seg();
    //printk("successful\n");
    //test_ide_io();
    //test_fs();
    while(1);
}
void test_arp(){
     char str[30]="Hello,nice to meet you!\n";
    int len=sizeof(str)/sizeof(char);

    unsigned char dst_mac[eth_macaddr_len]={0xFF,0xFF
    ,0xFF,0xFF,0xFF,0xFF};
    unsigned char dst_ip[ipaddr_len]={172,16,170,2};
    struct net_buf *nb=arp_request(dst_mac,dst_ip,str,len,ARP_OP_REQUEST);
    while(1){
        transmit(nb);
        delay(10000000);
    }
}
void test_ip(){
    char str[30]="Hello,nice to meet you!\n";
    int len=sizeof(str)/sizeof(char);

    unsigned char dst_ip[ipaddr_len]={192,168,0,2};
    unsigned int dstip=chartoui(dst_ip);
    for(int i=0;i<3;i++){
            send_ip_packet(str,len,dstip,RAW_protocal); //0xff -> raw
            delay(10000000);
    }
    clear_net_send_list();
    
}
void test_icmp(){
    char str[30]="Hello,nice to meet you!\n";
    int len=sizeof(str)/sizeof(char);

    unsigned char dst_ip[ipaddr_len]={192,168,0,2};
    unsigned char baidu_ip[ipaddr_len]={103,235,46,39};
    unsigned char gw[ipaddr_len]={172,16,170,2};
    unsigned int dstip=chartoui(baidu_ip);
    for(int i=0;i<3;i++){
            //send_icmp_request(dstip,0,i,str,len);
            send_icmp_request(dstip,0,i,NULL,0);
            //send_ip_packet(str,len,dstip,0xff); //0xff -> raw
            delay(10000000);
    }
    clear_net_send_list();
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
    //写入test_cpp
    file_size=20796; //通过本机OS 的ls -l命令获得
    sec_cnt=(file_size+512-1)/512;    //扇区数
    prog=vmm_malloc(file_size,1);
    ide_read((void *)prog,600,sec_cnt);
    fd=sys_open("/testcpp",O_CREAT|O_RDWR);
    if(fd!=-1){
      if(sys_write(fd,prog,file_size) == -1){
            printk("file write error!\n");
            while(1);
      }
    }
    vmm_free(prog,file_size);

    //写入test_socket
    file_size=15100; //通过本机OS 的ls -l命令获得
    sec_cnt=(file_size+512-1)/512;    //扇区数
    prog=vmm_malloc(file_size,1);
    ide_read((void *)prog,650,sec_cnt);
    fd=sys_open("/testsocket",O_CREAT|O_RDWR);
    if(fd!=-1){
      if(sys_write(fd,prog,file_size) == -1){
            printk("file write error!\n");
            while(1);
      }
    }
    vmm_free(prog,file_size);
    //写入test_ap，地址为C0009000
    //file_size=20796; //通过本机OS 的ls -l命令获得
    //sec_cnt=(file_size+512-1)/512;    //扇区数
    //ide_read((void *)0xC0009000,650,sec_cnt);
   
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


/*****************************多核测试***********************/
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
