#include "user_main.h"
#include "stdio.h"
#include "shell.h"
// 定义一个延时xus毫秒的延时函数
static void delay(unsigned int xus) // xus代表需要延时的微秒数
{
    unsigned int x,y;
    for(x=xus;x>0;x--)
        for(y=110;y>0;y--);
}
void test_fork(){
    unsigned int ret_pid=fork();
    printf("my pid is %d",ret_pid);
    while(1);
}
void user_main(){
    char str[50]="Hello,I'm a User Function!Nice to meet you!\n";
    //printf(str);
    //test_fork();
    my_shell();
    /*while(1)
    {
        printf("user\n");
        delay(1000000);
    }*/
    
}