#include "asm.h"
#define NULL (void *)0
/*
*   inb(port):从端口port读出一个字节数据并返回
*/
inline unsigned char inb(unsigned short port) {
    unsigned char data;
    asm volatile ("inb %1, %0" : "=a" (data) : "d" (port));
    return data;
}

/*
*   inw(port):从端口port读出两个字节数据并返回
*/
inline unsigned short inw(unsigned short port) {
    unsigned short data;
    asm volatile ("inw %1, %0" : "=a" (data) : "d" (port));
    return data;
}

/*
*   outb(port，data):将一个字节数据data写入端口port中
*/
inline void outb(unsigned short port, unsigned char data) {
    asm volatile ("outb %0, %1" :: "a" (data), "d" (port));
}

/*
*   outw(port,data):将两个字节数据data写入端口port中
*/
inline void outw(unsigned short port, unsigned short data) {
    asm volatile ("outw %0, %1" :: "a" (data), "d" (port));
}


static inline void *
__memset(void *s, char c, unsigned int n) {
    int d0, d1;
    asm volatile (
        "rep; stosb;"
        : "=&c" (d0), "=&D" (d1)
        : "0" (n), "a" (c), "1" (s)
        : "memory");
    return s;
}

/* *
 * memset - sets the first @n bytes of the memory area pointed by @s
 * to the specified value @c.
 * @s:      pointer the the memory area to fill
 * @c:      value to set
 * @n:      number of bytes to be set to the value
 *
 * The memset() function returns @s.
 * */
void *
memset(void *s, char c, unsigned int n) {
    return __memset(s, c, n);
}

static inline void *
__memcpy(void *dst, const void *src, unsigned int n) {
    int d0, d1, d2;
    asm volatile (
        "rep; movsl;"
        "movl %4, %%ecx;"
        "andl $3, %%ecx;"
        "jz 1f;"
        "rep; movsb;"
        "1:"
        : "=&c" (d0), "=&D" (d1), "=&S" (d2)
        : "0" (n / 4), "g" (n), "1" (dst), "2" (src)
        : "memory");
    return dst;
}

/* *
 * memcpy - copies the value of @n bytes from the location pointed by @src to
 * the memory area pointed by @dst.
 * @dst     pointer to the destination array where the content is to be copied
 * @src     pointer to the source of data to by copied
 * @n:      number of bytes to copy
 *
 * The memcpy() returns @dst.
 *
 * Note that, the function does not check any terminating null character in @src,
 * it always copies exactly @n bytes. To avoid overflows, the size of arrays pointed
 * by both @src and @dst, should be at least @n bytes, and should not overlap
 * (for overlapping memory area, memmove is a safer approach).
 * */
void *
memcpy(void *dst, const void *src, unsigned int n) {
    return __memcpy(dst, src, n);
}

/* *
 * strlen - calculate the length of the string @s, not including
 * the terminating '\0' character.
 * @s:      the input string
 *
 * The strlen() function returns the length of string @s.
 * */
unsigned int
strlen(const char *s) {
    unsigned int cnt = 0;
    while (*s ++ != '\0') {
        cnt ++;
    }
    return cnt;
}

static inline int
__strcmp(const char *s1, const char *s2) {
    int d0, d1, ret;
    asm volatile (
        "1: lodsb;"
        "scasb;"
        "jne 2f;"
        "testb %%al, %%al;"
        "jne 1b;"
        "xorl %%eax, %%eax;"
        "jmp 3f;"
        "2: sbbl %%eax, %%eax;"
        "orb $1, %%al;"
        "3:"
        : "=a" (ret), "=&S" (d0), "=&D" (d1)
        : "1" (s1), "2" (s2)
        : "memory");
    return ret;
}

/* *
 * strcmp - compares the string @s1 and @s2
 * @s1:     string to be compared
 * @s2:     string to be compared
 *
 * This function starts comparing the first character of each string. If
 * they are equal to each other, it continues with the following pairs until
 * the characters differ or until a terminanting null-character is reached.
 *
 * Returns an integral value indicating the relationship between the strings:
 * - A zero value indicates that both strings are equal;
 * - A value greater than zero indicates that the first character that does
 *   not match has a greater value in @s1 than in @s2;
 * - And a value less than zero indicates the opposite.
 * */
int
strcmp(const char *s1, const char *s2) {
    return __strcmp(s1, s2);
}
/* 从后往前查找字符串str中首次出现字符ch的地址(不是下标,是地址) */
char* strrchr(const char* str, const unsigned char ch) {
   const char* last_char = NULL;
   /* 从头到尾遍历一次,若存在ch字符,last_char总是该字符最后一次出现在串中的地址(不是下标,是地址)*/
   while (*str != 0) {
      if (*str == ch) {
	 last_char = str;
      }
      str++;
   }
   return (char*)last_char;
}
/* 将字符串src_拼接到dst_后,将回拼接的串地址 */
char* strcat(char* dst_, const char* src_) {
   char* str = dst_;
   while (*str++);
   --str;      // 别看错了，--str是独立的一句，并不是while的循环体
   while((*str++ = *src_++));	 // 当*str被赋值为0时,此时表达式不成立,正好添加了字符串结尾的0.
   return dst_;
}
/* 将字符串从src_复制到dst_ */
char* strcpy(char* dst_, const char* src_) {
   char* r = dst_;		       // 用来返回目的字符串起始地址
   while((*dst_++ = *src_++));
   return r;
}
void CPU_INVLPG(unsigned int addr) {
    __asm__ volatile("invlpg (%0)" : : "r"(addr) : "memory");
    return;
}
void
lcr3(unsigned int cr3) {
    asm volatile ("mov %0, %%cr3" :: "r" (cr3) : "memory");
}