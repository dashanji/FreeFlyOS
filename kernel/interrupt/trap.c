#include "trap.h"
#include "../vga/vga.h"
#include "../timer/timer.h"


unsigned int tick=0;    //时钟中断次数

/* *
 * trap - handles or dispatches an exception/interrupt. if and when trap() returns,
 * the code in kern/trap/trapentry.S restores the old CPU state saved in the
 * trapframe and then uses the iret instruction to return from the exception.
 * */
/* trap_dispatch - dispatch based on what type of trap occurred */
static void trap_dispatch(struct trapframe *tf) 
{
    char c;
    switch (tf->tf_trapno) {
        case IRQ_OFFSET + IRQ_TIMER:
            tick++;
            if (tick % 100 == 0){
                //printk("%d\n",tick);
            }
            break;
        case IRQ_OFFSET + IRQ_COM1:
             c = cons_getc();
             cons_putc(c);
             break;
        case IRQ_OFFSET + IRQ_KBD:
            c = cons_getc();
            //printk("%c",c);
            cons_putc(c);
            break;
        default:
            // in kernel, it must be a mistake
            printk("unexpected trap in kernel!\n");
    }
}

void trap(struct trapframe *tf) {
    trap_dispatch(tf);
}

void disable_interupt(){
    // 关闭中断
    asm volatile ("cli");
}

void enable_interupt(){
    // 开启中断
    asm volatile ("sti");
}
