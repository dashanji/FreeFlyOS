/*
*     init.c : 建立临时页表，开启分页
*/
#include "init.h"
#include "../mem/memlayout.h"
#include "../debug/debug.h"
/*
*        具体映射关系已经在kernel.ld中定义即，LMA=VMA-0xC0000000，故
*               只需将内核所在的地址写入页表，并开启分页即可。
*/
extern unsigned int kernel_end;
void init()
{
    //内核 起始页在页目录表中的第几项
    unsigned int kernel_pdt_idx=(KERNEL_START&page_mask)/(vmm_page_size*page_table_size);
    //内核栈 起始页在页目录表中的第几项
    unsigned int stack_pdt_idx=((KERNEL_STACK_START-KERNEL_STACK_SIZE)&page_mask)/(vmm_page_size*page_table_size);
    //user 
    //unsigned int user_pdt_idx=((unsigned int)0x800000&page_mask)/(vmm_page_size*page_table_size);

    //在页目录表项中设置对应的页表地址
    //init部分对应的页目录表项
    pdt[0]=(unsigned int)pt_init|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    //C0000000开始的4MB对应的页目录表项
    pdt[kernel_pdt_idx-4]=(unsigned int)pt|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    //内核部分对应的页目录表项
    pdt[kernel_pdt_idx]=(unsigned int)pt1|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    pdt[kernel_pdt_idx+1]=(unsigned int)pt2|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    pdt[kernel_pdt_idx+2]=(unsigned int)pt3|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    //内核栈部分对应的页目录表项
    pdt[stack_pdt_idx]=(unsigned int)stack_pt|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    //user部分对应的页目录项
    //pdt[user_pdt_idx]=(unsigned int)user_pt|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    /*目前需要映射页表的只有三个部分，分别是init部分（一个页表）、内核部分（两个页表）、内核栈（两页）*/
    
    //因为在init中开启分页后，代码仍然是停留在init部分，所以需要将其虚拟地址映射到物理地址，显然这部分不会超过4MB
    //故将其虚拟地址0-4MB全部映射到物理内存0-4MB
    for(unsigned int i=0;i<page_table_size;i++){
        pt_init[i]=(i<<12)|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    }
    //将0xC0000000的前4MB映射到物理地址，即虚拟地址0xC0000000-0xC0400000映射到物理地址0x00000000-0x00400000
    //VGA设备会用到，且内存探测时存储了数据在0x8000处，避免后面出现缺页
    for(unsigned int i=0,j=0;i<page_table_size;i++,j+=vmm_page_size){
        pt[i]=j|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    }
    //将内核开始的前4MB映射到物理地址，即虚拟地址0xC1000000-0xC1400000映射到物理地址0x01000000-0x01400000
    for(unsigned int i=0,j=0x1000000;i<page_table_size;i++,j+=vmm_page_size){
        pt1[i]=j|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    }
    //将内核开始的4MB-8MB映射到物理地址，即虚拟地址0xC1400000-0xC1800000映射到物理地址0x01400000-0x01800000
    for(unsigned int i=0,j=0x1000000+vmm_page_size*page_table_size;i<page_table_size;i++,j+=vmm_page_size){
        pt2[i]=j|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    }
    //将内核开始的8MB-12MB映射到物理地址，即虚拟地址0xC1800000-0xC1B00000映射到物理地址0x01800000-0x01B00000
    for(unsigned int i=0,j=0x1000000+vmm_page_size*page_table_size*2;i<page_table_size;i++,j+=vmm_page_size){
        pt3[i]=j|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    }
    //计算栈底在页表中的第几项，栈是向低地址增长的，实际栈为0xF7FFE000-0xF8000000，映射到0x37FFE000-0x38000000
    unsigned int stack_pt_idx=(((KERNEL_STACK_START-KERNEL_STACK_SIZE)&page_mask)/vmm_page_size)&0x3ff;
    for(unsigned int i=stack_pt_idx,j=0x37FFE000;i<stack_pt_idx+2;i++,j+=vmm_page_size){
        stack_pt[i]=j|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    }
    /*unsigned int user_pt_idx=(((unsigned int)0x800000&page_mask)/vmm_page_size)&0x3ff;
    for(unsigned int i=user_pt_idx,j=(unsigned int)0x800000;i<stack_pt_idx+1;i++,j+=vmm_page_size){
        user_pt[i]=j|vmm_page_present|vmm_page_rw|vmm_page_kernel;
    }*/
    //0x37FFE000
    /*  开启分页    */
	__asm__ volatile ("mov %0, %%cr3" : : "r" (pdt) );       
	unsigned int cr0;
	__asm__ volatile ("mov %%cr0, %0" : "=r" (cr0) );
	// 最高位 PG 位置 1，分页开启
	cr0 |= (1u << 31);      
	__asm__ volatile ("mov %0, %%cr0" : : "r" (cr0) );

    /*设置栈顶为0xF8000000 ，栈大小为8KB*/
    __asm__ volatile ("mov %0, %%esp" : : "r" ((unsigned int)KERNEL_STACK_START));
	__asm__ volatile ("xor %%ebp, %%ebp" : :);
//__asm__ volatile ("mov %0, %%ebp" : : "r" ((unsigned int)KERNEL_STACK_START-(unsigned int)KERNEL_STACK_SIZE));
    //判断内核是否映射完全，关键是BSS段
    //ASSERT((unsigned int)(&kernel_end)>(unsigned int)0x01B00000);
    //调用内核入口
    main();
    
    return;
}