#ifndef _PMM_H_
#define _PMM_H_

//内存探测时存储数据地址
#define mem_seg_num 0x8000
#define mem_seg_start 0x8004

//物理页大小 4KB
#define PMM_PAGE_SIZE 0x1000 
//物理页掩码
#define PMM_PAGE_MASK 0xFFFFF000

//物理页标志位
#define PMM_PAGE_KERNEL 0
#define PMM_PAGE_USER 1
#define PMM_PAGE_DIRTY 2
#define PMM_PAGE_LOCK 4
#define PMM_PAGE_INVALID 8

#define PMM_PAGE_DMA 0
#define PMM_PAGE_NORMAL 16
#define PMM_PAGE_HIGHMEM 32

//管理区域起始地址
#define DMA_START 0x0
#define NORMAL_START 0x1000000     //16MB
#define HIGHMEM_START 0x38000000   //896MB
//2GB的内存，最多有2GB/4KB=2^19个页=524288页
#define MAX_PMM_PAGE 0x80000
//将物理地址转化为物理页号
#define pa_idx(pa) ((pa&PMM_PAGE_MASK)>>12)

struct memory_seg{
	unsigned long long base;
	unsigned long long size;
	unsigned int state;
}__attribute__((packed));

//内存管理单位：页
typedef struct page{
	/* 
		  一组标志位  
	   位0代表页属性，0代表内核页，1代表用户页
	   位1代表是否被修改，即脏位,1代表已修改
	   位2代表是否上锁，1代表已上锁
	   位3代表该页是不是处于MMIO区域，即不可用内存,1代表该页不可用	
	   位4和位5代表该页所属管理区，00代表DMA区域，01代表NORMAL区域，10代表HIGHMEM区域
	*/
	unsigned char flags;
	int count; //页的引用计数器，字段为-1时，代表空闲
	unsigned int addr; //页起始地址
	//struct address_space *mapping;
}pm_page;

//内存管理区域
typedef struct zone{
	pm_page *pmpage; //指向该区域下的物理页数组
	unsigned int all_pages; //管理区下的物理页数量
	unsigned int free_pages; //管理区下的空闲页数量
}pm_zone;

void pmm_init();
unsigned int pmm_alloc(unsigned int bytes,char zone);
void pmm_free(unsigned int addr,unsigned int bytes);

#endif