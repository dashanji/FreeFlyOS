#ifndef _MEMLAYOUT_H_
#define _MEMLAYOUT_H_

#define USER_START 0x40000000
#define KERNEL_START 0xC1000000
#define KERNEL_STACK_START 0xF8000000 //0xC1800000
#define KERNEL_STACK_SIZE 0x2000   //8KB

#define EXEC_START 0x60000000


//物理地址到线性地址的转换
#define PA_LA(addr) (unsigned int)(addr+(unsigned int)0xC0000000) 
//线性地址到物理地址的转换
#define LA_PA(addr) (unsigned int)(addr-(unsigned int)0xC0000000)

/* *                        PMM IN QEMU ( 2 GB ) Before PMM MANAGEMENT
 * Phsical memory layout:                                        
 *    This side means we can                                         This side means we can't 
 *       see it in qemu                                         see it in qemu,it's only in real memory                                                       
 *
 *     4G ------------------> +---------------------------------+ 0xFFFFFFFF
 *                            |                                 |
 *  DISPLAYED IN QEMU------>  |          Invalid Memory         |
 *                            |                                 |
 *                            +---------------------------------+ 0xFFFC0000
 *                            |                                 |
 *                            :                                 :
 *                            |         ~~~~~~~~~~~~~~~~        |    <------ IN Phsical Memory
 *                            :                                 :
 *                            |                                 |
 *                            +---------------------------------+ 0x80000000
 *                            |                                 |
 *  DISPLAYED IN QEMU------>  |          Invalid Memory         |
 *                            |                                 |
 *                            +---------------------------------+ 0x7FFE0000
 *                            |                                 |
 *  DISPLAYED IN QEMU------>  |           Valid Memory          |
 *                            |                                 |
 *                            +---------------------------------+ 0x00100000
 *                            |        Invalid Memory (*)       |
 *  DISPLAYED IN QEMU------>  |  - - - - - - - - - - - - - - -  |
 *                            |         BIOS Boot Block         |
 *                            +---------------------------------+ 0x000F0000
 *                            |        Invalid Memory (*)       |
 *                            |  - - - - - - - - - - - - - - -  |    <------ IN Phsical Memory
 *                            |    BIOS Routine & Card BIOS     |
 *                            +---------------------------------+ 0x000C0000
 *                            |        Invalid Memory (*)       |
 *                            |  - - - - - - - - - - - - - - -  |    <------ IN Phsical Memory
 *                            |CGA/EGA+ Chroma text video buffer|
 *                            +---------------------------------+ 0x000B8000
 *                            |        Invalid Memory (*)       |
 *                            |  - - - - - - - - - - - - - - -  |    <------ IN Phsical Memory
 *                            |      Mono text video buffer     |
 *                            +---------------------------------+ 0x000B0000
 *                            |        Invalid Memory (*)       | 
 *                            |  - - - - - - - - - - - - - - -  |    <------ IN Phsical Memory
 *                            | EGA/VGA/XGA/XVGA Graphic Video  |
 *                            |             Buffer              |
 *                            +---------------------------------+ 0x000A0000
 *                            |        Invalid Memory (*)       |
 *  DISPLAYED IN QEMU------>  |  - - - - - - - - - - - - - - -  |
 *                            |      Extended BIOS Data Area    |
 *                            +---------------------------------+ 0x0009FC00
 *  DISPLAYED IN QEMU------>  |          Valid Memory           | 
 *     0 -------------------> +---------------------------------+ 0x00000000
 * (*) Note: The kernel ensures that "Invalid Memory" is used for MMIO 
 *
 * */


#endif