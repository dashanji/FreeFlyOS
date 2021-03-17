#include "apic.h"/*****************************多核测试***********************/
#include "../vga/vga.h"
#include "../interrupt/trap.h"
#include "../timer/timer.h"
#include "../asm/asm.h"
extern unsigned int volatile jiffies;
unsigned int m_tick = 0;
void apic_write(unsigned int reg, unsigned int v)
{
	*((volatile unsigned int *)(APIC_BASE+reg)) = v;
}
void apic_write64(unsigned long long reg, unsigned long long v)
{
	*((volatile unsigned long long *)(APIC_BASE+reg)) = v;
}

unsigned int apic_read(unsigned int reg)
{
	return *((volatile unsigned int *)(APIC_BASE+reg));
}

unsigned long long apic_read64(unsigned int reg)
{
	return *((volatile unsigned long long *)(APIC_BASE+reg));
}

void test_apic(){
    unsigned int edx=0,ecx=0;
    __asm__ volatile("cpuid":"=d"(edx),"=c"(ecx) : "a" (0x1) : "memory", "cc");
    printk("**************** check apic **********************\n");
    printk("local_apic check, ecx: %x, edx: %x\n", ecx, edx);
    printk("support APIC:   %s\n", (edx & (1 << 9))  ? "YES" : "NO");
    printk("support x2APIC: %s\n", (ecx & (1 << 21)) ? "YES" : "NO");
    check();
}
int check()
{
    unsigned int edx = 0, ecx = 0;
    __asm__ volatile("cpuid" : "=d" (edx), "=c" (ecx) : "a" (0x1) : "memory", "cc");
/*
    printk("**************** check apic **********************\n");
    printk("local_apic check, ecx: %08x, edx: %08x\n", ecx, edx);
    printk("support APIC:   %s\n", (edx & (1 << 9))  ? "YES" : "NO");
    printk("support x2APIC: %s\n", (ecx & (1 << 21)) ? "YES" : "NO");
    printk("**************** check apic **********************\n");
    printk("\n");

    printk("**************** MSR IS_32_APICBASE ***************\n");
    unsigned int l, h;
    rdmsr(MSR_IA32_APICBASE, l, h);
    printk("MSR IA_32_APICBASE: %08x, %08x\n", h, l);
    printk("**************** MSR IS_32_APICBASE ***************\n");
    printk("\n"); 
    */

    printk("******************** local APIC register *****************\n");
    unsigned long long val = 0;
    val = apic_read(APIC_ID);
    printk("APIC ID:                                 %x\n", (unsigned int) val);
    val = apic_read(APIC_LVR);
    printk("APIC version:                            %x\n", (unsigned int) val);
    val = apic_read(APIC_SPIV);
    printk("APIC Spurious interrupt vertor register: %x\n", (unsigned int) val);
    printk("******************** local APIC register *****************\n");
    printk("\n");

    printk("******************** local vector table *****************\n");
    val = apic_read(APIC_LVT_CMCI);
    printk("lvt machine check:       %x\n", (unsigned int) val);
    val = apic_read(APIC_LVT_TIMER);
    printk("lvt timer:               %x\n", (unsigned int) val);
    val = apic_read(APIC_LVT_THMR);
    printk("lvt thermal sensor       %x\n", (unsigned int) val);
    val = apic_read(APIC_LVT_PMCR);
    printk("lvt performance monitor: %x\n", (unsigned int) val);
    val = apic_read(APIC_LVT_LINT0);
    printk("lvt lint0:               %x\n", (unsigned int) val);
    val = apic_read(APIC_LVT_LINT1);
    printk("lvt lint1:               %x\n", (unsigned int) val);
    val = apic_read(APIC_LVT_ERROR);
    printk("lvt error:               %x\n", (unsigned int) val);
    printk("******************** local vector table *****************\n");
    printk("\n");

    printk("*************************** timer ************************\n");
    val = apic_read(APIC_TIMER_ICT);
    printk("timer initial count register:        %x\n", (unsigned int) val); 
    val = apic_read(APIC_TIMER_CCT);
    printk("timer current count register:        %x\n", (unsigned int) val);
    val = apic_read(APIC_TIMER_DCR);
    printk("timer divide configuration register: %x\n", (unsigned int) val);
    printk("*************************** timer ************************\n");
    printk("\n");
    /* support APIC */
    if (edx & (1 << 9)) {
        return 0;
    }

    return -1;
}
/*
 * When IA32_APIC_BASE[11] is set to 0, processor APICs based on the 3-wire APIC bus 
 * cannot be generally re-enabled until a system hardware reset.
 */
