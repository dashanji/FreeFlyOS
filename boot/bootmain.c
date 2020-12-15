/*
*   主要功能：将elf格式的内核代码读入到指定内存区域中
*               本文件和bootsector.S组成MBR
*      注意： MBR文件末尾以0xaa55结束，需sign文件
*              格式化成合法的MBR
*/

#define SECTSIZE        512
#define ELFHDR          ((struct elfhdr *)0x10000)      // scratch space
#define ELF_MAGIC    0x464C457FU    //0x464C457FU 

/* elf文件头 */
struct elfhdr{
	unsigned int magic;      // must equal ELF_MAGIC
	unsigned char elf[12];
	unsigned short type;     // 1=relocatable, 2=executable, 3=shared object, 4=core image
	unsigned short machine;  // 3=x86, 4=68K, etc.
	unsigned int version;    // file version, always 1
	unsigned int entry;      // entry point if executable
	unsigned int phoff;      // file position of program header or 0
	unsigned int shoff;      // file position of section header or 0
	unsigned int flags;      // architecture-specific flags, usually 0
	unsigned short ehsize;   // size of this elf header
	unsigned short phentsize;// size of an entry in program header
	unsigned short phnum;    // number of entries in program header or 0
	unsigned short shentsize;// size of an entry in section header
	unsigned short shnum;    // number of entries in section header or 0
	unsigned short shstrndx; // section number that contains section name strings
};

/* 程序头 */
struct proghdr {
    unsigned int p_type;   // loadable code or data, dynamic linking info,etc.
    unsigned int p_offset; // file offset of segment
    unsigned int p_va;     // virtual address to map segment
    unsigned int p_pa;     // physical address, not used
    unsigned int p_filesz; // size of segment in file
    unsigned int p_memsz;  // size of segment in memory (bigger if contains bss）
    unsigned int p_flags;  // read/write/execute bits
    unsigned int p_align;  // required alignment, invariably hardware page size
};

/*
*   inb(port):从port端口中读取一个字节数据返回
*/
static inline unsigned char inb(unsigned short port) {
    unsigned char data;
    asm volatile ("inb %1, %0" : "=a" (data) : "d" (port));
    return data;
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

/*
*   outb(port,data):将一个字节数据data读入port端口中
*/
static inline void outb(unsigned short port, unsigned char data) {
    asm volatile ("outb %0, %1" :: "a" (data), "d" (port));
}

/*
*   waitdisk:等待硬盘准备好
*/
static inline void waitdisk(void) {
    while ((inb(0x1F7) & 0xC0) != 0x40)
        ;
}

/*
*   readsect(dst,secno):读取扇区号secno所在的扇区进入dst地址中
*/
static inline void readsect(void *dst, unsigned int secno) {
    
    // 等待硬盘准备好
    waitdisk();

    outb(0x1F2, 1);                  // count = 1
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
*   readseg(va,count,offset):读取内核基址偏移为offset处的count字节
*                               放入虚拟地址va中。
*/
static void readseg(unsigned int va, unsigned int count, unsigned int offset) {
    unsigned int end_va = va + count;

    // round down to sector boundary
    va -= offset % SECTSIZE;

    // translate from bytes to sectors; kernel starts at sector 1
    unsigned int secno = (offset / SECTSIZE) + 1;

    // If this is too slow, we could read lots of sectors at a time.
    // We'd write more to memory than asked, but it doesn't matter --
    // we load in increasing order.
    for (; va < end_va; va += SECTSIZE, secno ++) {
        readsect((void *)va, secno);
    }
}

/*
*   bootmain():读取第1号扇区中的内核的ELF头，获取程序段头信息
*                并把所有程序段读入内存的相应虚拟地址中
*               由于此时未开分页机制，虚拟地址=物理地址
*                最后进入ELF头的入口地址，即内核地址
*/
void bootmain(void) {
    // read the 1st page off disk
    readseg((unsigned int )ELFHDR, SECTSIZE * 2, 0);

    *(unsigned int *)0x80000000=0xFFFFFFFF;
    struct proghdr *ph, *eph;

    // load each program segment (ignores ph flags)
    ph = (struct proghdr *)((unsigned int )ELFHDR + ELFHDR->phoff);
    eph = ph + ELFHDR->phnum;
    unsigned int mask;
    //由于内核放在16MB处，至少需要28位对齐（0xFFFFFFF）
    for (; ph < eph; ph ++) {
        //qemu特性决定
        if(ph->p_va > (unsigned int )0xC0000000){
            mask=0xFFFFFFF;
        }
        else{
            mask=0xFFFFFFFF;
        }
        readseg(ph->p_va & mask, ph->p_memsz, ph->p_offset);
    }

    // call the entry point from the ELF header
    // note: does not return
    ((void (*)(void))(ELFHDR->entry & 0xFFFFFFFF))();

    while (1);
}

