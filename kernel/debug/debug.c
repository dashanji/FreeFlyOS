#include "debug.h"
#include "monitor.h"
#include "../vga/vga.h"
#include "../interrupt/trap.h"

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
/* *
 * __panic - __panic is called on unresolvable fatal errors. it prints
 * "panic: 'message'", and then enters the kernel monitor.
 * */
void
__PANIC(const char *file, int line, const char *func, const char *condition) {

    // 关中断
    intr_disable();

    // 打印错误信息
    printk("kernel panic at %s:%d:\n    ", file, line);
    printk("In %s , the condition(%s) is wrong\n",func,condition);
    
    //printk("stack trackback:\n");
    //print_seg();
    
    while (1) {
        monitor();
    }
}
