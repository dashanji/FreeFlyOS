#ifndef _BITMAP_H_
#define _BITMAP_H_
struct bitmap {
   unsigned int btmp_bytes_len;
/* 在遍历位图时,整体上以字节为单位,细节上是以位为单位,所以此处位图的指针必须是单字节 */
   unsigned char* bits;
};
#endif