void global_enable()
{
    unsigned int l, h;
    rdmsr(MSR_IA32_APICBASE, l, h);
    l |= MSR_IA32_APICBASE_ENABLE;
    wrmsr(MSR_IA32_APICBASE, l, h);
}

void global_disable()
{
    unsigned int l, h;
    rdmsr(MSR_IA32_APICBASE, l, h);
    l &= ~MSR_IA32_APICBASE_ENABLE;
    wrmsr(MSR_IA32_APICBASE, l, h);
}

void software_enable()
{
    unsigned int val = apic_read(APIC_SPIV);
    val |= (APIC_SOFT_ENABLE);
    apic_write(APIC_SPIV, val);
}

void software_disable()
{
    unsigned int val = apic_read(APIC_SPIV);
    val &= ~(APIC_SOFT_ENABLE);
    apic_write(APIC_SPIV, val);
}


void setup_lvt_timer(unsigned int clocks)
{
    /* (1 << 17) means timer mode Periodic */
    apic_write(APIC_LVT_TIMER, (1 << 17) | VEC_LOCAL_TIMER);

    /* set timer divide configuration as 111b(0xb's 0,1,3 bit)
     * so the divide value is 1, 
     * so timer's rate will = processor's bus clock / 1
     */
    apic_write(APIC_TIMER_DCR, 0xb);

    /* set timer's initial count as clocks */
    apic_write(APIC_TIMER_ICT, clocks);
}

/* get 8254 timer count, until wraparound */
static void wait_8254_wraparound()
{
    unsigned int current_count, prev_count;
    int delta = 0;

    current_count = jiffies;
    prev_count = current_count;
    do {
        current_count = jiffies;
        delta = current_count - prev_count;
    } while (delta < 300);
}

unsigned int calibrate_clock()
{
    unsigned long long tsc_begin, tsc_end;

    // write a max value to APIC timeout 
    setup_lvt_timer(0xffffffff);

    // wait 8254 start a new round 
   // printk("eee\n");
   // wait_8254_wraparound();
   // printk("hhh\n");
   // while(1);
    

    // begin 
    rdtsc64(tsc_begin);
    unsigned int apic_begin = apic_read(APIC_TIMER_CCT);

    // wait 
    for (int i = 0; i < CALIBRATE_LOOP; i++) {
        wait_8254_wraparound();
    }

    // end  
    rdtsc64(tsc_end);
    unsigned int apic_end = apic_read(APIC_TIMER_CCT);

    unsigned int clocks = (unsigned int) (apic_begin - apic_end);
    unsigned int tsc_delta = (unsigned int) ((tsc_end - tsc_begin));
    //delay_t::init(tsc_delta / CALIBRATE_LOOP * HZ);

    printk( "********** calibrate local APIC clock *********\n");
    printk("tsc speed: %08ux.%08ux MHz.\n", 
            (tsc_delta/CALIBRATE_LOOP) / (1000000/HZ),
            (tsc_delta/CALIBRATE_LOOP) % (1000000/HZ));
    
    printk("bus clock speed: %08ux.%08ux MHz.\n", 
            (clocks / CALIBRATE_LOOP) / (1000000/HZ),
            (clocks / CALIBRATE_LOOP) % (1000000/HZ));
    printk("********** calibrate local APIC clock *********\n");

    return clocks / CALIBRATE_LOOP;
    
}

