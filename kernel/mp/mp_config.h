
/* MultiProcessor Specification v1.4, 4.MP Configuration Table
 * The MP Floating Pointer Structure. This structure contains a physical address pointer to the
 * MP configuration table and other MP feature information bytes. When present, this structure
 * indicates that the system conforms to the MP specification. This structure must be stored in at
 * least one of the following memory locations, because the operating system searches for the MP
 * floating pointer structure in the order described below:
 *  a. In the first kilobyte of Extended BIOS Data Area (EBDA), or
 *  b. Within the last kilobyte of system base memory (e.g., 639K-640K for systems with 640
 *     KB of base memory or 511K-512K for systems with 512 KB of base memory) if the
 *     EBDA segment is undefined, or
 *  c. In the BIOS ROM address space between 0F0000h and 0FFFFFh.
 */
typedef struct mp_floating_pointer_s {
    /* ASCII string "_MP_" */
    unsigned int m_signature;

    /* the address of beginning of the MP confgi table, all 0 if config table not exist */
    unsigned int m_phy_addr;

    /* the length of the floating pointer structure table in paragraph(16 byte) units */
    unsigned char  m_length;

    /* version of MP spec supported. 01 : Version 1.1, 04: version 1.4 */
    unsigned char  m_spec_rev;

    /* all bytes specified by the length, including checksum and reserved bytes, 
     * must add up to 0 */
    unsigned char  m_checksum;

    /* all 0: MP config table present, else: the value indicates 
     * which default config is implemented by the system */
    unsigned char  m_type;          

    /* bit 7: IMCRP, when this bit is set, IMCR is present and PIC mode is implemented,
     * else, Virtual Wire Mode is implemented */
    unsigned char  m_imcrp;

    /* reserved for future MP definitions, Must be 0 */
    unsigned char  m_reserved[3];

} mp_floating_pointer_t;

typedef struct mp_config_table_header_s {
    /* ASCII string "PCMP" */
    unsigned int m_signature;

    /* the length of the base configuration table in bytes including the header */
    unsigned short m_table_length;

    /* the version number of the MP specification, 0x01 v1.1, 0x04 v1.4 */
    unsigned char  m_spec_rev;

    /* all bytes including checksum and reserved bytes must add up to 0 */
    unsigned char  m_checksum;

    /* a string that identifies the manufacturer of the system hardware */
    unsigned char  m_oem_id[8];

    /* a string that identifies the product family */
    unsigned char  m_product_id[12];

    /* a physical address pointer to an OEM-defined configuration table */
    unsigned int m_oem_table_pointer;

    /* size of the base OEM table in bytes */
    unsigned short m_oem_table_size;

    /* the number of entries in the variable portion of the base table */
    unsigned short m_entry_count;

    /* the base address by which each processor accesses it's local APIC */
    unsigned int m_local_apic_addr;

    /* length in bytes of the extended entries that are located in memory 
     * at the end of the base configuration table */
    unsigned short m_ext_table_len;

    /* check sum for the set of extended table entries */
    unsigned char  m_ext_table_checksum;

    unsigned char  reserved;

} mp_config_table_header_t;
typedef enum mp_config_entry_type_e {
    entry_processor = 0,        /* one entry per processor */
    entry_bus,                  /* one entry per bus */
    entry_io_apic,              /* one entry per I/O APIC */
    entry_io_interrupt,         /* one entry per bus interrupt source */
    entry_local_interrupt,      /* one entry per system interrupt source */
} mp_config_entry_type_t;
typedef struct mp_config_processor_entry_s {
    /* value of 0 */
    unsigned char   m_entry_type;

    /* the local APIC ID number for the particular processor */
    unsigned char   m_local_apic_id;

    /* bits 0-7 of the local APIC's version register */
    unsigned char   m_local_apic_version;

    /* CPU FLAGS: EN 3:0, if 0, the processor is unusable and OS should not attempt to access it *
     * CPU FLAGS: BP 3:1, set if specified processor is bootstrap processor */
    unsigned char   m_cpu_flags;

    unsigned int  m_signature;
    unsigned int  m_feature_flags;
    unsigned int  m_reserved[2];
} mp_config_processor_entry_t;
typedef struct mp_config_bus_entry_s {
    unsigned char   m_entry_type;
    unsigned char   m_bus_id;
    unsigned char   m_bus_type[6];

} mp_config_bus_entry_t;

typedef struct mp_config_io_apic_entry_s {
    unsigned char   m_entry_type;
    unsigned char   m_io_apic_id;
    unsigned char   m_io_apic_version;
    unsigned char   m_io_apic_flags;
    unsigned int  m_mem_map_addr;

} mp_config_io_apic_entry_t;

typedef struct mp_config_io_interrupt_entry_s {
    unsigned char   m_entry_type;
    unsigned char   m_interrupt_type;
    unsigned short  m_io_interrupt_flag;
    unsigned char   m_source_bus_id;
    unsigned char   m_source_bus_irq;
    unsigned char   m_destination_io_apic_id;
    unsigned char   m_destination_io_apic_intin;

} mp_config_io_interrupt_entry_t;

typedef struct mp_config_local_interrupt_entry_s {
    unsigned char   m_entry_type;
    unsigned char   m_interrupt_type;
    unsigned short  m_local_interrupt_flag;
    unsigned char   m_source_bus_id;
    unsigned char   m_source_bus_irq;
    unsigned char   m_destination_local_apic_id;
    unsigned char   m_destination_local_apic_lintin;

} mp_config_local_interrupt_entry_t;
void mp_floating_dump();
unsigned char check_sum(void* addr, int len);
mp_floating_pointer_t *find_floating_pointer(unsigned int paddr, unsigned int len);
mp_floating_pointer_t *check_floating_pointer_existed();
void mp_config_table_dump();
mp_config_table_header_t *find_config_table();
void mp_config_processor_dump(mp_config_processor_entry_t *a);
void mp_config_bus_dump(mp_config_bus_entry_t *a);
void mp_config_io_apic_dump(mp_config_io_apic_entry_t *a);
void mp_config_io_interrupt_dump(mp_config_io_interrupt_entry_t *a);
void mp_config_local_interrupt_dump(mp_config_local_interrupt_entry_t *a);
void parse_config_entries();
void mp_config_init();