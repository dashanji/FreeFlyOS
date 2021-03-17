#include "test.hpp"
extern "C"{
    #include "../kernel/user/stdio.h"
    #include "../kernel/user/user_syscall.h"
}
int main()
{

int nArr[5] = {1,2,3,4,5};
auto s=2;
A aa;
aa.a=10;
aa.setb(20);
printf("a:%d",aa.a);
printf("b:%d",aa.getb());
for(int &x : nArr)
{
    x *=2;   //数组中每个元素倍乘
    printf("%d ",x);
}
printf("sizeof(s):%d",sizeof(s));
    while(1);
	return 0;
}