#include "monitor.h"
#include "readline.h"
#include "../vga/vga.h"
#include "../interrupt/trap.h"
#include "../asm/asm.h"
extern unsigned int shift;

/* 
** 初始化指令数组 
*/
struct instr instr_list[]={
    {"hello","The instruction is to welcome you!",instr_hello},
    {"help","You can use the following instructions!",instr_help},
    {"game","Play a simple game---Guess number!",instr_game}
};

#define instr_num (sizeof(instr_list)/sizeof(struct instr))

/* 
** 监视器：用于监控用户输入字符 
*/
void monitor(){
    char *buf;
    shift=0;
    while(1){
        if((buf=(readline("K<")))!=NULL){
            run(buf);
        }
    }
}
/* 
** 解析器：用于解析用户输入字符 
*/
void run(char *buf){
    for(int i=0;i<instr_num;i++){
        if(!strcmp(buf,instr_list[i].name)){
            instr_list[i].func();
        }
    }
    
}

/*
** hello指令
*/
void instr_hello(){
    printk("%s\n",instr_list[0].desc);
    printk("Nice to meet you!I'm the writer of FreeFlyOS!\n");
}

/*
** help指令
*/
void instr_help(){
    printk("%s\n",instr_list[1].desc);
    printk("Instruction ---- Describition\n");
    for(int i=0;i<instr_num;i++){
        printk("%s --- %s\n",instr_list[i].name,instr_list[i].desc);
    }
}

/*
** game指令
*/
void instr_game(){
    char *buf;
    int answer=28;
    int num;
    printk("%s\n",instr_list[2].desc);
    while(1){
        num=0;
        if((buf=(readline("Now please input a number:")))!=NULL){
            while(*buf!='\0'){
                num=num*10+(*buf-'0');
                buf++;
            }
            if(num==answer){
                printk("Congratulations to you!Your answer is correct\n");
                break;
            }
            else if(num<answer){
                printk("Your answer is smaller\n");
            }
            else{
                printk("Your answer is bigger\n");
            }
        } 
    }
}