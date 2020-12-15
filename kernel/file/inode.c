#include "inode.h"
#include "ide-dev.h"
#include "file.h"
#include "../asm/asm.h"
#include "../mem/vmm.h"
#include "../debug/debug.h"
#define NULL (void *)0
extern struct partition *cur_part;
/* 用来存储inode位置 */
struct inode_position{
    char two_sec; //inode是否跨扇区
    unsigned int sec_lba; //inode所在扇区号
    unsigned int off_size; //inode在扇区内的字节偏移量
};
/* 获取inode所在的扇区和扇区内的偏移量 */
static void inode_locate(struct partition *part,unsigned int inode_no,struct inode_position *inode_pos){
    
    /* inode_table在硬盘上是连续的 */
    unsigned int inode_table_lba=part->sb->inode_table_lba;
    
    unsigned int inode_size=sizeof(struct inode);
    //第inode_no号inode节点相对于inode_table_lba的字节偏移量
    unsigned int off_size=inode_no * inode_size;

    //第inode_no号inode节点相对于inode_table_lba的扇区偏移量
    unsigned int off_sec=off_size / 512;
    //待查找的inode所在扇区中的起始地址
    unsigned int off_size_in_sec=off_size % 512;

    /* 判断i节点是否跨越了2个扇区 */
    unsigned int left_in_sec=SECTSIZE-off_size_in_sec;
    //若扇区内剩下的空间不足以容纳一个inode，必然是inode节点跨越了2个扇区
    if(left_in_sec < inode_size){
        inode_pos->two_sec=1; 
    }
    else{
        inode_pos->two_sec=0;
    }
    inode_pos->sec_lba=inode_table_lba+off_sec;
    inode_pos->off_size=off_size_in_sec;

}
/* 将inode写入到分区 */
void inode_sync(struct partition *part,struct inode *inode,void *io_buf){
    unsigned char inode_no=inode->i_num;
    struct inode_position inode_pos;
    //将inode位置信息存入inode_pos
    inode_locate(part,inode_no,&inode_pos);

    struct inode pure_inode;
    memcpy(&pure_inode,inode,sizeof(struct inode));

    /* 以下inode的两个成员只存在于内存中 */
    pure_inode.i_open_cnts=0;
    pure_inode.write_lock=0;
    //pure_inode.inode_tag.prev=pure_inode.inode_tag.next=NULL;
    char *inode_buf=(char *)io_buf;
    //若是跨了两个扇区，就要读出两个扇区再写入两个扇区
    if(inode_pos.two_sec){
        ide_read(inode_buf,inode_pos.sec_lba,2);
        memcpy(inode_buf+inode_pos.off_size,&pure_inode,sizeof(struct inode));
        ide_write(inode_buf,inode_pos.sec_lba,2);
    }
    else{  //只有一个扇区
        ide_read(inode_buf,inode_pos.sec_lba,1);
        memcpy(inode_buf+inode_pos.off_size,&pure_inode,sizeof(struct inode));
        ide_write(inode_buf,inode_pos.sec_lba,1);
    }
    
}
/* 根据i节点号返回相应的i节点 */
struct inode* inode_open(struct partition *part,unsigned int inode_no){
    /* 先在已打开的inode链表中找inode，此链表是为提速创建的缓冲区 */
    //list_entry_t *elem=part
    /* 从硬盘中读入此inode */
    struct inode_position inode_pos;
    /* 将inode位置信息存入inode_pos */
    inode_locate(part,inode_no,&inode_pos);
    /* 创建新节点 */
    struct inode *inode_found=(struct inode *)vmm_malloc(sizeof(struct inode),2);
    char *inode_buf;
    //如果节点号在硬盘中是跨扇区的
    if(inode_pos.two_sec){
        inode_buf = (char *)vmm_malloc(SECTSIZE*2,2);
        ide_read(inode_buf,inode_pos.sec_lba,2);
    }
    else{
        inode_buf = (char *)vmm_malloc(SECTSIZE,2);
        ide_read(inode_buf,inode_pos.sec_lba,1);       
    }
    memcpy(inode_found,inode_buf+inode_pos.off_size,sizeof(struct inode));
    if(inode_pos.two_sec){
        vmm_free(inode_buf,SECTSIZE*2);
    }
    else{
        vmm_free(inode_buf,SECTSIZE);
    }
    return inode_found;
}
/* 关闭inode或减少inode的打开数 */
void inode_close(struct inode *inode){
    /* 若没有进程再打开此文件，将此inode释放空间 */
    vmm_free(inode,sizeof(struct inode));
}
/* 将硬盘分区part上的inode清空 */
void inode_delete(struct partition* part, unsigned int inode_no, void* io_buf) {
   ASSERT(inode_no < 4096);
   struct inode_position inode_pos;
   inode_locate(part, inode_no, &inode_pos);     // inode位置信息会存入inode_pos
   ASSERT(inode_pos.sec_lba <= (part->start_sector + part->sector_size));
   
   char* inode_buf = (char*)io_buf;
   if (inode_pos.two_sec) {   // inode跨扇区,读入2个扇区
      /* 将原硬盘上的内容先读出来 */
      ide_read(inode_buf, inode_pos.sec_lba,  2);
      /* 将inode_buf清0 */
      memset((inode_buf + inode_pos.off_size), 0, sizeof(struct inode));
      /* 用清0的内存数据覆盖磁盘 */
      ide_write(inode_buf, inode_pos.sec_lba,  2);
   } else {    // 未跨扇区,只读入1个扇区就好
      /* 将原硬盘上的内容先读出来 */
      ide_read(inode_buf, inode_pos.sec_lba, 1);
      /* 将inode_buf清0 */
      memset((inode_buf + inode_pos.off_size), 0, sizeof(struct inode));
      /* 用清0的内存数据覆盖磁盘 */
      ide_write(inode_buf, inode_pos.sec_lba,  1);
   }
}

