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

//三个管理区
extern pm_zone dma_zone;
extern pm_zone normal_zone;
extern pm_zone highmem_zone;

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
    timer_init(200);

    enable_interupt();

    serial_init();
    kbd_init();

    setup_vpt();
    pmm_init();

    test_pmm();

    test_vmm();

    
    task_init();
    
    //print_seg();
    //printk("successful\n");
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