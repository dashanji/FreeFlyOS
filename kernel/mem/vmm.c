#include "vmm.h"
#include "pmm.h"
#include "memlayout.h"
#include "../vga/vga.h"
#include "../interrupt/trap.h"
//DMA区域开始的虚拟地址在页目录表中的项数
#define dma_idx (unsigned int)(DMA_START+0xC0000000)/((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)
//新页目录表
unsigned int new_pdt[PAGE_DIR_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );
//将DMA和NORMAL区域(0xC0000000-0xF8000000)线性映射到0x0-896MB处，刚好224个页表
//由于在init部分已经设置栈顶为F8000000，此处已经将其映射到了内核的最后部分
unsigned int pt_dma_nomal[(unsigned int)HIGHMEM_START/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
[PAGE_TABLE_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );

//建立新页表，记住每个表项存的都是物理地址，此时线性地址需进行转换
void setup_vpt()
{
    //页表数量
    unsigned int pt_len=(unsigned int)HIGHMEM_START/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE);

     for(unsigned int i=0;i<pt_len;i++){
            new_pdt[i+dma_idx]=LA_PA((unsigned int)pt_dma_nomal[i])|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_KERNEL;
        }
    
    for(unsigned int i=0,j=0,k=0,n=0;n<pt_len*(unsigned int)PAGE_TABLE_SIZE;i+=(unsigned int)VMM_PAGE_SIZE,n++){
        pt_dma_nomal[j][k++]=i|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_KERNEL;
        if(k==PAGE_TABLE_SIZE){
            j++;
            k=0;
        }
        //printk("i:%08ux\nj:%08ux\nk:%08ux\n",i,j,k);
    }
   
    //更换新页表
    __asm__ volatile ("mov %0, %%cr3" : : "r" (LA_PA((unsigned int)new_pdt)) );
    //在该函数结束的时候，由于特权级未发生变化，属于平级调用，所以在返回的时候需要记录栈指针
    //因此为了保证更换页表后代码能正常运行，更换页表前后的栈都是对应同一段物理内存0x37FFE000-0x38000000
}