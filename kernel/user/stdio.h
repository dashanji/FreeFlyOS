#ifndef _STDIO_H_
#define _STDIO_H_
//the max of unsigned char is 255 in dec(3 character)
#define uchar_max 3
//the max of unsigned short is 65535 in dec(5 character)
#define ushort_max 5
//the max of unsigned int is 4294967295 in dec(10 character)
#define int_max 10
//the max of unsigned long long is 18446744073709551615 in dec(20 character)
#define ulonglong_max 20


#define dec 10  //Decimal
#define hex 16  //Hexadecimal  

#define display_bits 1   //display x bits number     ex. 100->00100
#define display_num  0   //display only number bits  ex. 100->100  
//__attribute__( (section(".user.text") ) )  
void printf(char *fmt,...);
#endif