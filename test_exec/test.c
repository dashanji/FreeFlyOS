#include "../kernel/user/stdio.h"
#include "../kernel/user/user_syscall.h"
#define NULL ((void *)0)
void main(int argc,char **argv){
    int arg_idx = 0; 
    while(arg_idx < argc) { 
        printf("argv[%d] is %s\n", arg_idx, argv[arg_idx]); 
        arg_idx++; 
    }
    printf("Nice to meet you! It's all! See You! Goodbye!\n");
    while(1);
}