/* 
**   链接脚本
*/
OUTPUT_FORMAT(elf32-i386)
OUTPUT_ARCH(i386)
ENTRY(start)
/*
*   ld有多种方法设置进程入口地址, 按以下顺序: (编号越前, 优先级越高)
*           1, ld命令行的-e选项
*           2, 连接脚本的ENTRY(SYMBOL)命令
*           3, 如果定义了start 符号, 使用start符号值
*           4, 如果存在 .text section , 使用.text section的第一字节的位置值
*           5, 使用值0
*
*
*/

SECTIONS 
{
    /* 将定位器符号置为0x7c00 */
    . = 0x80000000;

    /*
    将所有(*符号代表任意输入文件)输入文件的.text section合并
     成一个.text section, 该section的地址紧接.start节.
     bootmain.o中的text作为一个text节
    */
    .text : { *(.text) }

    /*
    将所有(*符号代表任意输入文件)输入文件的.data section合并
     成一个.data section, 该section的地址紧接.text节.
     bootmain.o中的data作为一个data节
    */
    .data : { *(.data .rodata) }

    .bss    : { *(.bss) }
    
    /DISCARD/ : { *(.eh_*) }
}