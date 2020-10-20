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
    print_seg();

    pic_init();
    idt_init();
    timer_init(200);

    enable_interupt();

    serial_init();
    kbd_init();

    setup_vpt();
    pmm_init();

    test();
    //printk("successful\n");
    while(1);
}
void test(){
    //在NORMAL区域申请200个字节
    unsigned int nor_addr=pmm_alloc(0x200,1);
    //在DMA区域申请2000个字节
    unsigned int dma_addr=pmm_alloc(0x2000,0);
    //在HIGHMEM区域申请3000个字节
    unsigned int high_addr=pmm_alloc(0x3000,2);
    printk("DMA---dma_addr:%08ux\n",dma_addr);
    printk("NORMAL---nor_addr:%08ux\n",nor_addr);
    printk("HIGHMEM---high_addr:%08ux\n",high_addr);
    //打印管理区空闲页信息
	printk("DMA free_pages:%08ux\tNORMAL free_pages:%08ux\tHIGHMEM free_pages:%08ux\n",
	dma_zone.free_pages, normal_zone.free_pages, highmem_zone.free_pages);
    pmm_free(nor_addr,0x200);
    pmm_free(dma_addr,0x2000);
    pmm_free(high_addr,0x3000);
    //打印管理区空闲页信息
	printk("DMA free_pages:%08ux\tNORMAL free_pages:%08ux\tHIGHMEM free_pages:%08ux\n",
	dma_zone.free_pages, normal_zone.free_pages, highmem_zone.free_pages);
    
}
