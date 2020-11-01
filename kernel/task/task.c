#include "task.h"

struct task_struct task_list[task_max];
struct task_struct *current;  //指向当前进程 

extern struct segdesc gdt[];
extern unsigned int new_pdt[PAGE_DIR_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );
struct task_struct *task0,*task1;
/*
*   task_init:创建第一个内核进程
*/
void task_init(){

    
    task0=vmm_malloc(sizeof(struct task_struct),1);
    task1=vmm_malloc(sizeof(struct task_struct),1);
    //struct taskstate tss0,tss1;


    /*   task0 init   */
    task0->state=0;
    task0->counter=100;
    task0->priority=0;
    task0->pid=0;
    task0->start_code=0;
    task0->end_code=0;
    task0->end_data=0;
    task0->start_stack=0;
    //task0->tss=tss0;

    /*     task0's tss init            */
    task0->tss.ts_link=0;
    task0->tss.ts_esp0=(unsigned int)task0;
    task0->tss.ts_ss0=0x10;        
    task0->tss.ts_padding1=0;  
    task0->tss.ts_esp1=0;
    task0->tss.ts_ss1=0;
    task0->tss.ts_padding2=0; 
    task0->tss.ts_esp2=0;
    task0->tss.ts_ss2=0;
    task0->tss.ts_padding3=0;   
    task0->tss.ts_cr3=LA_PA((unsigned int)new_pdt);      
    task0->tss.ts_eip=(unsigned int)print1;       
    task0->tss.ts_eflags=0;
    task0->tss.ts_eax=0;      
    task0->tss.ts_ecx=0;
    task0->tss.ts_edx=0;
    task0->tss.ts_ebx=0;
    task0->tss.ts_esp=0;
    task0->tss.ts_ebp=0;
    task0->tss.ts_esi=0;
    task0->tss.ts_edi=0;
    task0->tss.ts_es=0x10;       
    task0->tss.ts_padding4=0;  
    task0->tss.ts_cs=0x8;
    task0->tss.ts_padding5=0; 
    task0->tss.ts_ss=0x10;
    task0->tss.ts_padding6=0; 
    task0->tss.ts_ds=0x10;
    task0->tss.ts_padding7=0;  
    task0->tss.ts_fs=0x10;
    task0->tss.ts_padding8=0; 
    task0->tss.ts_gs=0x10;
    task0->tss.ts_padding9=0; 
    task0->tss.ts_ldt=0x30;
    task0->tss.ts_padding10=0; 
    task0->tss.ts_t=0;          
    task0->tss.ts_iomb=0;     

    task0->context.eip=(unsigned int)print1;
    task0->context.esp=(unsigned int)task0;
    task0->context.ebx=0;
    task0->context.ecx=0;
    task0->context.edx=0;
    task0->context.esi=0;
    task0->context.edi=0;
    task0->context.ebp=0;
    /*   task1 init   */
    task1->state=0;
    task1->counter=100;
    task1->priority=0;
    task1->pid=1;
    task1->start_code=0;
    task1->end_code=0;
    task1->end_data=0;
    task1->start_stack=0;
    //task1->tss=tss0;

    /*     task0's tss init            */
    task1->tss.ts_link=0;
    task1->tss.ts_esp0=(unsigned int)task0;
    task1->tss.ts_ss0=0x10;        
    task1->tss.ts_padding1=0;  
    task1->tss.ts_esp1=0;
    task1->tss.ts_ss1=0;
    task1->tss.ts_padding2=0; 
    task1->tss.ts_esp2=0;
    task1->tss.ts_ss2=0;
    task1->tss.ts_padding3=0;   
    task1->tss.ts_cr3=LA_PA((unsigned int)new_pdt);      
    task1->tss.ts_eip=(unsigned int)print2;       
    task1->tss.ts_eflags=0;
    task1->tss.ts_eax=0;      
    task1->tss.ts_ecx=0;
    task1->tss.ts_edx=0;
    task1->tss.ts_ebx=0;
    task1->tss.ts_esp=0;
    task1->tss.ts_ebp=0;
    task1->tss.ts_esi=0;
    task1->tss.ts_edi=0;
    task1->tss.ts_es=0x10;       
    task1->tss.ts_padding4=0;  
    task1->tss.ts_cs=0x8;
    task1->tss.ts_padding5=0; 
    task1->tss.ts_ss=0x10;
    task1->tss.ts_padding6=0; 
    task1->tss.ts_ds=0x10;
    task1->tss.ts_padding7=0;  
    task1->tss.ts_fs=0x10;
    task1->tss.ts_padding8=0; 
    task1->tss.ts_gs=0x10;
    task1->tss.ts_padding9=0; 
    task1->tss.ts_ldt=0x30;
    task1->tss.ts_padding10=0; 
    task1->tss.ts_t=0;          
    task1->tss.ts_iomb=0;     

    task1->context.eip=(unsigned int)print2;
    task1->context.esp=(unsigned int)task1;
    task1->context.ebx=0;
    task1->context.ecx=0;
    task1->context.edx=0;
    task1->context.esi=0;
    task1->context.edi=0;
    task1->context.ebp=0;
    /*   TSS descriptor init   */
    gdt[SEG_TSS] = SEGTSS(STS_T32A, (unsigned int)&(task0->tss), sizeof(task0->tss), DPL_KERNEL);  
    
    /*   TSS descriptor init   */
    //gdt[SEG_TSS1] = SEGTSS(STS_T32A, (unsigned int)&(task1->tss), sizeof(task1->tss), DPL_KERNEL);  
    
    /*   load TSS descriptor to TR   */
    ltr(GD_TSS);

    for(int i=0;i<10;i++){
        switch_to(&(task0->context),&(task1->context));
        switch_to(&(task1->context),&(task0->context));
    }
    
    //print_seg();
}
void print1(){
    //ltr(GD_TSS);
    printk("Thread0 is running!\n");
    task1->context.eip=(unsigned int)print2;
    task1->context.esp=(unsigned int)task1;
    task1->context.ebx=0;
    task1->context.ecx=0;
    task1->context.edx=0;
    task1->context.esi=0;
    task1->context.edi=0;
    task1->context.ebp=0;
    task0->context.eip=(unsigned int)print1;
    task0->context.esp=(unsigned int)task0;
    task0->context.ebx=0;
    task0->context.ecx=0;
    task0->context.edx=0;
    task0->context.esi=0;
    task0->context.edi=0;
    task0->context.ebp=0;
    switch_to(&(task0->context),&(task1->context));
    //return;
    while(1){
    ;//printk("hahahah1!\n");
    }
}
void print2(){
    //ltr(GD_TSS1);
    printk("Thread1 is running!\n");
    task1->context.eip=(unsigned int)print2;
    task1->context.esp=(unsigned int)task1;
    task1->context.ebx=0;
    task1->context.ecx=0;
    task1->context.edx=0;
    task1->context.esi=0;
    task1->context.edi=0;
    task1->context.ebp=0;
    task0->context.eip=(unsigned int)print1;
    task0->context.esp=(unsigned int)task0;
    task0->context.ebx=0;
    task0->context.ecx=0;
    task0->context.edx=0;
    task0->context.esi=0;
    task0->context.edi=0;
    task0->context.ebp=0;
    switch_to(&(task1->context),&(task0->context));
    //return ;
    
    while(1){
        ;//printk("hahahah2!\n");
    }
}
// 创建内核线程
/*int kernel_thread(int (*fun)(void *), void *args, unsigned int flags) {
    struct trapframe tf;
    memset(&tf, 0, sizeof(struct trapframe));
    tf.tf_cs = KERNEL_CS;
    tf.tf_ds = tf.tf_es = tf.tf_ss = KERNEL_DS;
    tf.tf_regs.reg_ebx = (unsigned int)fun;
    tf.tf_regs.reg_edx = (unsigned int)args;
    tf.tf_eip = (unsigned int)kernel_thread_entry;
    return do_fork(flags , &tf);
}
*/