/* 回收inode的数据块和inode本身 */
void inode_release(struct partition* part, unsigned int inode_no) {
   struct inode* inode_to_del = inode_open(part, inode_no);
   ASSERT(inode_to_del->i_num == inode_no);

    // 向下取整用于索引数组下标
    unsigned int byte_idx;
    // 取余用于索引数组内的位
    unsigned int bit_odd;
/* 1 回收inode占用的所有块 */
   unsigned char block_idx = 0, block_cnt = 12;
   unsigned int block_bitmap_idx;
   unsigned int all_blocks[140] = {0};	  //12个直接块+128个间接块

   /* a 先将前12个直接块存入all_blocks */
   while (block_idx < 12) {
      all_blocks[block_idx] = inode_to_del->i_sectors[block_idx];
      block_idx++;
   }

   /* b 如果一级间接块表存在,将其128个间接块读到all_blocks[12~], 并释放一级间接块表所占的扇区 */
   if (inode_to_del->i_sectors[12] != 0) {
      ide_read(all_blocks + 12, inode_to_del->i_sectors[12],  1);
      block_cnt = 140;

      /* 回收一级间接块表占用的扇区 */
      block_bitmap_idx = inode_to_del->i_sectors[12] - part->sb->data_start_lba;
      ASSERT(block_bitmap_idx > 0);
      byte_idx = block_bitmap_idx / 8;
      bit_odd  = block_bitmap_idx % 8;
      part->block_bitmap.bits[byte_idx] &= ~(1 << bit_odd);
      bitmap_sync(cur_part, block_bitmap_idx, BLOCK_BITMAP);
   }
   
   /* c inode所有的块地址已经收集到all_blocks中,下面逐个回收 */
   block_idx = 0;
   while (block_idx < block_cnt) {
        if (all_blocks[block_idx] != 0) {
            block_bitmap_idx = 0;
            block_bitmap_idx = all_blocks[block_idx] - part->sb->data_start_lba;
            ASSERT(block_bitmap_idx > 0);
            byte_idx = block_bitmap_idx / 8;
            bit_odd  = block_bitmap_idx % 8;
            part->block_bitmap.bits[byte_idx] &= ~(1 << bit_odd);
            bitmap_sync(cur_part, block_bitmap_idx, BLOCK_BITMAP);
        }
        block_idx++; 
   }

/*2 回收该inode所占用的inode */
   byte_idx = inode_no / 8;
   bit_odd  = inode_no % 8;
   part->inode_bitmap.bits[byte_idx] &= ~(1 << bit_odd);
   bitmap_sync(cur_part, inode_no, INODE_BITMAP);

   /******     以下inode_delete是调试用的    ******
   * 此函数会在inode_table中将此inode清0,
   * 但实际上是不需要的,inode分配是由inode位图控制的,
   * 硬盘上的数据不需要清0,可以直接覆盖*/
   void* io_buf = vmm_malloc(1024,2);
   inode_delete(part, inode_no, io_buf);
   vmm_free(io_buf,1024);
   /***********************************************/
    
   inode_close(inode_to_del);
}
/* 初始化new_inode */
void inode_init(unsigned int inode_num,struct inode *new_inode){
    new_inode->i_num=inode_num;
    new_inode->i_size=0;
    new_inode->i_open_cnts=0;
    new_inode->write_lock=0;
    /* 初始化块索引数组i_sector */
    for(int i=0;i<13;i++){
        new_inode->i_sectors[i]=0;
    }
}