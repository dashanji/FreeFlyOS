#include "stdio.h"
#include "va_list.h"
#include "user_syscall.h"

void printf(char *fmt,...){
    user_va_list ap;
    
    char c;
    char *str;

    int dec_num;
    int hex_num;

    unsigned int unsigned_dec_num;
    unsigned int unsigned_hex_num;

    long long ll_hex_num;

    unsigned long long ull_hex_num;

    char bits=0;     //record the number's bits

    user_va_start(ap,fmt);

    while(*fmt){
        if(*fmt=='%'){
user_dis_num:    
            switch (*(++fmt))
            {
                case 'c':
                    c=user_va_arg(ap,char);
                    user_print_char(c);
                    break;
                case 's':
                    str=user_va_arg(ap,char *);
                    user_print_string(str);
                    break;
                case 'd':
                    dec_num=user_va_arg(ap,int);
                    if(bits){
                        user_print_num(dec_num,dec,bits,display_bits);
                    }
                    else{
                        user_print_num(dec_num,dec,ulonglong_max,display_num);
                    }
                    break;
                case 'X':
                case 'x':
                    hex_num=user_va_arg(ap,int);
                    if(bits){
                        user_print_num(hex_num,hex,bits,display_bits);
                    }
                    else{
                        user_print_num(hex_num,hex,ulonglong_max,display_num);
                    }
                    break;
                case 'l':
                case 'L':
                    ll_hex_num=user_va_arg(ap,long long);
                    if(bits){
                        user_print_num(ll_hex_num,hex,bits,display_bits);
                    }
                    else{
                        user_print_num(ll_hex_num,hex,ulonglong_max,display_num);
                    }
                    break;
                case 'u':
                    switch (*(++fmt))
                    {
                        case 'd':
                            unsigned_dec_num=user_va_arg(ap,unsigned int);
                            if(bits){
                                user_print_num(unsigned_dec_num,dec,bits,display_bits);
                            }
                            else{
                                user_print_num(unsigned_dec_num,dec,ulonglong_max,display_num);
                            }
                            break;
                        case 'X':
                        case 'x':
                            unsigned_hex_num=user_va_arg(ap,unsigned int);
                            if(bits){
                                user_print_num(unsigned_hex_num,hex,bits,display_bits);
                            }
                            else{
                                user_print_num(unsigned_hex_num,hex,ulonglong_max,display_num);
                            }
                            break;
                        case 'l':
                        case 'L':
                            ull_hex_num=user_va_arg(ap,unsigned long long);
                            if(bits){
                                user_print_num(ull_hex_num,hex,bits,display_bits);
                            }
                            else{
                                user_print_num(ull_hex_num,hex,ulonglong_max,display_num);
                                }
                            break;
                        default:
                            break;
                    }
                    break;
                //read the bits of number displayed,the range is 00-99
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    bits=(*fmt-'0')*10+(*(++fmt)-'0');
                    goto user_dis_num;
                    break;
                default:    
                    user_print_string("error format!Please correct it!");
                    break;
            }
            fmt++;
        }
        else{
            user_print_char(*fmt);
            fmt++;
        }
        bits=0;
    }
}