#ifndef _SUPER_BLOCK_H_
#define _SUPER_BLOCK_H_

/* 超级块 */
struct super_block{
    unsigned int magic; //魔数，用来标识文件系统
    unsigned int sec_cnt; //本分区总共扇区数
    unsigned int inode_cnt; //本分区中inode数量
    unsigned int part_lba_base; //本分区的起始lba地址

    unsigned int block_bitmap_lba; //块位图本身起始扇区地址
    unsigned int block_bitmap_sects; //块位图占用扇区数
    
    unsigned int inode_bitmap_lba; //inode节点位图本身起始扇区地址
    unsigned int inode_bitmap_sects; //inode节点位图占用扇区数

    unsigned int inode_table_lba; //inode表本身起始扇区地址
    unsigned int inode_table_sects; //inode表占用扇区数

    unsigned int data_start_lba; //数据块起始扇区地址
    unsigned int root_inode_no; //根目录所在I节点号
    unsigned int dir_entry_size; //根目录大小

    unsigned char pad[460]; //加上460字节，凑一个扇区
}__attribute__((packed));

#endif