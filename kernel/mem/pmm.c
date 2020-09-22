#include  "pmm.h"
#include  "../vga/vga.h"

/*
*       打印机器内存信息
*/
void print_mem(){
	int j=0;
	struct memory_seg *mem=(struct memory_seg *)mem_seg_start;
	print_string("*****************physical memory info*****************\n",black,green);
	print_string("           base           size          type          \n",black,green);
	for(unsigned int i=*(unsigned int *)mem_seg_num;i>0;i--,j++){
		print_char('\t',black,green);
		print_num(mem[j].base,10,black,green,16);
		print_char('\t',black,green);
		print_num(mem[j].size,10,black,green,16);
		print_char('\t',black,green);
		print_num(mem[j].state,5,black,green,16);
		print_char('\n',black,green);
	}
	print_string("******************************************************\n",black,green);
}