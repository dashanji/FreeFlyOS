#include "task.h"

struct task_struct task_list[task_max];
struct task_struct *current;  //指向当前进程 

extern struct segdesc gdt[];
extern unsigned int new_pdt[PAGE_DIR_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );
/*
*   task_init:创建第一个内核进程
*/
void task_init(){

    struct task_struct task0;
    struct taskstate tss0;

    /*   task0 init   */
    task0.state=0;
    task0.counter=100;
    task0.priority=0;
    task0.pid=0;
    task0.start_code=0;
    task0.end_code=0;
    task0.end_data=0;
    task0.start_stack=0;

    /*     task0's tss init            */
    tss0.ts_link=0;
    tss0.ts_esp0=KERNEL_STACK_START;
    tss0.ts_ss0=0x10;        
    tss0.ts_padding1=0;  
    tss0.ts_esp1=0;
    tss0.ts_ss1=0;
    tss0.ts_padding2=0; 
    tss0.ts_esp2=0;
    tss0.ts_ss2=0;
    tss0.ts_padding3=0;   
    tss0.ts_cr3=LA_PA((unsigned int)new_pdt);      
    tss0.ts_eip=0;       
    tss0.ts_eflags=0;
    tss0.ts_eax=0;      
    tss0.ts_ecx=0;
    tss0.ts_edx=0;
    tss0.ts_ebx=0;
    tss0.ts_esp=0;
    tss0.ts_ebp=0;
    tss0.ts_esi=0;
    tss0.ts_edi=0;
    tss0.ts_es=0x10;       
    tss0.ts_padding4=0;  
    tss0.ts_cs=0x8;
    tss0.ts_padding5=0; 
    tss0.ts_ss=0x10;
    tss0.ts_padding6=0; 
    tss0.ts_ds=0x10;
    tss0.ts_padding7=0;  
    tss0.ts_fs=0x10;
    tss0.ts_padding8=0; 
    tss0.ts_gs=0x10;
    tss0.ts_padding9=0; 
    tss0.ts_ldt=0x30;
    tss0.ts_padding10=0; 
    tss0.ts_t=0;          
    tss0.ts_iomb=0;     

    /*   TSS descriptor init   */
    gdt[SEG_TSS] = SEGTSS(STS_T32A, (unsigned int)&tss0, sizeof(tss0), DPL_KERNEL);  

    /*   load TSS descriptor to TR   */
    ltr(GD_TSS);

    print_seg();
}