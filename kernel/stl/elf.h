#ifndef _ELF_H_
#define _ELF_H_
/* file header */
struct elfhdr {
    unsigned int e_magic;     // must equal ELF_MAGIC
    unsigned char e_elf[12];
    unsigned short e_type;      // 1=relocatable, 2=executable, 3=shared object, 4=core image
    unsigned short e_machine;   // 3=x86, 4=68K, etc.
    unsigned int e_version;   // file version, always 1
    unsigned int e_entry;     // entry point if executable
    unsigned int e_phoff;     // file position of program header or 0
    unsigned int e_shoff;     // file position of section header or 0
    unsigned int e_flags;     // architecture-specific flags, usually 0
    unsigned short e_ehsize;    // size of this elf header
    unsigned short e_phentsize; // size of an entry in program header
    unsigned short e_phnum;     // number of entries in program header or 0
    unsigned short e_shentsize; // size of an entry in section header
    unsigned short e_shnum;     // number of entries in section header or 0
    unsigned short e_shstrndx;  // section number that contains section name strings
};

/* program section header */
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
#endif