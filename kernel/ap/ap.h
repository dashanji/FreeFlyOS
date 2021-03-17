/* ap start args */
#define AP_PGDIR            (0x8110)
#define AP_KSTACK           (AP_PGDIR + 4)
#define AP_MAIN             (AP_KSTACK + 4)
#define AP_INDEX            (AP_MAIN + 4)

#define AP_START_ADDR       (0x9000)    /* 36k, APs will start from here */

#define SEG_KCODE           (1)
#define SEG_KDATA           (2)
/* for cr0 */
#define CR0_PE              0x00000001
#define CR0_PG              0x80000000
#define CR0_WP              0x00010000

#define CPU_NUM 2
