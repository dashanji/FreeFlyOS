#ifndef _VMM_H_
#define _VMM_H_

#include "../stl/list.h"
//虚拟页大小
#define VMM_PAGE_SIZE 0x1000

//页目录项数
#define PAGE_DIR_SIZE 0x400
//页表项数
#define PAGE_TABLE_SIZE 0x400

//虚拟页掩码
#define VMM_PAGE_MASK 0xFFFFF000

//bit0代表页或页表存在位，为1时，说明页在物理内存中，指向地址转换
//              为0时，表示页不在内存中，若访问则出现页故障异常
#define VMM_PAGE_PRESENT 0x1 
#define VMM_PAGE_UNPRESENT 0x0
//bit1代表一个页或一组页的读/写标志，为0时只读，为1时可读可写
#define VMM_PAGE_RW      0x2 
//bit2代表一个页或一组页的权限，为0时内核权限，为1时用户权限
#define VMM_PAGE_KERNEL  0x0
#define VMM_PAGE_USER    0x4

//addr开始的虚拟地址在页目录表中的项数
#define idx(addr) (unsigned int)((unsigned int)addr)/((unsigned int)PAGE_TABLE_SIZE*(unsigned int)VMM_PAGE_SIZE)

//将链表节点转化为vma_struct起始地址
#define le2vma(le, member)                  \
    to_struct((le), struct vma_struct, member)

#define VMA_READ 0x1    //只读
#define VMA_WRITE 0x2   //只写
#define VMA_EXEC 0x4    //只执行 

//VMA数据结构，为了分配大量连续的页
struct vma_struct{
    //struct mm_struct *vm_mm;
    unsigned int vm_start; //虚拟内存区域起始地址
    unsigned int vm_end; //结束地址
    unsigned int vm_flags; //标志变量
    //list_entry_t link;
};

//highmem区域虚拟地址转换为物理地址
struct highmem_va_pa
{
    unsigned int va; //页表虚拟地址
    unsigned int pa; //页表物理地址
};

//包含所有VMA的共同属性
/*struct mm_struct{
    list_entry_t mmap_link; 
    struct vma_struct *mmap_cache; //包含的所有VMA区域
    unsigned int *pgdir; //包含的VMA区域所属页表
    int map_count;  //包含的VMA区域计数器
}; */

void setup_vpt();
unsigned int vmm_malloc(unsigned int bytes,char zonenum);
void vmm_free(unsigned int addr,unsigned int bytes);

void vmm_map(unsigned int *pdt,unsigned int va_start,unsigned int va_end,unsigned int pa_start);
unsigned int setup_pgdir();
#endif