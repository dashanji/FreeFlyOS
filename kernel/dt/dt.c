#include "dt.h"
#include "../asm/asm.h"

/* *
 * Global Descriptor Table:
 *
 * The kernel and user segments are identical (except for the DPL). To load
 * the %ss register, the CPL must equal the DPL. Thus, we must duplicate the
 * segments for the user and the kernel. Defined as follows:
 *   - 0x0 :  unused (always faults -- for trapping NULL far pointers)
 *   - 0x8 :  kernel code segment
 *   - 0x10:  kernel data segment
 *   - 0x18:  user code segment
 *   - 0x20:  user data segment
 *   - 0x28:  defined for tss, initialized in gdt_init
 * */
static struct segdesc gdt[] = {
    SEG_NULL, //null
    SEG(STA_X | STA_R, 0x0, 0xFFFFFFFF, DPL_KERNEL),  //kernel text
    SEG(STA_W, 0x0, 0xFFFFFFFF, DPL_KERNEL),   //kernel data
    SEG(STA_X | STA_R, 0x0, 0xFFFFFFFF, DPL_USER),  //user text
    SEG(STA_W, 0x0, 0xFFFFFFFF, DPL_USER),   //user data
    SEG_NULL,  //tss
};

/* *
 * Interrupt descriptor table:
 *
 * Must be built at run time because shifted function addresses can't
 * be represented in relocation records.
 * */
static struct gatedesc idt[256] = {{0}};

//set gdt's info
static struct dtdesc gdtinfo={
    sizeof(gdt)-1,(unsigned int)gdt
};

//set idt's info
static struct dtdesc idtinfo = {
    sizeof(idt) - 1, (unsigned int)idt
};

/* *
 * lgdt - load the global descriptor table register and reset the
 * data/code segement registers for kernel.
 * */
static inline void lgdt(struct dtdesc *dt){
    asm volatile ("lgdt (%0)" :: "r" (dt));
    asm volatile ("movw %%ax, %%gs" :: "a" (USER_DS));
    asm volatile ("movw %%ax, %%fs" :: "a" (USER_DS));
    asm volatile ("movw %%ax, %%es" :: "a" (KERNEL_DS));
    asm volatile ("movw %%ax, %%ds" :: "a" (KERNEL_DS));
    asm volatile ("movw %%ax, %%ss" :: "a" (KERNEL_DS));
    // reload cs
    asm volatile ("ljmp %0, $1f\n 1:\n" :: "i" (KERNEL_CS));
}

/* 加载全局描述符表 */
void gdt_init(){
    lgdt(&gdtinfo);
}

/* 加载中断描述符表 */
static inline void lidt(struct dtdesc *dt) {
    asm volatile ("lidt (%0)" :: "r" (dt) : "memory");
}

/* *
 *  
 *  将中断向量号和中断向量进行绑定    
 *        加载中断描述符表 
 * 
 * */
void idt_init(){
    extern unsigned int __vectors[];
    int i;
    for (i = 0; i < sizeof(idt) / sizeof(struct gatedesc); i ++) {
        SETGATE(idt[i], 0, GD_KTEXT, __vectors[i], DPL_KERNEL);
    }
    SETGATE(idt[T_SYSCALL], 1, GD_KTEXT, __vectors[T_SYSCALL], DPL_USER);
    lidt(&idtinfo);
}