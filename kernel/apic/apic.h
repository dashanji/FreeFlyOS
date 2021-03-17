/**********************  多核  ***************************/
#define APIC_BASE       (0xfee00000)
#define HZ (100)
#define CALIBRATE_LOOP              (HZ/10)
#define MSR_IA32_APICBASE		    (0x1b)
#define MSR_IA32_APICBASE_ENABLE	(1<<11)

#define	APIC_ID		0x20
#define	APIC_LVR	0x30
#define APIC_TPR    0x80
#define	APIC_EOI	0xb0
#define	APIC_SPIV	0xf0

/* Local Vector Table */
#define APIC_LVT_CMCI   0x2f0   /* LVT Machine Check */
#define APIC_ICR_LOW    0x300   /* Interrupt Command Register 0-31 */
#define APIC_ICR_HIGH   0x310   /* Interrupt Command Register 32-63 */
#define	APIC_LVT_TIMER	0x320   /* LVT Timer register */
#define	APIC_LVT_THMR	0x330   /* LVT Thermal Sensor register */
#define	APIC_LVT_PMCR	0x340   /* LVT Performance Monitoring Counter register */
#define	APIC_LVT_LINT0	0x350   /* LVT LINT0 register */
#define	APIC_LVT_LINT1	0x360   /* LVT LINT1 register */
#define	APIC_LVT_ERROR	0x370   /* LVT Error register */

#define		APIC_SPIV_DIRECTED_EOI		(1 << 12)
#define		APIC_SPIV_FOCUS_DISABLED	(1 << 9)
#define		APIC_SPIV_APIC_ENABLED		(1 << 8)

/* Timer */
#define	APIC_TIMER_ICT	0x380   /* Timer initial count register */
#define	APIC_TIMER_CCT	0x390   /* Timer current count register */
#define	APIC_TIMER_DCR	0x3E0   /* Timer divide configuration register */

#define MASKED          0x00010000   /* Interrupt masked */

/* ICR */
#define APIC_DM_INIT        0x500
#define APIC_DM_STARTUP     0x600
#define APIC_INT_ASSERT     0x4000
#define APIC_INT_LEVEL_TRIG 0x8000

#define IO_APIC_REG_ID      0x00
#define IO_APIC_REG_VER     0x01
#define IO_APIC_REG_TABLE   0x10    /* redirection table */

#define INT_DISABLED        0x00010000

#define IO_APIC_BASE     0xfec00000  /* default address map */

/* SPIV */
#define APIC_SOFT_ENABLE    (0x100)

#define rdmsr(msr,val1,val2) \
    __asm__ volatile("rdmsr" \
              : "=a" (val1), "=d" (val2) \
              : "c" (msr))

#define wrmsr(msr,val1,val2) \
    __asm__ volatile("wrmsr" \
              : /* no outputs */ \
              : "c" (msr), "a" (val1), "d" (val2))

#define rdtsc(low,high) \
     __asm__ __volatile__("rdtsc" : "=a" (low), "=d" (high))

#define rdtsc64(val) \
     __asm__ __volatile__("rdtsc" : "=A" (val))

#define io_mfence() 	__asm__ __volatile__ ("mfence	\n\t":::"memory")
/**********************  多核  ***************************/
void apic_write(unsigned int reg, unsigned int v);
void apic_write64(unsigned long long reg, unsigned long long v);
unsigned int apic_read(unsigned int reg);
unsigned long long apic_read64(unsigned int reg);
void test_apic();
int check();
void setup_lvt_timer(unsigned int clocks);
unsigned int calibrate_clock();
int init_timer();
int init_apic();
void init_lapic(void);
void do_timer_irq();
void eoi();
void ioapic_init();
void enable_irq(unsigned int irq, unsigned int cpu_id);
unsigned int ioapic_read(unsigned int reg);
void ioapic_write(unsigned int reg, unsigned int data);
void get_cpuid(unsigned int Mop,unsigned int Sop,unsigned int * a,unsigned int * b,unsigned int * c,unsigned int * d);
void Local_APIC_init();
void APIC_IOAPIC_init();