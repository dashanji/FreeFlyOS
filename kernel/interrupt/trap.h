#ifndef _TRAP_H_
#define _TRAP_H_

/* Trap Numbers */
/* Processor-defined: */
#define T_DIVIDE                0   // divide error
#define T_DEBUG                 1   // debug exception
#define T_NMI                   2   // non-maskable interrupt
#define T_BRKPT                 3   // breakpoint
#define T_OFLOW                 4   // overflow
#define T_BOUND                 5   // bounds check
#define T_ILLOP                 6   // illegal opcode
#define T_DEVICE                7   // device not available
#define T_DBLFLT                8   // double fault
// #define T_COPROC             9   // reserved (not used since 486)
#define T_TSS                   10  // invalid task switch segment
#define T_SEGNP                 11  // segment not present
#define T_STACK                 12  // stack exception
#define T_GPFLT                 13  // general protection fault
#define T_PGFLT                 14  // page fault
// #define T_RES                15  // reserved
#define T_FPERR                 16  // floating point error
#define T_ALIGN                 17  // aligment check
#define T_MCHK                  18  // machine check
#define T_SIMDERR               19  // SIMD floating point error

/* Hardware IRQ numbers. We receive these as (IRQ_OFFSET + IRQ_xx) */
#define IRQ_OFFSET              32  // IRQ 0 corresponds to int IRQ_OFFSET

#define IRQ_TIMER               0
#define IRQ_KBD                 1
#define IRQ_COM1                4
#define IRQ_IDE1                14
#define IRQ_IDE2                15
#define IRQ_ERROR               19
#define IRQ_SPURIOUS            31

/*
 * These are arbitrarily chosen, but with care not to overlap
 * processor defined exceptions or interrupt vectors.
 * */
#define T_SWITCH_TOU                120    // user/kernel switch
#define T_SWITCH_TOK                121    // user/kernel switch

/* registers as pushed by pushal */
struct pushregs {
    unsigned int reg_edi;
    unsigned int reg_esi;
    unsigned int reg_ebp;
    unsigned int reg_oesp;          /* Useless */
    unsigned int reg_ebx;
    unsigned int reg_edx;
    unsigned int reg_ecx;
    unsigned int reg_eax;
};

struct trapframe {
    struct pushregs tf_regs;
    unsigned short tf_gs;
    unsigned short tf_padding0;
    unsigned short tf_fs;
    unsigned short tf_padding1;
    unsigned short tf_es;
    unsigned short tf_padding2;
    unsigned short tf_ds;
    unsigned short tf_padding3;
    unsigned int tf_trapno;
    /* below here defined by x86 hardware */
    unsigned int tf_err;
    unsigned int tf_eip;
    unsigned short tf_cs;
    unsigned short tf_padding4;
    unsigned int tf_eflags;
    /* below here only when crossing rings, such as from user to kernel */
    unsigned int tf_esp;
    unsigned short tf_ss;
    unsigned short tf_padding5;
} __attribute__((packed));

static void trap_dispatch(struct trapframe *tf);
void trap(struct trapframe *tf);
void disable_interupt();
void enable_interupt();

#endif