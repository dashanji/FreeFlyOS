#ifndef _DT_H_
#define _DT_H_

/* Application segment type bits */
#define STA_X           0x8         // Executable segment
#define STA_E           0x4         // Expand down (non-executable segments)
#define STA_C           0x4         // Conforming code segment (executable only)
#define STA_W           0x2         // Writeable (non-executable segments)
#define STA_R           0x2         // Readable (executable segments)
#define STA_A           0x1         // Accessed

/* global descrptor numbers */
#define GD_KTEXT    ((1) << 3)      // kernel text
#define GD_KDATA    ((2) << 3)      // kernel data
#define GD_UTEXT    ((3) << 3)      // user text
#define GD_UDATA    ((4) << 3)      // user data
#define GD_TSS      ((5) << 3)        // task segment selector
#define DPL_KERNEL  (0)
#define DPL_USER    (3)

//global descriptor selector
#define KERNEL_CS   (GD_KTEXT|DPL_KERNEL)
#define KERNEL_DS   (GD_KDATA|DPL_KERNEL)
#define USER_CS     (GD_UTEXT|DPL_USER)
#define USER_DS     (GD_UDATA|DPL_USER)

/* System segment type bits */
#define STS_CG32        0xC         // 32-bit Call Gate
#define STS_IG32        0xE         // 32-bit Interrupt Gate
#define STS_TG32        0xF         // 32-bit Trap Gate

#define STS_T32A        0x9         // Available 32-bit TSS
#define SEG_TSS         0x5

#define SEG_NULL                                            \
    (struct segdesc) {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define SEG(type, base, lim, dpl)                           \
    (struct segdesc) {                                      \
        ((lim) >> 12) & 0xffff, (base) & 0xffff,            \
        ((base) >> 16) & 0xff, type, 1, dpl, 1,             \
        (unsigned)(lim) >> 28, 0, 0, 1, 1,                  \
        (unsigned) (base) >> 24                             \
    }

#define SEGTSS(type, base, lim, dpl)                        \
    (struct segdesc) {                                      \
        (lim) & 0xffff, (base) & 0xffff,                    \
        ((base) >> 16) & 0xff, type, 0, dpl, 1,             \
        (unsigned) (lim) >> 16, 0, 0, 1, 0,                 \
        (unsigned) (base) >> 24                             \
    }

#define T_SYSCALL           0x80

/* *
 * Set up a normal interrupt/trap gate descriptor
 *   - istrap: 1 for a trap (= exception) gate, 0 for an interrupt gate
 *   - sel: Code segment selector for interrupt/trap handler
 *   - off: Offset in code segment for interrupt/trap handler
 *   - dpl: Descriptor Privilege Level - the privilege level required
 *          for software to invoke this interrupt/trap gate explicitly
 *          using an int instruction.
 * */
#define SETGATE(gate, istrap, sel, off, dpl) {               \
        (gate).gd_off_15_0 = (unsigned int)(off) & 0xffff;      \
        (gate).gd_ss = (sel);                                \
        (gate).gd_args = 0;                                 \
        (gate).gd_rsv1 = 0;                                 \
        (gate).gd_type = (istrap) ? STS_TG32 : STS_IG32;    \
        (gate).gd_s = 0;                                    \
        (gate).gd_dpl = (dpl);                              \
        (gate).gd_p = 1;                                    \
        (gate).gd_off_31_16 = (unsigned int)(off) >> 16;        \
    }

/* segment descriptors : bit field */
struct segdesc{
    unsigned sd_lim_15_0 : 16;      // low bits of segment limit
    unsigned sd_base_15_0 : 16;     // low bits of segment base address
    unsigned sd_base_23_16 : 8;     // middle bits of segment base address
    unsigned sd_type : 4;           // segment type (see STS_ constants)
    unsigned sd_s : 1;              // 0 = system, 1 = application
    unsigned sd_dpl : 2;            // descriptor Privilege Level
    unsigned sd_p : 1;              // present
    unsigned sd_lim_19_16 : 4;      // high bits of segment limit
    unsigned sd_avl : 1;            // unused (available for software use)
    unsigned sd_rsv1 : 1;           // reserved
    unsigned sd_db : 1;             // 0 = 16-bit segment, 1 = 32-bit segment
    unsigned sd_g : 1;              // granularity: limit scaled by 4K when set
    unsigned sd_base_31_24 : 8;     // high bits of segment base address
};

/* Gate descriptors for interrupts and traps */
struct gatedesc {
    unsigned gd_off_15_0 : 16;      // low 16 bits of offset in segment
    unsigned gd_ss : 16;            // segment selector
    unsigned gd_args : 5;           // # args, 0 for interrupt/trap gates
    unsigned gd_rsv1 : 3;           // reserved(should be zero I guess)
    unsigned gd_type : 4;           // type(STS_{TG,IG32,TG32})
    unsigned gd_s : 1;              // must be 0 (system)
    unsigned gd_dpl : 2;            // descriptor(meaning new) privilege level
    unsigned gd_p : 1;              // Present
    unsigned gd_off_31_16 : 16;     // high bits of offset in segment
};

//describe the gdt/ldt/idt，remember struct's member is first member in low address 
struct dtdesc{
    unsigned short dt_size;
    unsigned int dt_base;
}__attribute__((packed));

/* task state segment format (as described by the Pentium architecture book) */
struct taskstate {
    unsigned int ts_link;       // old ts selector
    unsigned int ts_esp0;      // stack pointers and segment selectors
    unsigned short ts_ss0;        // after an increase in privilege level
    unsigned short ts_padding1;
    unsigned int ts_esp1;
    unsigned short ts_ss1;
    unsigned short ts_padding2;
    unsigned int ts_esp2;
    unsigned short ts_ss2;
    unsigned short ts_padding3;
    unsigned int ts_cr3;       // page directory base
    unsigned int ts_eip;       // saved state from last task switch
    unsigned int ts_eflags;
    unsigned int ts_eax;        // more saved state (registers)
    unsigned int ts_ecx;
    unsigned int ts_edx;
    unsigned int ts_ebx;
    unsigned int ts_esp;
    unsigned int ts_ebp;
    unsigned int ts_esi;
    unsigned int ts_edi;
    unsigned short ts_es;         // even more saved state (segment selectors)
    unsigned short ts_padding4;
    unsigned short ts_cs;
    unsigned short ts_padding5;
    unsigned short ts_ss;
    unsigned short ts_padding6;
    unsigned short ts_ds;
    unsigned short ts_padding7;
    unsigned short ts_fs;
    unsigned short ts_padding8;
    unsigned short ts_gs;
    unsigned short ts_padding9;
    unsigned short ts_ldt;
    unsigned short ts_padding10;
    unsigned short ts_t;          // trap on task switch
    unsigned short ts_iomb;       // i/o map base address
} __attribute__((packed));

static inline void lgdt(struct dtdesc *dt);
static inline void lidt(struct dtdesc *dt);
static inline void ltr(unsigned short sel);
void lidt(struct dtdesc *dt);
void gdt_init();
void idt_init();

#endif