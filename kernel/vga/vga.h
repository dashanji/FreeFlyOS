#ifndef  _VGA_H_
#define _VGA_H_

//the max of unsigned char is 255 in dec(3 character)
#define uchar_max 3
//the max of unsigned short is 65535 in dec(5 character)
#define ushort_max 5
//the max of unsigned int is 4294967295 in dec(10 character)
#define uint_max 10
//the max of unsigned long long is 18446744073709551615 in dec(20 character)
#define ulonglong_max 20


#define dec 10  //Decimal
#define hex 16  //Hexadecimal  

#define display_bits 1   //display x bits number     ex. 100->00100
#define display_num  0   //display only number bits  ex. 100->100  

#define VGA_register 0x3d4
#define VGA_data 0x3d5
#define register_cursor_x 14
#define register_cursor_y 15

/*可变参数宏定义*/
typedef char * va_list;     
//为了满足需要内存对齐的系统
#define _INTSIZEOF(n)  ((sizeof(n)+sizeof(int)-1)&~(sizeof(int) - 1) ) 

/*
*  va_start(ap,v):ap指向第一个变参的位置，即将第一个变参的地址赋予ap
*  va_arg(ap,t):获取变参的具体内容，t为变参的类型，如有多个参数，
*               则通过移动ap的指针来获得变参的地址，从而获得内容
*  va_end(ap):清空va_list，即结束变参的获取,防止野指针
*/
#define va_start(ap,v) ( ap = (va_list)&v + _INTSIZEOF(v) )     
#define va_arg(ap,t)   ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )   
#define va_end(ap)     ( ap = (va_list)0 )   

/* 系统默认的背景色和字体颜色，可根据喜好更改 */
#define default_background black
#define default_foreground green

typedef enum color {
    black = 0,
    blue = 1,
    green = 2,
    cyan = 3,
    red = 4,
    magenta = 5,
    brown = 6,
    light_grey = 7,
    dark_grey = 8,
    light_blue = 9,
    light_green = 10,
    light_cyan = 11,
    light_red = 12,
    light_magenta = 13,
    light_brown  = 14,   // yellow
    white = 15
}color_type;

void print_cursor(unsigned char x,unsigned char y);
void print_char(char c,color_type background,color_type foreground);
void clear();
void print_string(char *str,color_type background,color_type foreground);
void print_num(unsigned long long num,color_type background,color_type foreground,unsigned char base,char len,int flag);
void printk(char *fmt,...);
void cons_putc(int c);
int cons_getc(void);

#endif