#include  "pmm.h"
#include  "memlayout.h"
#include  "../vga/vga.h"
#include  "../asm/asm.h"
/*
*   在链接脚本kernel.ld中确定的内核结束地址，该值相当于一个指针
*	   &kernel_start相当于内核起始地址的VMA
*/
 

//物理页数组
pm_page pp[MAX_PMM_PAGE];
//三个管理区
pm_zone dma_zone;
pm_zone normal_zone;
pm_zone highmem_zone;	

extern unsigned int kernel_end;
/*
*       物理内存初始化
*/
void pmm_init(){
	unsigned int dma_free=0,normal_free=0,highmem_free=0;

	//物理页初始化，此时已开启新的页表，地址需进行转换
	struct memory_seg *mem=(struct memory_seg *)(PA_LA(mem_seg_start));
	for(unsigned int i=*(unsigned int *)(PA_LA(mem_seg_num)),j=0;i>0;i--,j++){
		for(unsigned int x=mem[j].base;x<((x+(unsigned int)mem[j].size)&PMM_PAGE_MASK);x+=PMM_PAGE_SIZE){
			//使用qemu模拟器时，会打印一些2GB以上的不可用内存，所以直接舍去即可
			if(x<0x80000000){
				//如果为可用内存
				if(mem[j].state==1)	{
					pp[pa_idx(x)].flags=PMM_PAGE_KERNEL;
					pp[pa_idx(x)].count=-1;
					pp[pa_idx(x)].addr=x&PMM_PAGE_MASK;					
				}
				//不可用内存
				else{
					pp[pa_idx(x)].flags=PMM_PAGE_INVALID;
					pp[pa_idx(x)].count=0;
					pp[pa_idx(x)].addr=x&PMM_PAGE_MASK;
				}
				//每个页分配一个管理区
				if(pp[pa_idx(x)].addr<NORMAL_START){
						pp[pa_idx(x)].flags|=PMM_PAGE_DMA;
						dma_free+=pp[pa_idx(x)].count==-1?1:0;
				}
				else if(pp[pa_idx(x)].addr<HIGHMEM_START){
					pp[pa_idx(x)].flags|=PMM_PAGE_NORMAL;
					normal_free+=pp[pa_idx(x)].count==-1?1:0;
				}
				else{
					pp[pa_idx(x)].flags|=PMM_PAGE_HIGHMEM;
					highmem_free+=pp[pa_idx(x)].count==-1?1:0;
				}				
			}
		}
	}
	//管理区域初始化
	//dma区域所管理的物理页数量
	dma_zone.all_pages=((unsigned int)NORMAL_START-(unsigned int)DMA_START)/(unsigned int)PMM_PAGE_SIZE;
	dma_zone.free_pages=dma_free;
	dma_zone.pmpage=pp;
	//normal区域所管理的物理页数量
	normal_zone.all_pages=((unsigned int)HIGHMEM_START-(unsigned int)NORMAL_START)/(unsigned int)PMM_PAGE_SIZE;
	normal_zone.free_pages=normal_free;
	normal_zone.pmpage=&pp[dma_zone.all_pages];
	//highmem区域所管理的物理页数量
	highmem_zone.all_pages=(unsigned int)MAX_PMM_PAGE-(unsigned int)HIGHMEM_START/(unsigned int)PMM_PAGE_SIZE;
	highmem_zone.free_pages=highmem_free;
	highmem_zone.pmpage=&pp[normal_zone.all_pages+dma_zone.all_pages];
	/*
	//打印几个具有标志性的物理页
	printk("pp[0] address:%08ux\ncount:%08ux\n"
	,pp[0].addr,pp[0].count);
	printk("pp[0x9E] address:%08ux\ncount:%08ux\n"
	,pp[0x9E].addr,pp[0x9E].count);
	printk("pp[0x9F] address:%08ux\ncount:%08ux\n"
	,pp[0x9F].addr,pp[0x9F].count);
	printk("pp[0x100-1] address:%08ux\ncount:%08ux\n"
	,pp[0x100-1].addr,pp[0x100-1].count);
	printk("pp[0x100] address:%08ux\ncount:%08ux\n"
	,pp[0x100].addr,pp[0x100].count);
	printk("pp[0x7FFDF] address:%08ux\ncount:%08ux\n"
	,pp[0x7FFDF].addr,pp[0x7FFDF].count);
	printk("pp[0x7FFE0] address:%08ux\ncount:%08ux\n"
	,pp[0x7FFE0].addr,pp[0x7FFE0].count);
	printk("pp[0x7FFFF] address:%08ux\ncount:%08ux\n"
	,pp[0x7FFFF].addr,pp[0x7FFFF].count);
	*/
	//打印管理区信息
/*	printk("DMA page all_pages:%08ux\nfree_pages:%08ux\nstart:%08ux\nend:%08ux\n",
	dma_zone.all_pages,
	dma_zone.free_pages,
	dma_zone.pmpage[0].addr,
	dma_zone.pmpage[dma_zone.all_pages-1].addr);
	printk("NORMAL page all_pages:%08ux\nfree_pages:%08ux\nstart:%08ux\nend:%08ux\n",
	normal_zone.all_pages,
	normal_zone.free_pages,
	normal_zone.pmpage[0].addr,
	normal_zone.pmpage[normal_zone.all_pages-1].addr);
	printk("HIGHMEM page all_pages:%08ux\nfree_pages:%08ux\nstart:%08ux\nend:%08ux\n",
	highmem_zone.all_pages,
	highmem_zone.free_pages,
	highmem_zone.pmpage[0].addr,
	highmem_zone.pmpage[highmem_zone.all_pages-1].addr);
*/
	//设置内核页面被占用
	for(unsigned int i=LA_PA((unsigned int)KERNEL_START);i<(unsigned int)(((unsigned int)LA_PA((unsigned int)&kernel_end)+PMM_PAGE_SIZE-1)&PMM_PAGE_MASK);i+=PMM_PAGE_SIZE){
		normal_zone.pmpage[(i-LA_PA((unsigned int)KERNEL_START))/PMM_PAGE_SIZE].count=1;
		normal_zone.free_pages--;
	}
	//设置内核栈页面被占用,向低地址增长
	for(unsigned int i=LA_PA((unsigned int)KERNEL_STACK_START-(unsigned int)KERNEL_STACK_SIZE);i<(unsigned int)(LA_PA((unsigned int)KERNEL_STACK_START)&PMM_PAGE_MASK);i+=PMM_PAGE_SIZE){
		normal_zone.pmpage[(i-LA_PA((unsigned int)KERNEL_START))/PMM_PAGE_SIZE].count=1;
		normal_zone.free_pages--;
	}
	printk("DMA free_pages:%08ux\tNORMAL free_pages:%08ux\tHIGHMEM free_pages:%08ux\n",
	dma_zone.free_pages, normal_zone.free_pages, highmem_zone.free_pages);
}
/*
**		最简单的物理页分配算法：按页分配，不满一页则分配一页
** 			bytes:申请字节数 zonenum:所属管理区
*/
unsigned int pmm_alloc(unsigned int bytes,char zonenum){
	
	unsigned int page,addr;
	unsigned int start,end,num=0;
	pm_zone *zone_ptr;

	//需要分配的页数
	page=(bytes+PMM_PAGE_SIZE-1)/PMM_PAGE_SIZE;
	//printk("page:%08ux\n",page);

	//分配管理区
	if(zonenum==0){
		zone_ptr=&dma_zone;
	}
	else if(zonenum==1){
		zone_ptr=&normal_zone;
	}
	else{
		zone_ptr=&highmem_zone;
	}

	//找到连续的page页
	start=0;
	for(unsigned int i=0;i<zone_ptr->all_pages;i++){
		if(zone_ptr->pmpage[i].count==-1){
			num++;
			end=i;
		}
		else{
			start=i+1;
			num=0;
		}
		if(num==page){
			break;
		}
	}

	//设置管理区属性
	for(unsigned int i=start;i<=end;i++){
		zone_ptr->pmpage[i].count=1;
		zone_ptr->free_pages--;
	}

	return zone_ptr->pmpage[start].addr;
}

/*
**		物理页释放算法：按页释放，不满一页则释放一页
** 		addr:起始地址 bytes:释放字节数 
*/
void pmm_free(unsigned int addr,unsigned int bytes){

	unsigned int page;
	pm_zone *zone_ptr;
	//需要释放的页数
	page=(bytes+PMM_PAGE_SIZE-1)/PMM_PAGE_SIZE;

	//分配管理区
	if(addr<NORMAL_START){
		zone_ptr=&dma_zone;
	}
	else if(addr<HIGHMEM_START){
		addr-=(unsigned int)NORMAL_START;
		zone_ptr=&normal_zone;
	}
	else{
		addr-=(unsigned int)HIGHMEM_START;
		zone_ptr=&highmem_zone;
	}

	//设置管理区属性
	unsigned int start=addr&PMM_PAGE_MASK;
	//起始页号
	unsigned int pgstart=start/(unsigned int)PMM_PAGE_SIZE;
	for(unsigned int i=0;i<page;i++){
		//memset(PA_LA(zone_ptr->pmpage[pgstart].addr),0,PMM_PAGE_SIZE);
		zone_ptr->pmpage[pgstart].count=-1;
		zone_ptr->free_pages++;
		pgstart++;
	}
	
}