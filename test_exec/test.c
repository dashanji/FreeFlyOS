#include "../kernel/user/stdio.h"
#include "../kernel/user/user_syscall.h"
void main(){
    static char str[50]="Hello,I'm a exec test program!\n";
    printf(str);
    while(1);
}