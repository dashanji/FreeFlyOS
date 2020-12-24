#include "vmm.h"
#include "pmm.h"
#include "memlayout.h"
#include "../vga/vga.h"
#include "../interrupt/trap.h"
#include "../asm/asm.h"
#include "../stl/defs.h"
#include "../task/task.h"
//新页目录表
unsigned int new_pdt[PAGE_DIR_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );
//将DMA和NORMAL区域(0xC0000000-0xF8000000)线性映射到0x0-896MB处，刚好224个页表
//由于在init部分已经设置栈顶为F8000000，此处已经将其映射到了内核的最后部分
unsigned int pt_dma_nomal[(unsigned int)HIGHMEM_START/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
[PAGE_TABLE_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );

//内核HIGHMEM区域动态映射
unsigned int pt_highmem[((unsigned int)0x40000000-(unsigned int)HIGHMEM_START)/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
[PAGE_TABLE_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );

//用户HIGHMEM区域动态映射
unsigned int user_pt_highmem[(unsigned int)0xC0000000/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
[PAGE_TABLE_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );

//用户HIGHMEM区域申请页面对应的物理地址，用户新建页表时需要绑定新页表的实际物理地址
//struct highmem_va_pa high_va_pa[];
unsigned int highmem_start=0xF8000000;
unsigned int highmem_end=0xF8000000;
//HIGHMEM区域当前映射地址记录器
unsigned int highmem_ptr;

extern unsigned int user_end;
extern struct task_struct *current;
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
    //用户页表设置为0，防止后面清理用户页表时缺页（需要遍历）
    /*for(unsigned int i=0;i<(unsigned int)0xC0000000/
((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE);i++)
    for(unsigned int j=0;j<PAGE_TABLE_SIZE;j++)
    {
        user_pt_highmem[i][j]=0;//|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_USER;
    }*/
    /* 对user部分进行映射,0x40000000至user_end 映射到 0x40000000起始的一段区域 */
    vmm_map(new_pdt,0x40000000,&user_end,0x40000000);
    //&user_end
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
            [((highmem_end-highmem_start)/VMM_PAGE_SIZE)%PAGE_TABLE_SIZE]=addr|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_USER;
            highmem_end+=VMM_PAGE_SIZE;
            addr+=PMM_PAGE_SIZE;
        }
        unsigned int pt_num=(highmem_end-highmem_start+
        (unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE-1)/
        ((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE);
        for(unsigned int i=0;i<pt_num;i++){
            new_pdt[i+idx(highmem_start)]=LA_PA((unsigned int)pt_highmem[i])|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_USER;
            //printk("i+idx(highmem_start) : %08d",i+idx(highmem_start));
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
            [(((addr&VMM_PAGE_MASK)-highmem_start)/VMM_PAGE_SIZE)%PAGE_TABLE_SIZE]&VMM_PAGE_MASK,bytes);

		for(unsigned int i=0;i<page;i++){
            pt_highmem[(addr-highmem_start)/
            ((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)]
            [((addr-highmem_start)/VMM_PAGE_SIZE)%PAGE_TABLE_SIZE]=addr|VMM_PAGE_UNPRESENT|VMM_PAGE_RW|VMM_PAGE_USER;//VMM_PAGE_KERNEL;
            addr+=VMM_PAGE_SIZE;
        }
	}
	else{
		pmm_free(LA_PA(addr),bytes);
	}
}

/*
**           vmm_map(pdt,start,end)
**          pdt为待映射的页表基址，虚拟地址
** 将虚拟地址va_start-va_end的区域映射到HIGHMEM区域pa_start，建立页表映射关系
**      （DMA和NORMAL区域已经默认映射内核 ）
**       
*/
void vmm_map(unsigned int *pdt,unsigned int va_start,unsigned int va_end,
unsigned int pa_start){
    
    unsigned int page;
    //需要映射的实际地址
    unsigned int map_start=va_start&(unsigned int)VMM_PAGE_MASK;
    unsigned int map_end=(va_end+VMM_PAGE_SIZE-1)&VMM_PAGE_MASK;
    unsigned int pos=map_start;
    pa_start&=VMM_PAGE_MASK;
    //计算需要分配的页数
    page=(map_end-map_start)/VMM_PAGE_SIZE;
    for(unsigned int i=0;i<page;i++){
            user_pt_highmem[idx(pos)][(pos/(unsigned int)VMM_PAGE_SIZE)%PAGE_TABLE_SIZE]=
            pa_start|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_USER;
            pa_start+=VMM_PAGE_SIZE;
            pos+=VMM_PAGE_SIZE;
        }
        unsigned int pt_num=(page+PAGE_TABLE_SIZE-1)/PAGE_TABLE_SIZE;
        for(unsigned int i=0;i<pt_num;i++){
            pdt[i+idx(map_start)]=LA_PA((unsigned int)user_pt_highmem[i+idx(map_start)])|VMM_PAGE_PRESENT|VMM_PAGE_RW|VMM_PAGE_USER;
        }
}

// setup_pgdir - alloc one page as PDT
unsigned int
setup_pgdir() {
    unsigned int pdt_start=vmm_malloc(VMM_PAGE_SIZE,1);
    memcpy(pdt_start, new_pdt, VMM_PAGE_SIZE);
    //pgdir[PDX(VPT)] = PADDR(pgdir) | PTE_P | PTE_W;
    //mm->pgdir = pgdir;
    return pdt_start;
}
/*
**   vma_malloc:分配VMA区域
**   vm_start:虚拟区域起始地址
**   vm_end:虚拟区域结束地址   
**   vm_flags:虚拟区域属性，可读、可写、可执行
**   zonenum:VMA区域所属管理区
*/
/*struct vma_struct *
vma_create(unsigned int vm_start, unsigned int vm_end, unsigned int vm_flags,char zonenum) {
    unsigned int size=round_up_to(vm_end-vm_start,VMM_PAGE_SIZE);
    struct vma_struct *vma = vmm_malloc(size,zonenum);

    if (vma != NULL) {
        vma->vm_start = vm_start;
        vma->vm_end = vm_end;
        vma->vm_flags = vm_flags;
    }
    return vma;
}

struct mm_struct *
mm_create(char zonenum) {
    struct mm_struct *mm = vmm_malloc(sizeof(struct mm_struct),zonenum);

    if (mm != NULL) {
        list_init(&(mm->mmap_link));
        mm->mmap_cache = NULL;
        mm->pgdir = NULL;
        mm->map_count = 0;
        
        set_mm_count(mm, 0);
    }    
    return mm;
}*/
/* sys_malloc系统调用，为用户分配内存 */
unsigned int sys_malloc(unsigned int bytes){
    unsigned int addr=vmm_malloc(bytes,2);
    memcpy(current->cr3_va,new_pdt,VMM_PAGE_SIZE);
    return addr;
}
/* sys_free系统调用，为用户释放内存 */
void sys_free(unsigned int addr,unsigned int size){
    vmm_free(addr,size);
    memcpy(current->cr3_va,new_pdt,VMM_PAGE_SIZE);
}
/* sys_mmap系统调用，分配内存段到指定位置*/
void sys_mmap(unsigned int va_start,unsigned int va_end,unsigned int pa_start){
    unsigned int *pdt=(unsigned int *)current->cr3_va;
    vmm_map(pdt,va_start,va_end,pa_start);
}