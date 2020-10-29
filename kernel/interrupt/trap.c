#include "trap.h"
#include "../vga/vga.h"
#include "../timer/timer.h"
#include "../debug/debug.h"

unsigned int tick=0;    //时钟中断次数

static const char *IA32flags[] = {
    "CF", NULL, "PF", NULL, "AF", NULL, "ZF", "SF",
    "TF", "IF", "DF", "OF", NULL, NULL, "NT", NULL,
    "RF", "VM", "AC", "VIF", "VIP", "ID", NULL, NULL,
};
void print_regs(struct pushregs *regs) {
    printk("  edi  0x%08ux\n", regs->reg_edi);
    printk("  esi  0x%08ux\n", regs->reg_esi);
    printk("  ebp  0x%08ux\n", regs->reg_ebp);
    printk("  oesp 0x%08ux\n", regs->reg_oesp);
    printk("  ebx  0x%08ux\n", regs->reg_ebx);
    printk("  edx  0x%08ux\n", regs->reg_edx);
    printk("  ecx  0x%08ux\n", regs->reg_ecx);
    printk("  eax  0x%08ux\n", regs->reg_eax);
}
void print_trapframe(struct trapframe *tf) {
   // printk("trapframe at %p\n", tf);
    print_regs(&tf->tf_regs);
    printk("  ds   0x----%04ux\n", tf->tf_ds);
    printk("  es   0x----%04ux\n", tf->tf_es);
    printk("  fs   0x----%04ux\n", tf->tf_fs);
    printk("  gs   0x----%04ux\n", tf->tf_gs);
    //printk("  trap 0x%08ux %s\n", tf->tf_trapno, trapname(tf->tf_trapno));
    printk("  err  0x%08ux\n", tf->tf_err);
    printk("  eip  0x%08ux\n", tf->tf_eip);
    printk("  cs   0x----%04ux\n", tf->tf_cs);
    printk("  flag 0x%08ux ", tf->tf_eflags);

    int i, j;
    for (i = 0, j = 1; i < sizeof(IA32flags) / sizeof(IA32flags[0]); i ++, j <<= 1) {
        if ((tf->tf_eflags & j) && IA32flags[i] != NULL) {
            printk("%s,", IA32flags[i]);
        }
    }
    printk("IOPL=%d\n", (tf->tf_eflags & FL_IOPL_MASK) >> 12);

   // if (!trap_in_kernel(tf)) {
   //     printk("  esp  0x%08x\n", tf->tf_esp);
   //     printk("  ss   0x----%04x\n", tf->tf_ss);
   // }
}

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
        case T_PGFLT:
            //print_trapframe(tf);
            printk("queye\n");
            break;
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
