#include "debug.h"
#include "../vga/vga.h"
/*
*   打印段寄存器信息
*/
void print_seg()
{
    unsigned short cs,ds,gs,es,fs,ss;
    asm volatile("movw %%cs, %0;"
                 "movw %%ds, %1;" 
                 "movw %%gs, %2;" 
                 "movw %%es, %3;"
                 "movw %%fs, %4;"
                 "movw %%ss, %5;": "=m"(cs),"=m"(ds),"=m"(gs),"=m"(es),"=m"(fs),"=m"(ss)); 
    printk("cs=%04x\n",cs);
    printk("ds=%04x\n",ds);
    printk("gs=%04x\n",gs);
    printk("es=%04x\n",es);
    printk("fs=%04x\n",fs);
    printk("ss=%04x\n",ss);
}