int init_timer()
{
    unsigned int  m_clocks = calibrate_clock();
    setup_lvt_timer(m_clocks);
    return 0;
}
int init_apic()
{
    

    if (check() != 0) {
        return -1;
    }
 //setup_lvt_timer(0xffffffff);
    //if (init_timer() != 0) {
    //    return -1;
    //}
    
    apic_write(APIC_SPIV, APIC_SOFT_ENABLE | VEC_SPURIOUS);

    /* mask performance monitor counter, LINT0, LINT1 */
    //屏蔽8259A中断
    apic_write(APIC_LVT_PMCR,  (1 << 16));
    apic_write(APIC_LVT_LINT0, (1 << 16));
    apic_write(APIC_LVT_LINT1, (1 << 16));
   
    /* error */
    apic_write(APIC_LVT_ERROR, VEC_ERROR);

    /* ack outstanding interrupts */
    eoi();

    /* enable interrupt on APIC */
    apic_write(APIC_TPR, 1);

    return 0;
}
static inline void lapic_wrmsr(unsigned int index, unsigned long long data)
{
    unsigned int lo = data, hi = data >> 32;
    asm volatile ("wrmsr"::"c" (index), "a"(lo), "d"(hi));
}
void init_lapic(void){
    /*enable lapic*/
    lapic_wrmsr(MSR_IA32_APICBASE, APIC_BASE | MSR_IA32_APICBASE_ENABLE);
    /*software enable*/
    apic_write(APIC_LVT_LINT0, 0);
    apic_write(APIC_SPIV, APIC_SPIV_APIC_ENABLED | VEC_SPURIOUS);
}
void do_timer_irq()
{
    m_tick++;
    if ((unsigned int)m_tick % 100 == 0) {
        unsigned int m_id = apic_read(APIC_ID) >> 24;
    }

    //printk("m_tick:%d\n",m_tick);
}

void eoi()
{
    apic_write(APIC_EOI, 0);
}
void ioapic_init()
{
    //outb(0x21,0xff);
    //outb(0xa1,0xff);
    unsigned int count = (ioapic_read(IO_APIC_REG_VER) >> 16) & 0xff;
    unsigned int id = (ioapic_read(IO_APIC_REG_ID) >> 24);

    //printk("****************** io apic ****************\n");
    //printk("io apic id: %08ux\n", id);
    //printk("io apic num of table: %08ux\n", count);
    //printk("****************** io apic ****************\n");

    for (int i = 0; i <= count; i++) {
        ioapic_write(IO_APIC_REG_TABLE + 2*i,     INT_DISABLED | (0x20 + i));
        ioapic_write(IO_APIC_REG_TABLE + 2*i + 1, 0);
    }
}

void enable_irq(unsigned int irq, unsigned int cpu_id)
{
    //printk("before:%08x,%08x\n",ioapic_read(IO_APIC_REG_TABLE + 2*irq),ioapic_read(IO_APIC_REG_TABLE + 2*irq+1));
    ioapic_write(IO_APIC_REG_TABLE + 2*irq,     0x20 + irq);
    ioapic_write(IO_APIC_REG_TABLE + 2*irq + 1, cpu_id << 24);
    //printk("after:%08x,%08x\n",ioapic_read(IO_APIC_REG_TABLE + 2*irq),ioapic_read(IO_APIC_REG_TABLE + 2*irq+1));
   
}

unsigned int ioapic_read(unsigned int reg)
{
    unsigned int* base = (unsigned int *) IO_APIC_BASE;
    *base = reg;
    return *(base + 4);
}

