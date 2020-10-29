#include "vmm.h"
#include "pmm.h"
#include "memlayout.h"
#include "../vga/vga.h"
#include "../interrupt/trap.h"
#include "../asm/asm.h"
//新页目录表
unsigned int new_pdt[PAGE_DIR_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );
//将DMA和NORMAL区域(0xC0000000-0xF8000000)线性映射到0x0-896MB处，刚好224个页表
//由于在init部分已经设置栈顶为F8000000，此处已经将其映射到了内核的最后部分
unsigned int pt_dma_nomal[(unsigned int)HIGHMEM_START/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
[PAGE_TABLE_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );

//HIGHMEM区域动态映射
unsigned int pt_highmem[((unsigned int)0x40000000-(unsigned int)HIGHMEM_START)/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
[PAGE_TABLE_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );

unsigned int highmem_start=0xF8000000;
unsigned int highmem_end=0xF8000000;
//HIGHMEM区域当前映射地址记录器
unsigned int highmem_ptr;

//建立新页表，记住每个表项存的都是物理地址，此时线性地址需进行转换
void setup_vpt()
{
    //页表数量
    unsigned int pt_len=(unsigned int)HIGHMEM_START/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE);

     for(unsigned int i=0;i<pt_len;i++){
            new_pdt[i+idx(PA_LA(DMA_START))]=LA_PA((unsigned int)pt_dma_nomal[i])|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_KERNEL;
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


/*
**           vmm_malloc:分配虚拟页
**     bytes:申请字节数 zonenum:所属管理区
*/
unsigned int vmm_malloc(unsigned int bytes,char zonenum){
    
    unsigned int page;

    unsigned int addr=pmm_alloc(bytes,zonenum);
	//需要分配的页数
	page=(bytes+VMM_PAGE_SIZE-1)/VMM_PAGE_SIZE;
	//printk("page:%08ux\n",page);

	//HIGHMEM管理区需动态映射
	if(zonenum==2){
        highmem_ptr=highmem_end;
		for(unsigned int i=0;i<page;i++){
            pt_highmem[(highmem_end-highmem_start)/
            ((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
            [(highmem_end-highmem_start)/VMM_PAGE_SIZE]=addr|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_KERNEL;
            highmem_end+=VMM_PAGE_SIZE;
            addr+=PMM_PAGE_SIZE;
        }
        unsigned int pt_num=(highmem_end-highmem_start+
        (unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE-1)/
        ((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE);
        for(unsigned int i=0;i<pt_num;i++){
            new_pdt[i+idx(highmem_start)]=LA_PA((unsigned int)pt_highmem[i])|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_KERNEL;
        }
        addr=highmem_ptr;
	}
	else{
		addr=PA_LA(addr);
	}
    //CPU_INVLPG(highmem_ptr);
    return addr;
}

/*
**           vmm_malloc:释放虚拟页
** 		 addr:起始地址 bytes:释放字节数 
*/
void vmm_free(unsigned int addr,unsigned int bytes){

	unsigned int page,pmaddr;
	//需要分配的页数
	page=(bytes+PMM_PAGE_SIZE-1)/PMM_PAGE_SIZE;
	
    pmaddr=LA_PA(addr);

	//HIGHMEM管理区需动态释放
	if(pmaddr>=(unsigned int)HIGHMEM_START){
        pmm_free(pt_highmem[((addr&VMM_PAGE_MASK)-highmem_start)/
            ((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
            [((addr&VMM_PAGE_MASK)-highmem_start)/VMM_PAGE_SIZE]&VMM_PAGE_MASK,bytes);

		for(unsigned int i=0;i<page;i++){
            pt_highmem[(addr-highmem_start)/
            ((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
            [(addr-highmem_start)/VMM_PAGE_SIZE]=addr|VMM_PAGE_UNPRESENT|VMM_PAGE_RW|VMM_PAGE_USER;;
            addr+=VMM_PAGE_SIZE;
        }
	}
	else{
		pmm_free(LA_PA(addr),bytes);
	}
}
