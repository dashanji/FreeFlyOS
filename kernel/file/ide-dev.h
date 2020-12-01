#ifndef _IDE_DEV_H_
#define _IDE_DEV_H_
#define SECTSIZE        512

/* 分区表项结构 */
struct partition
{
    unsigned char active_flag; //活动分区标记，0x80代表活动分区，0代表非活动分区
    unsigned char start_magnetic; //分区起始磁头号
    unsigned char start_sector; //分区起始扇区号
    unsigned char start_cylinder; //分区起始柱面号
    unsigned char file_type; //文件系统类型ID，0表示不可识别，0x83表示linux文件系统
    unsigned char end_magnetic; //分区结束磁头号
    unsigned char end_sector; //分区结束扇区号
    unsigned char end_cylinder; //分区结束柱面号
    unsigned int  start_offset; //分区起始偏移扇区
    unsigned int  sector_size; //分区扇区总数
};

void test_ide_io();
#endif
