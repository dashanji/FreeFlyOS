#include "timer.h"
#include "../asm/asm.h"
#include "../pic/pic.h"
#include "../interrupt/trap.h"

unsigned int volatile jiffies; //记录自系统启动以来产生的节拍总数

unsigned int volatile second; //根据节拍总数换算成秒数

void timer_init(unsigned int frequency){
        //Intel 8253/8254 PIT芯片 I/O端口地址范围是40h-43h，输入频率为1193180，frequency为每秒中断次数
        unsigned int divisor=1193180/frequency;
        //将8253/8254芯片设置为模式3
        outb(0x43,0x36);
        unsigned char low=divisor&0xff;
        unsigned char high=(divisor>>8)&0xff;
        outb(0x40,low);
        outb(0x40,high);
        jiffies=0;   //初始化节拍总数，防止更换页表时初始化值更改
        second=0; //初始化秒数
        pic_enable(IRQ_TIMER);
        //enable_irq(IRQ_TIMER,0);
}