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
    print_string("cs=",black,green);
    print_num(cs,4,black,green,16);
    print_char('\n',black,green);
    print_string("ds=",black,green);
    print_num(ds,4,black,green,16);
    print_char('\n',black,green);
    print_string("gs=",black,green);
    print_num(gs,4,black,green,16);
    print_char('\n',black,green);
    print_string("es=",black,green);
    print_num(es,4,black,green,16);
    print_char('\n',black,green);
    print_string("fs=",black,green);
    print_num(fs,4,black,green,16);
    print_char('\n',black,green);
    print_string("ss=",black,green);
    print_num(ss,4,black,green,16);
    print_char('\n',black,green);
    //print_string("esp=",black,green);
    //print_num(esp,4,black,green,16);
    //print_char('\n',black,green);
}