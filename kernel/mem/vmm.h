#ifndef _VMM_H_
#define _VMM_H_

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
//bit1代表一个页或一组页的读/写标志，为0时只读，为1时可读可写
#define VMM_PAGE_RW      0x2 
//bit2代表一个页或一组页的权限，为0时内核权限，为1时用户权限
#define VMM_PAGE_KERNEL  0x0




void setup_vpt();
#endif