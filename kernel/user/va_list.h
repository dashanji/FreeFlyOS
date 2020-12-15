#ifndef _VA_LIST_H_
#define _VA_LIST_H_
/*可变参数宏定义*/
typedef char * user_va_list;     
//为了满足需要内存对齐的系统
#define _INTSIZEOF(n)  ((sizeof(n)+sizeof(int)-1)&~(sizeof(int) - 1) ) 

/*
*  va_start(ap,v):ap指向第一个变参的位置，即将第一个变参的地址赋予ap
*  va_arg(ap,t):获取变参的具体内容，t为变参的类型，如有多个参数，
*               则通过移动ap的指针来获得变参的地址，从而获得内容
*  va_end(ap):清空va_list，即结束变参的获取,防止野指针
*/
#define user_va_start(ap,v) ( ap = (user_va_list)&v + _INTSIZEOF(v) )     
#define user_va_arg(ap,t)   ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )   
#define user_va_end(ap)     ( ap = (user_va_list)0 )   
#endif