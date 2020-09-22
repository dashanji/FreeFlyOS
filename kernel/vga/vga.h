#ifndef  _VGA_H_
#define _VGA_H_

//同步
#define local_intr_save(x)      do { x = __intr_save(); } while (0)
#define local_intr_restore(x)   __intr_restore(x);

//the max of unsigned char is 255 in dec(3 character)
#define uchar_max 3
//the max of unsigned short is 65535 in dec(5 character)
#define ushort_max 5
//the max of unsigned int is 4294967295 in dec(10 character)
#define uint_max 10
//the max of unsigned long long is 18446744073709551615 in dec(20 character)
#define ulonglong_max 20

#define VGA_register 0x3d4
#define VGA_data 0x3d5
#define register_cursor_x 14
#define register_cursor_y 15

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
void print_num(unsigned long long num,char len,color_type background,color_type foreground,unsigned char base);
void cons_putc(int c);
int cons_getc(void);

#endif