void ioapic_write(unsigned int reg, unsigned int data)
{
    unsigned int* base = (unsigned int *) IO_APIC_BASE;
    *base = reg;
    *(base + 4) = data;
}
/* h h h h hh h h h h hhh h h hh h h hh **/
inline void get_cpuid(unsigned int Mop,unsigned int Sop,unsigned int * a,unsigned int * b,unsigned int * c,unsigned int * d)
{
	__asm__ __volatile__	(	"cpuid	\n\t"
					:"=a"(*a),"=b"(*b),"=c"(*c),"=d"(*d)
					:"0"(Mop),"2"(Sop)
				);
}
void Local_APIC_init()
{
	unsigned int x,y;
	unsigned int a,b,c,d;

    /*通过CPUID.01功能检测Local APIC是否支持APIC、xAPIC和x2APIC模式，并将检测结果显示出来*/
	//check APIC & x2APIC support
	get_cpuid(1,0,&a,&b,&c,&d);
	//void get_cpuid(unsigned int Mop,unsigned int Sop,unsigned int * a,unsigned int * b,unsigned int * c,unsigned int * d)
	printk("CPUID\t01,eax:%08x,ebx:%08x,ecx:%08x,edx:%08x\n",a,b,c,d);

	if((1<<9) & d)
		printk("HW support APIC&xAPIC\t");
	else
		printk("HW NO support APIC&xAPIC\t");
	
	if((1<<21) & c)
		printk("HW support x2APIC\n");
	else
		printk("HW NO support x2APIC\n");

    /*借助BTS汇编指令置位IA32_APIC_BASE寄存器的寄存器位，再将置位的数值回写到
    IA32_APIC_BASE寄存器中，并对写入结果进行测试以确保开启Local APIC*/
	//enable xAPIC & x2APIC
	__asm__ __volatile__(	"movl 	$0x1b,	%%ecx	\n\t"
				"rdmsr	\n\t"
				"bts	$10,	%%eax	\n\t"
				"bts	$11,	%%eax	\n\t"
				"wrmsr	\n\t"
				"movl 	$0x1b,	%%ecx	\n\t"
				"rdmsr	\n\t"
				:"=a"(x),"=d"(y)
				:
				:"memory");

	printk("eax:%08x,edx:%08x\t",x,y);
	
	if(x&0xc00)
		printk("xAPIC & x2APIC enabled\n");

    /*置位SVR[8]以及SVR[12]来开启Local APIC和禁止广播EOI消息功能*/
	//enable SVR[8]
	__asm__ __volatile__(	"movl 	$0x80f,	%%ecx	\n\t"
				"rdmsr	\n\t"
				"bts	$8,	%%eax	\n\t"
				"bts	$12,	%%eax\n\t"
				"wrmsr	\n\t"
				"movl 	$0x80f,	%%ecx	\n\t"
				"rdmsr	\n\t"
				:"=a"(x),"=d"(y)
				:
				:"memory");

	printk("eax:%08x,edx:%08x\t",x,y);

	if(x&0x100)
		printk("SVR[8] enabled\n");
	if(x&0x1000)
		printk("SVR[12] enabled\n");
    /*读取MSR寄存器组的0x802和0x803寄存器来取得Local APIC的相关基础信息  */
	//get local APIC ID
	__asm__ __volatile__(	"movl $0x802,	%%ecx	\n\t"
				"rdmsr	\n\t"
				:"=a"(x),"=d"(y)
				:
				:"memory");
	
	printk("eax:%08x,edx:%08x\tx2APIC ID:%08x\n",x,y,x);
	
	//get local APIC version
	__asm__ __volatile__(	"movl $0x803,	%%ecx	\n\t"
				"rdmsr	\n\t"
				:"=a"(x),"=d"(y)
				:
				:"memory");

	printk("local APIC Version:%08x,Max LVT Entry:%08x,SVR(Suppress EOI Broadcast):%08x\t",x & 0xff,(x >> 16 & 0xff) + 1,x >> 24 & 0x1);

	if((x & 0xff) < 0x10)
		printk("82489DX discrete APIC\n");

	else if( ((x & 0xff) >= 0x10) && ((x & 0xff) <= 0x15) )
		printk("Integrated APIC\n");

    /*屏蔽LVT中所有中断投递功能*/
	//mask all LVT	
	__asm__ __volatile__(	"movl 	$0x82f,	%%ecx	\n\t"	//CMCI
				"wrmsr	\n\t"
				"movl 	$0x832,	%%ecx	\n\t"	//Timer
				"wrmsr	\n\t"
				"movl 	$0x833,	%%ecx	\n\t"	//Thermal Monitor
				"wrmsr	\n\t"
				"movl 	$0x834,	%%ecx	\n\t"	//Performance Counter
				"wrmsr	\n\t"
				"movl 	$0x835,	%%ecx	\n\t"	//LINT0
				"wrmsr	\n\t"
				"movl 	$0x836,	%%ecx	\n\t"	//LINT1
				"wrmsr	\n\t"
				"movl 	$0x837,	%%ecx	\n\t"	//Error
				"wrmsr	\n\t"
				:
				:"a"(0x10000),"d"(0x00)
				:"memory");

	printk("Mask ALL LVT\n");
    /*获取TPR和PPR寄存器的当前值*/
	//TPR
	__asm__ __volatile__(	"movw 	$0x808,	%%ecx	\n\t"
				"rdmsr	\n\t"
				:"=a"(x),"=d"(y)
				:
				:"memory");

	printk("Set LVT TPR:%08x\t",x);

	//PPR
	__asm__ __volatile__(	"movl 	$0x80a,	%%ecx	\n\t"
				"rdmsr	\n\t"
				:"=a"(x),"=d"(y)
				:
				:"memory");

	printk("Set LVT PPR:%08x\n",x);
}
/*void IOAPIC_init()
{
	int i ;
	//	I/O APIC
	//	I/O APIC	ID	
	*ioapic_map.virtual_index_address = 0x00;
	io_mfence();
	*ioapic_map.virtual_data_address = 0x0f000000;
	io_mfence();
	color_printk(GREEN,BLACK,"Get IOAPIC ID REG:%#010x,ID:%#010x\n",*ioapic_map.virtual_data_address, *ioapic_map.virtual_data_address >> 24 & 0xf);
	io_mfence();

	//	I/O APIC	Version
	*ioapic_map.virtual_index_address = 0x01;
	io_mfence();
	color_printk(GREEN,BLACK,"Get IOAPIC Version REG:%#010x,MAX redirection enties:%#08d\n",*ioapic_map.virtual_data_address ,((*ioapic_map.virtual_data_address >> 16) & 0xff) + 1);

	//RTE	
	for(i = 0x10;i < 0x40;i += 2)
		ioapic_rte_write(i,0x10020 + ((i - 0x10) >> 1));

	ioapic_rte_write(0x12,0x21);
	color_printk(GREEN,BLACK,"I/O APIC Redirection Table Entries Set Finished.\n");	
}*/

