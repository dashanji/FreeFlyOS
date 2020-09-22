#include "asm/asm.h"
#include "dt/dt.h"
#include "interrupt/trap.h"
#include "timer/timer.h"
#include "pic/pic.h"
#include "vga/vga.h"
#include "mem/pmm.h"
#include "debug/debug.h"

void main(void)
{
	clear();
	
    print_string("FreeFlyOS is running\n",black,green);
	print_mem();
    print_seg();
    
    gdt_init();
    print_string("After gdt init\n",black,green);
    print_seg();

    pic_init();
    idt_init();
    timer_init(200);

    enable_interupt();

    serial_init();
    kbd_init();

    while(1);
}
