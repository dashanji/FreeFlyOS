/* 
**   链接脚本
*/
OUTPUT_FORMAT(elf32-i386)
OUTPUT_ARCH(i386)
ENTRY(init)
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
    . = 0x9000;
    .apstart.text :   
    {
        ap/CMakeFiles/ap.dir/start_ap.S.o(.text)
    }
    .apstart.data :  
    {
        ap/CMakeFiles/ap.dir/start_ap.S.o(.data)
        
    }
    .apstart.rodata :
    {
        ap/CMakeFiles/ap.dir/start_ap.S.o(.rodata)
    }
    .apstart.bss :
    {
        ap/CMakeFiles/ap.dir/start_ap.S.o(.bss)
    }
    /* VMA 为顺序排列，LMA 按照 AT(addr) 排列 ,若未指定AT则LMA=VMA */
    /* 指定init部分从虚拟地址0x100000(1MB)处开始 */
    /* 物理地址也从0x100000(1MB)处开始 */
    . = 0x100000;

    .init.text : {
        *(.init.text)
    }
    .init.data : {
        *(.init.data)
        *(.init.bss)
    }
    PROVIDE(init_end = .);

    /* 指定user从虚拟地址0x40000000处开始 */
    /* 物理地址也从0x40000000处开始*/
     . = 0x40000000; 
    .user.text :   
    {
        user/CMakeFiles/user.dir/*.o(.text)
    }
    .user.data :  
    {
        user/CMakeFiles/user.dir/*.o(.data)
        
    }
    .user.rodata :
    {
        user/CMakeFiles/user.dir/*.o(.rodata)
    }
    .user.bss :
    {
        user/CMakeFiles/user.dir/*.o(.bss)
    }

    PROVIDE(user_end = .);
    /* 指定内核从虚拟地址0xC0000000+0x01000000(16MB)处开始 */
    /* 物理地址从0x01000000(16MB)处开始，通过AT命令指定 */
    . = 0xC1000000;

    .text :   AT(ADDR(.text) - 0xC0000000) 
    { 
        *(.text .stub .text.* .gnu.linkonce.t.*)
    }
    PROVIDE(kernel_rodata = .);
    .rodata :  AT(ADDR(.rodata) - 0xC0000000) 
    {
        *(.rodata .rodata.* .gnu.linkonce.r.*)
    }

    /* Adjust the address for the data segment to the next page */
     . = ALIGN(0x1000); 

    PROVIDE(kernel_data = .);
    /* The data segment */
    .data :  AT(ADDR(.data) - 0xC0000000) 
    {
        *(.data)
    }

    PROVIDE(kernel_bss = .);

    .bss :   AT(ADDR(.bss) - 0xC0000000) 
    {
        *(.bss)
    }


    PROVIDE(kernel_end = .);

    /DISCARD/ : {
        *(.eh_frame .note.GNU-stack)
    }
}