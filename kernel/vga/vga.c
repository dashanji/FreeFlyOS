#include "vga.h"
#include "../asm/asm.h"
#include "../serial/serial.h"
#include "../keyboard/keyboard.h"

//the standard window is 80*25, max of cursor_x is 25, max of cursor_y is 80
static unsigned char cursor_x=0;
static unsigned char cursor_y=0;
//the start address of CGA is 0xB8000
static unsigned short *vga_memory=(unsigned short *)(0xB8000);
/* print cursor */ 
inline void print_cursor(unsigned char x,unsigned char y){
    unsigned short pos;
    //calculate the pos from (0,0)
    pos=x*80+y;

    //write register data to port 0x3d4,set register_cursor_x
    outb(VGA_register,register_cursor_x);
    //set cursor_x
    outb(VGA_data,(pos>>8)&0xFF);
    //write register data to port 0x3d4,set register_cursor_y
    outb(VGA_register,register_cursor_y);
    //set cursor_y
    outb(VGA_data,pos&0xFF);
}
/* use 'space' to clear the screen */
inline void clear()
{
    unsigned short attribute=((0<<4)&0xf0|(15&0xf))<<8;
    unsigned short space=' '|attribute;
    for(unsigned short i=0;i<25*80;i++){
        vga_memory[i]=space;
    }

    cursor_x=0;
    cursor_y=0;

    print_cursor(cursor_x,cursor_y);
}
/* print char */ 
inline void print_char(char c,color_type background,color_type foreground){
    unsigned short attribute=0,character=0,pos;
   
    if(cursor_x>=25){
        clear();
    }
        
    //calculate the pos from (0,0)
    pos=cursor_x*80+cursor_y;

    switch(c)
    {
        case '\n':
            cursor_y=0;
            cursor_x++;
            break;
        case '\t':
            cursor_y=(cursor_y+8)&~(8-1);
            break;
        default:
            //set the first byte of character
            character=c;
            //set the last byte of character
            attribute=((background<<4)&0xf0|(foreground&0xf))<<8;
            character=character|attribute;
            //send character to vga memory
            vga_memory[pos]=character;

            cursor_y++;
            if(cursor_y>=80)
            {
                cursor_y=0;
                cursor_x++;
            }
            break;
    }
    print_cursor(cursor_x,cursor_y);
}
//print string
inline void print_string(char *str,color_type background,color_type foreground){
    //the end of string is '\0' and its ascii is 0
    while(*str){
        print_char(*str++,background,foreground);
    }
}
/*                print num                                 
*  base-represent the displayed type is hex or dec: 
*      base=10-----hex base=16-----dec
*/
inline void print_num(unsigned long long num,char len,
color_type background,color_type foreground,unsigned char base){
    
    char str[20];
    char i,j,k;
    str[len]='\0';

    for(i=len-1;i>=0;i--){
        str[i]=do_div(num,base);
        if(base==10){
            str[i]=str[i]+'0';
        }  
        else if(base==16){
            str[i]=str[i]>9?str[i]-10+'A':str[i]+'0';
        }   
    }
    print_string(str,background,foreground);
}

/* 
*  cons_putc - print a single character @c to console devices 
*/
void cons_putc(int c) {
        lpt_putc(c);
        if(c){
            print_char(c,black,green);
        }
        serial_putc(c);
}

int cons_getc(void) {
    int c = 0;

    // poll for any pending input characters,
    // so that this function works even when interrupts are disabled
    // (e.g., when called from the kernel monitor).
    serial_intr();
    kbd_intr();

    // grab the next character from the input buffer.
    if (cons.rpos != cons.wpos) {
        c = cons.buf[cons.rpos ++];
        if (cons.rpos == CONSBUFSIZE) {
            cons.rpos = 0;
        }
        return c;
    }
    return 0;
}