void APIC_IOAPIC_init()
{
	//	init trap abort fault
	int i ;
	unsigned int x;
	unsigned int * p;

	//IOAPIC_pagetable_remap();

	/*for(i = 32;i < 56;i++)
	{
		set_intr_gate(i , 2 , interrupt[i - 32]);
	}*/

	//mask 8259A
	//color_printk(GREEN,BLACK,"MASK 8259A\n");
	outb(0x21,0xff);
	outb(0xa1,0xff);

	//enable IMCR
	outb(0x22,0x70);
	outb(0x23,0x01);	
	
	//init local apic
	Local_APIC_init();

	//init ioapic
	//IOAPIC_init();

	//get RCBA address
	outl(0xcf8,0x8000f8f0);
	x = inl(0xcfc);
	printk("Get RCBA Address:%08x\n",x);	
	x = x & 0xffffc000;
	printk("Get RCBA Address:%08x\n",x);	

	//get OIC address
//	if(x > 0xfec00000 && x < 0xfee00000)
//	{
//		p = (unsigned int *)Phy_To_Virt(x + 0x31feUL);
//	}

	//enable IOAPIC
	x = (x & 0xffffff00) | 0x100;
	io_mfence();
	//*p = x;
	io_mfence();

	//enable IF eflages
	//sti();
    enable_interupt();
}
