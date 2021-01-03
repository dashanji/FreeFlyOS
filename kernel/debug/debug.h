#ifndef _DEBUG_H_
#define _DEBUG_H_

#define PANIC(...)                                      \
    __PANIC(__FILE__ , __LINE__ , __func__ , __VA_ARGS__)

#define ASSERT(x)                                   \
    if (!(x)) {                                     \
            PANIC(#x);                              \ 
    }                                               \
    else{}


void print_seg();
void __attribute__((noreturn)) 
__PANIC(const char *file, int line, const char *func, const char *condition);

#endif