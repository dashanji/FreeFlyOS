#ifndef _DEFS_H_
#define _DEFS_H_


/* Return the offset of 'member' relative to the beginning of a struct type */
#define offsetof(type, member)                                      \
    ((unsigned int)(&((type *)0)->member))

/* *
 * to_struct - get the struct from a ptr
 * @ptr:    a struct pointer of member
 * @type:   the type of the struct this is embedded in
 * @member: the name of the member within the struct
 * */
//char * =unsigned int
#define to_struct(ptr, type, member)                               \
    ((type *)((char *)(ptr) - offsetof(type, member)))

//将一个字节某位设置为flag
#define set_char_bit(c,offset,flag) c&(flag<<offset|0xFF) 

//向上舍入，mask为掩码
#define round_up_to(x,mask) (((unsigned int)x+(unsigned int)mask-1)&(unsigned int)mask)
//向下舍入，mask为掩码
#define round_down_to(x,mask) (((unsigned int)x-(unsigned int)mask+1)&(unsigned int)mask)
#endif