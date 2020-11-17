#ifndef _MONITOR_H_
#define _MONITOR_H_

//指令
struct instr{
    const char *name;  //指令名
    const char *desc;  //指令描述
    int (*func)(); //函数指针，指令处理函数
};

void monitor();
void run(char *buf);
void instr_hello();
void instr_help();
void instr_game();

#endif