#ifndef _PMM_H_
#define _PMM_H_

#define mem_seg_num 0x8000
#define mem_seg_start 0x8004

struct memory_seg{
	unsigned long long base;
	unsigned long long size;
	unsigned int state;
}__attribute__((packed));

#endif