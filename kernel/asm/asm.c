#include "asm.h"

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

void CPU_INVLPG(unsigned int addr) {
    __asm__ volatile("invlpg (%0)" : : "r"(addr) : "memory");
    return;
}
