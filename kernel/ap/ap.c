#include "ap.h"
#include "apheader.h"
#include "../mem/memlayout.h"
#include "../mem/vmm.h"
#include "../asm/asm.h"
#include "../apic/apic.h"
unsigned int ap_started=0;
extern unsigned int new_pdt[PAGE_DIR_SIZE] __attribute__( (aligned(VMM_PAGE_SIZE) ) );
//extern unsigned int _binary_start_ap_start[], _binary_start_ap_size[];
void start_ap(unsigned int id,unsigned int addr) 
{
 /* 
     * The operating system places the address of a HLT
     * instruction in the warm-reset vector (40:67), sets the CMOS shut-down code to 0Ah, then sends an
     * INIT IPI to the AP. The INIT IPI causes the AP to enter the BIOS POST routine, where it
     * immediately jumps to the warm-reset vector and executes the operating system’s HLT instruction.
     * Only one processor can execute the shutdown routine at any given time, due to the use of the
     * shutdown code. 
     */
    outb(0x70, 0xf);
    outb(0x71, 0xa);
    unsigned int* warm_reset_vec = (unsigned int *) PA_LA(0x467);
    *warm_reset_vec = (addr >> 4) << 16;
    //printk("warm:%x\n",*warm_reset_vec);
    /* 
     * An AP may be started either by the BSP or by another active AP. The operating system causes
     * application processors to start executing their initial tasks in the operating system code by using the
     * following universal algorithm. The algorithm detailed below consists of a sequence of
     * interprocessor interrupts and short programmatic delays to allow the APs to respond to the wakeup
     * commands. The algorithm shown here in pseudo-code assumes that the BSP is starting an AP for
     * documentation convenience. The BSP must initialize BIOS shutdown code to 0AH and the warm
     * reset vector (DWORD based at 40:67) to point to the AP startup code prior to executing the
     * following sequence:
     *      BSP sends AP an INIT IPI
     *      BSP DELAYs (10mSec)
     *      If (APIC_VERSION is not an 82489DX) {
     *          BSP sends AP a STARTUP IPI
     *          BSP DELAYs (200μSEC)
     *          BSP sends AP a STARTUP IPI
     *          BSP DELAYs (200μSEC)
     *      }
     *      BSP verifies synchronization with executing AP 
     */
    apic_write(APIC_ICR_HIGH, id << 24);
    apic_write(APIC_ICR_LOW,  APIC_INT_LEVEL_TRIG | APIC_INT_ASSERT | APIC_DM_INIT);
    //delay 10ms
    unsigned int x,y;
    for(x=10000;x>0;x--)
        for(y=110;y>0;y--);

    apic_write(APIC_ICR_HIGH, id << 24);
    apic_write(APIC_ICR_LOW,  APIC_INT_LEVEL_TRIG | APIC_DM_INIT);

    for (int i = 0; i < 2; i++) {
        apic_write(APIC_ICR_HIGH, id << 24);
        apic_write(APIC_ICR_LOW,  APIC_DM_STARTUP | (addr >> 12));
        //delay 200us
        for(x=200;x>0;x--)
            for(y=110;y>0;y--);
    }   
}
void ap_init()
{ 
    unsigned int* ap_start_addr = (unsigned int *) PA_LA(AP_START_ADDR);
    unsigned int* ap_main       = (unsigned int *) PA_LA(AP_MAIN);
    unsigned int* ap_kstack     = (unsigned int *) PA_LA(AP_KSTACK);
    unsigned int* ap_pgdir      = (unsigned int *) PA_LA(AP_PGDIR);
    unsigned int* ap_index      = (unsigned int *) PA_LA(AP_INDEX);
    printk("before:%x\n",*(unsigned int *)PA_LA(0x1FFF0));
    *(unsigned int *)PA_LA(0x1FFF0)=0x12345678;
    printk("after:%x\n",*(unsigned int *)PA_LA(0x1FFF0));
    *ap_main  = (unsigned int) apmain;
    *ap_pgdir = (unsigned int) LA_PA((unsigned int)new_pdt);
    ap_started=0;

   // memcpy(ap_start_addr, _binary_start_ap_start, (unsigned int) _binary_start_ap_size);

    for (int i = 0; i < CPU_NUM; i++) {
        if (i==0) {
            continue;
        }
        
        *ap_index = i;
        *ap_kstack = PA_LA(0x12000);
       start_ap(i, AP_START_ADDR);
        unsigned int x,y;
        while (!ap_started) {
                //delay 10ms
            for(x=10000;x>0;x--)
                for(y=110;y>0;y--);
            printk( "Check CPU %x started:%d\n", i,ap_started);
        }
        printk( "CPU %x started.\n", i);
    }
}
void apmain(unsigned int index){
    
    ap_started=1;
    printk("run ap of apic id: %x\n",index);
    while(1){
        //printk("hello\n");
        
    }
    
}
