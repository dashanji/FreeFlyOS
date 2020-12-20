#include "exec.h"
#include "../interrupt/syscall.h"
#include "../asm/asm.h"
#include "../mem/vmm.h"
#include "../mem/memlayout.h"
#include "task.h"
#define NULL ((void *)0)

extern unsigned int __trapret;
extern struct task_struct *current;
//extern unsigned int test_end;
typedef unsigned int Elf32_Word, Elf32_Addr, Elf32_Off;
typedef unsigned short Elf32_Half;

/* 32位elf头 */
struct Elf32_Ehdr {
   unsigned char e_ident[16];
   Elf32_Half    e_type;
   Elf32_Half    e_machine;
   Elf32_Word    e_version;
   Elf32_Addr    e_entry;
   Elf32_Off     e_phoff;
   Elf32_Off     e_shoff;
   Elf32_Word    e_flags;
   Elf32_Half    e_ehsize;
   Elf32_Half    e_phentsize;
   Elf32_Half    e_phnum;
   Elf32_Half    e_shentsize;
   Elf32_Half    e_shnum;
   Elf32_Half    e_shstrndx;
};

/* 程序头表Program header.就是段描述头 */
struct Elf32_Phdr {
   Elf32_Word p_type;		 // 见下面的enum segment_type
   Elf32_Off  p_offset;
   Elf32_Addr p_vaddr;
   Elf32_Addr p_paddr;
   Elf32_Word p_filesz;
   Elf32_Word p_memsz;
   Elf32_Word p_flags;
   Elf32_Word p_align;
};

/* 段类型 */
enum segment_type {
   PT_NULL,            // 忽略
   PT_LOAD,            // 可加载程序段
   PT_DYNAMIC,         // 动态加载信息 
   PT_INTERP,          // 动态加载器名称
   PT_NOTE,            // 一些辅助信息
   PT_SHLIB,           // 保留
   PT_PHDR             // 程序头表
};

/* 将文件描述符fd指向的文件中,偏移为offset,大小为filesz的段加载到虚拟地址为vaddr的内存 */
static char segment_load(int fd, unsigned int offset, unsigned int filesz, unsigned int vaddr) {
   unsigned int vaddr_first_page = vaddr & 0xfffff000;    // vaddr地址所在的页框
   unsigned int size_in_first_page = VMM_PAGE_SIZE - (vaddr & 0x00000fff);     // 加载到内存后,文件在第一个页框中占用的字节大小
   unsigned int occupy_pages = 0;
   /* 若一个页框容不下该段 */
   if (filesz > size_in_first_page) {
      unsigned int left_size = filesz - size_in_first_page;
      occupy_pages = (left_size+VMM_PAGE_SIZE)/VMM_PAGE_SIZE + 1;	     // 1是指vaddr_first_page
   } else {
      occupy_pages = 1;
   }

   sys_mmap(vaddr_first_page,vaddr_first_page+occupy_pages*VMM_PAGE_SIZE,EXEC_START);

   /* 为进程分配内存 
   unsigned int page_idx = 0;
   unsigned int vaddr_page = vaddr_first_page;
   while (page_idx < occupy_pages) {


      unsigned int* pde = pde_ptr(vaddr_page);
      unsigned int* pte = pte_ptr(vaddr_page);



      // 如果pde不存在,或者pte不存在就分配内存.
    // pde的判断要在pte之前,否则pde若不存在会导致
    // 判断pte时缺页异常 
      if (!(*pde & 0x00000001) || !(*pte & 0x00000001)) {
	 if (get_a_page(PF_USER, vaddr_page) == NULL) {
	    return false;
	 }
      } // 如果原进程的页表已经分配了,利用现有的物理页,直接覆盖进程体
      vaddr_page += VMM_PAGE_SIZE;
      page_idx++;
   } */

   sys_lseek(fd, offset, SEEK_SET);
   sys_read(fd, (void*)vaddr, filesz);
   return 1;
}

/* 从文件系统上加载用户程序pathname,成功则返回程序的起始地址,否则返回-1 */
static int load(const char* pathname) {
   int ret = -1;
   struct Elf32_Ehdr elf_header;
   struct Elf32_Phdr prog_header;
   memset(&elf_header, 0, sizeof(struct Elf32_Ehdr));

   int fd = sys_open(pathname, O_RDONLY);
   if (fd == -1) {
      return -1;
   }

   if (sys_read(fd, &elf_header, sizeof(struct Elf32_Ehdr)) != sizeof(struct Elf32_Ehdr)) {
      ret = -1;
      goto done;
   }

   /* 校验elf头 */
   if (memcmp(elf_header.e_ident, "\177ELF\1\1\1", 7) \
      || elf_header.e_type != 2 \
      || elf_header.e_machine != 3 \
      || elf_header.e_version != 1 \
      || elf_header.e_phnum > 1024 \
      || elf_header.e_phentsize != sizeof(struct Elf32_Phdr)) {
      ret = -1;
      goto done;
   }

   Elf32_Off prog_header_offset = elf_header.e_phoff; 
   Elf32_Half prog_header_size = elf_header.e_phentsize;

   /* 遍历所有程序头 */
   unsigned int prog_idx = 0;
   while (prog_idx < elf_header.e_phnum) {
      memset(&prog_header, 0, prog_header_size);
      
      /* 将文件的指针定位到程序头 */
      sys_lseek(fd, prog_header_offset, SEEK_SET);

     /* 只获取程序头 */
      if (sys_read(fd, &prog_header, prog_header_size) != prog_header_size) {
	 ret = -1;
	 goto done;
      }

      /* 如果是可加载段就调用segment_load加载到内存 */
      if (PT_LOAD == prog_header.p_type) {
	 if (!segment_load(fd, prog_header.p_offset, prog_header.p_filesz, prog_header.p_vaddr)) {
	    ret = -1;
	    goto done;
	 }
      }

      /* 更新下一个程序头的偏移 */
      prog_header_offset += elf_header.e_phentsize;
      prog_idx++;
   }
   ret = elf_header.e_entry;
done:
   sys_close(fd);
   return ret;
}

/* 用path指向的程序替换当前进程 */
int sys_execv(const char* path, const char* argv[]) {
   unsigned int argc = 0;
   while (argv[argc]) {
      argc++;
   }
   int entry_point = load(path);     
   if (entry_point == -1) {	 // 若加载失败则返回-1
      return -1;
   }

   /* 修改进程名 */
   memcpy(current->name, path, task_name_max);
   current->name[task_name_max-1] = 0;

   struct trapframe *tf=(struct trapframe *)
   ((unsigned int)current+VMM_PAGE_SIZE*2-sizeof(struct trapframe));
   tf->tf_regs.reg_ebx=(int)argv;
   tf->tf_regs.reg_ecx=argc;
   tf->tf_eip=(void*)entry_point;
   tf->tf_esp=(unsigned int)current+VMM_PAGE_SIZE;

   /* exec不同于fork,为使新进程更快被执行,直接从中断返回 */
   asm volatile ("movl %0, %%esp; jmp __trapret" : : "g" ((unsigned int)tf) : "memory");
   return 0;
}
