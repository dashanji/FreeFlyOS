#include "timer.h"
#include "../asm/asm.h"
#include "../pic/pic.h"
#include "../interrupt/trap.h"

void timer_init(unsigned int frequency){
        //Intel 8253/8254 PIT芯片 I/O端口地址范围是40h-43h，输入频率为1193180，frequency为每秒中断次数
        unsigned int divisor=1193180/frequency;
        //将8253/8254芯片设置为模式3
        outb(0x43,0x36);
        unsigned char low=divisor&0xff;
        unsigned char high=(divisor>>8)&0xff;
        outb(0x40,low);
        outb(0x40,high);
        pic_enable(IRQ_TIMER);
}