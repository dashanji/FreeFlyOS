#ifndef _ASM_H_
#define _ASM_H_ 

/*
** 32位机下只能使用被除数最大为32位的除法，为了支持64位被除数的除法，构建do_div宏
** 支持任意除数除操作。n 被除数；base 除数。结果 n 为商，函数返回值为余数。
*/
#define do_div(n, base) ({                                          \
            unsigned long __upper, __low, __high, __mod, __base;    \
            __base = (base);                                        \
            asm ("" : "=a" (__low), "=d" (__high) : "A" (n));       \
            __upper = __high;                                       \
            if (__high != 0) {                                      \
                __upper = __high % __base;                          \
                __high = __high / __base;                           \
            }                                                       \
            asm ("divl %2" : "=a" (__low), "=d" (__mod)             \
                : "rm" (__base), "0" (__low), "1" (__upper));       \
            asm ("" : "=A" (n) : "a" (__low), "d" (__high));        \
            __mod;                                                  \
        })

//read a byte from port
unsigned char inb(unsigned short port);
//read a word from port
unsigned short inw(unsigned short port);
//read two word from port
unsigned int inl(unsigned short port);
//write a byte to port
void outb(unsigned short port,unsigned char data);
//write a word to port
void outw(unsigned short port, unsigned short data);
//write two word to port
void outl(unsigned short port, unsigned int data);
void *memset(void *s, char c, unsigned int n); 
void *memcpy(void *dst, const void *src, unsigned int n);
unsigned int strlen(const char *s);
int strcmp(const char *s1, const char *s2);
char* strrchr(const char* str, const unsigned char ch);
char* strcat(char* dst_, const char* src_);
char* strcpy(char* dst_, const char* src_);
void CPU_INVLPG(unsigned int addr);
void lcr3(unsigned int cr3);
int memcmp(const void* a_, const void* b_, unsigned int size) ;
void nop(void);
#endif