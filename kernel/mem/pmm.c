#include  "pmm.h"
#include  "../vga/vga.h"

/*
*       打印机器内存信息
*/
void print_mem(){
	int j=0;
	struct memory_seg *mem=(struct memory_seg *)mem_seg_start;
	printk("*****************physical memory info*****************\n");
	printk("           base           size          type          \n");
	for(unsigned int i=*(unsigned int *)mem_seg_num;i>0;i--,j++){
		printk("\t%10ul\t%10ul\t%05ud\n",mem[j].base,mem[j].size,mem[j].state);
	}
	printk("******************************************************\n");
}