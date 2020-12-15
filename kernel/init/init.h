#ifndef _INIT_H_
#define _INIT_H_

#include "../main/main.h"

#define vmm_page_size 0x1000
#define page_table_size 0x400
#define page_dir_size 0x400

#define page_mask 0xFFFFF000

#define vmm_page_present 0x1 
#define vmm_page_rw      0x2
#define vmm_page_kernel  0x0

/*
*__attribute__( (section(".init.data") ) )将其设置为特定的.init.data节
*方便在链接脚本中区分init部分和kernel部分
*/
__attribute__( (section(".init.data") ) ) unsigned int pdt[page_dir_size]__attribute__( (aligned(vmm_page_size) ) );
__attribute__( (section(".init.data") ) ) unsigned int pt_init[page_table_size]__attribute__( (aligned(vmm_page_size) ) );
//专门为VGA设备映射建立的页表
__attribute__( (section(".init.data") ) ) unsigned int pt[page_table_size]__attribute__( (aligned(vmm_page_size) ) );
//目前内核还不大，假定其大小不超过12MB，即三个页表
__attribute__( (section(".init.data") ) ) unsigned int pt1[page_table_size]__attribute__( (aligned(vmm_page_size) ) );
__attribute__( (section(".init.data") ) ) unsigned int pt2[page_table_size]__attribute__( (aligned(vmm_page_size) ) );
__attribute__( (section(".init.data") ) ) unsigned int pt3[page_table_size]__attribute__( (aligned(vmm_page_size) ) );
//__attribute__( (section(".init.data") ) ) unsigned int pt4[page_table_size]__attribute__( (aligned(vmm_page_size) ) );
//内核栈大小为8KB,起始地址为0xF8000000，只需一个页表即可
__attribute__( (section(".init.data") ) ) unsigned int stack_pt[page_table_size]__attribute__( (aligned(vmm_page_size) ) );
//user部分
__attribute__( (section(".init.data") ) ) unsigned int user_pt[page_table_size]__attribute__( (aligned(vmm_page_size) ) );


__attribute__( (section(".init.text") ) ) void init();

extern void main(void);

#endif