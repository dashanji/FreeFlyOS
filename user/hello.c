#include "../vga/vga.h"
#include "syscall.h"

int user_main(){
    printk("Hello world!\n");
    printk("I am process %d\n",getpid());
    printk("Bye bye!\n");
    return 0;
}