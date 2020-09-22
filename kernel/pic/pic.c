#include "pic.h"

static unsigned short irq_mask = 0xFFFF & ~(1 << 2);
static char did_init = 0;

static void pic_setmask(unsigned short mask) {
    irq_mask = mask;
    unsigned char mask_low=mask&0xff;
    unsigned char mask_high=(mask>>8)&0xff;
    if (did_init) 
    {
        outb(0x21, mask_low);
        outb(0xA1, mask_high);
    }
}

void pic_enable(unsigned int irq) {
    pic_setmask(irq_mask & ~(1 << irq));
}

void pic_init(){
    did_init = 1;
    //屏蔽所有中断
    outb(0x21,0xFF);
    outb(0xA1,0xFF);

    // 重新映射 IRQ 表
    // 两片级联的 Intel 8259A 芯片
    // 主片端口 0x20 0x21
    // 从片端口 0xA0 0xA1
   
    //设置ICW1命令字，
    // 初始化主片、从片
    // 0001 0001
    outb(0x20, 0x11);
    outb(0xA0, 0x11);
    
    
    // 设置主片 IRQ 从 0x20(32) 号中断开始
    outb(0x21, 0x20);

    // 设置从片 IRQ 从 0x28(40) 号中断开始
    outb(0xA1, 0x28);
    
    // 设置主片 IR2 引脚连接从片
    outb(0x21, 0x04);

    // 告诉从片输出引脚和主片 IR2 号相连
    outb(0xA1, 0x02);
    
    //NB Automatic EOI mode doesn't tend to work on the slave.
    outb(0x21, 0x03);
    outb(0xA1, 0x03);
    
    // OCW3:  0ef01prs
    //   ef:  0x = NOP, 10 = clear specific mask, 11 = set specific mask
    //    p:  0 = no polling, 1 = polling mode
    //   rs:  0x = NOP, 10 = read IRR, 11 = read ISR
    outb(0x20, 0x68);    // clear specific mask
    outb(0xA0, 0x68);    // OCW3
    outb(0x20, 0x0a);    // read IRR by default
    outb(0xA0, 0x0a);    // OCW3
    
    if (irq_mask != 0xFFFF) 
        pic_setmask(irq_mask);
    
}