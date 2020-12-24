#include "../kernel/user/stdio.h"
#include "../kernel/user/user_syscall.h"
#define NULL ((void *)0)
void main(int argc,char **argv){
    printf("hello nice to meet you\n");
    while(1);
}