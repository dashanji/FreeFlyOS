#include "ide-dev.h"
#include "../asm/asm.h"
#include "../vga/vga.h"
#include "../mem/vmm.h"
extern unsigned int init_end;
extern unsigned int kernel_bss;

/*
*   waitdisk:等待硬盘准备好
*/
static inline void waitdisk(void) {
    while ((inb(0x1F7) & 0xC0) != 0x40)
        ;
}
/*
*insl(port,addr,cnt):从port端口循环读cnt次双字到addr位置
*
*cld指令是使DF=0， 即si，di寄存器自动增加
*
*rep指令的目的是重复其上面的指令.ECX的值是重复的次数.repe和repne，
*前者是repeat equal，意思是相等的时候重复，后者是repeat not equal，
*不等的时候重复；每循环一次cx自动减一。
*
*insl 指令是从 DX 指定的 I/O 端口将双字输入 ES:(E)DI 指定的内存位置
*
*/
static inline void insl(unsigned int port, void *addr, int cnt) {
    asm volatile (
            "cld;"
            "repne; insl;"
            : "=D" (addr), "=c" (cnt)
            : "d" (port), "0" (addr), "1" (cnt)
            : "memory", "cc");
}
static inline void outsl(unsigned int port, void *addr, int cnt) {
    asm volatile (
            "cld;"
            "repne; outsl;"
            : "=S" (addr), "=c" (cnt)
            : "d" (port), "0" (addr), "1" (cnt)
            : "memory", "cc");
    }
/*
*   ide_read_sect(dst,secno):读取扇区号secno所在的扇区进入dst地址中
*/
static void ide_read_sect(void *dst, unsigned int secno) {
    
    // 等待硬盘准备好
    waitdisk();

    outb(0x1F2, 1);                  // count = 1  读一个扇区
    outb(0x1F3, secno & 0xFF);
    outb(0x1F4, (secno >> 8) & 0xFF);
    outb(0x1F5, (secno >> 16) & 0xFF);
    outb(0x1F6, ((secno >> 24) & 0xF) | 0xE0);
    outb(0x1F7, 0x20);               // 命令0x20 - 读取扇区 

    // 等待硬盘准备好
    waitdisk();
    // 读取一个扇区
    insl(0x1F0, dst, SECTSIZE / 4);
}
/*
*   ide_write_sect(src,secno):将src的数据写入到secno扇区中
*/
static void ide_write_sect(void *src, unsigned int secno) {
    
    // 等待硬盘准备好
    waitdisk();

    outb(0x1F2, 1);                  // count = 1 读一个扇区
    outb(0x1F3, secno & 0xFF);
    outb(0x1F4, (secno >> 8) & 0xFF);
    outb(0x1F5, (secno >> 16) & 0xFF);
    outb(0x1F6, ((secno >> 24) & 0xF) | 0xE0);
    outb(0x1F7, 0x30);               // 命令0x30 - 存取扇区 

    // 等待硬盘准备好
    waitdisk();
    // 读取一个扇区
    outsl(0x1F0, src, SECTSIZE / 4);
} 
/*
**    ide_read(dst,secno,size):将secno开始的um个扇区读入dst起始的size大小的字节中
*/
void ide_read(void *dst,unsigned int secno,unsigned int num){
   // unsigned int num=(size+SECTSIZE-1)/SECTSIZE;
    for(int i=0;i<num;i++){
        ide_read_sect(dst,secno+i);
        dst+=SECTSIZE;
    }
}
/*
**    ide_write(src,secno,size):将src起始的num个扇区写入secno开始的扇区中
*/
void ide_write(void *src,unsigned int secno,unsigned int num){
    //unsigned int num=(size+SECTSIZE-1)/SECTSIZE;
    for(int i=0;i<num;i++){
        ide_write_sect(src,secno+i);
        src+=SECTSIZE;
    }
}
// 定义一个延时xus毫秒的延时函数
static void delay(unsigned int xus) // xus代表需要延时的微秒数
{
    unsigned int x,y;
    for(x=xus;x>0;x--)
        for(y=110;y>0;y--);
}
//硬盘默认只有一个主分区
struct partition *read_main_partition(){
    struct partition *main_partition;
    //申请内存存储主分区信息
    unsigned int main_part=vmm_malloc(SECTSIZE,2);
    //主分区位于0号扇区
    ide_read_sect((unsigned char *)main_part,0);
    //分区表位于引导扇区（0号扇区）的0x1BE - 0x1FD中
    //由于只有一个主分区，所以读取0x1BE开始的16个字节数据
    main_partition=(struct partition *)((unsigned char *)main_part+0x1BE);
    
    clear();
    printk("active_flag:%08ux\n",main_partition->active_flag);
    printk("start_magnetic:%08ux\n",main_partition->start_magnetic);
    printk("start_sector:%08ux\n",main_partition->start_sector);
    printk("start_cylinder:%08ux\n",main_partition->start_cylinder);
    printk("file_type:%08ux\n",main_partition->file_type);
    printk("end_magnetic:%08ux\n",main_partition->end_magnetic);
    printk("end_sector:%08ux\n",main_partition->end_sector);
    printk("end_cylinder:%08ux\n",main_partition->end_cylinder);
    printk("start_offset:%08ux\n",main_partition->start_offset);
    printk("sector_size:%08ux\n",main_partition->sector_size);

   // printk("the last 2 bytes:%08ux,%08ux\n",*((unsigned char *)main_part+0x1FE)
   // ,*((unsigned char *)main_part+0x1FF)); 
    return main_partition;

}
//测试硬盘读写
void test_ide_io(){
    printk("INIT END:%08X ",&init_end);
    printk("BSS START:%08X",&kernel_bss);
    
    //init部分所占扇区
    int init_sec=(((unsigned int)&init_end-(unsigned int)0x100000)+512-1)/(512);
    //kernel部分所占扇区 ,其中bss段不占硬盘
    int kernel_sec=(((unsigned int)&kernel_bss-(unsigned int)0xC1000000)+512-1)/(512);
    //可用起始扇区，可能会覆盖.debug节、.stab、.stabstr、.symtab节等
    int start_sec=init_sec+kernel_sec;
    printk("start_sec:%08d ",start_sec);
    start_sec++;   //MBR也会占用一个扇区
    //已经将KERNEL读入内核，无需硬盘
    start_sec=0;
   /* unsigned int start=vmm_malloc(512,1);
    for(int i=0;i<512;i++){
        *((unsigned int *)start+i)=0xF10F15F2;
    }
    printk("start data:%08ux",*((unsigned int *)start+1));
    ide_write_sect((unsigned int *)start,start_sec);
  //  delay(5000000);
  
    unsigned int read=vmm_malloc(512,1);
    ide_read_sect((unsigned int *)read,start_sec);
    printk("read data:%08ux",*(unsigned int *)read);*/
    struct partition *main_partition=read_main_partition();
}
