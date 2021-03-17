#include "mp_config.h"
#include "../mem/memlayout.h"
#include "../asm/asm.h"
#define NULL (void *)0
mp_floating_pointer_t*    m_floating_pointer;
mp_config_table_header_t* m_config_table_header;
void mp_floating_dump(){
    char *signature=(char *)&(m_floating_pointer->m_signature);
    printk("mp floating pointer: \n");
    printk("m_signature:    %c%c%c%c\n", signature[0], signature[1], 
        signature[2], signature[3]);
    printk("physical addr:  %x\n", m_floating_pointer->m_phy_addr);
    printk("length:         %x\n", m_floating_pointer->m_length);
    printk("spec rev:       %x\n", m_floating_pointer->m_spec_rev);
    printk("type:           %x\n", m_floating_pointer->m_type);
    printk("imcrp:          %x\n", m_floating_pointer->m_imcrp);
}
unsigned char check_sum(void* addr, int len)
{
    unsigned char* p = (unsigned char *) addr;
    unsigned char sum = 0;
    for (int i = 0; i < len; i++) {
        sum += p[i];
    }
    return sum;
}
mp_floating_pointer_t *find_floating_pointer(unsigned int paddr, unsigned int len){
    unsigned char* va = (unsigned char *)PA_LA(paddr);
    unsigned int sz = sizeof(mp_floating_pointer_t);
    if (sz != 16) {
        printk("the size of mp_floating_pointer_t is error!");
    }

    for (char* p = (char *) va; p < (char *) va + len; p += sz) {
        if (memcmp(p, "_MP_",4) != 0) {
            continue;
        }

        unsigned char sum = check_sum(p, sz);
        if (sum == 0) {
            return (mp_floating_pointer_t *) p;
        }
        printk("sum = %d\n", sum);
    }

    return NULL;
}
mp_floating_pointer_t *check_floating_pointer_existed(){
    const unsigned int c_kb = 1024;
    mp_floating_pointer_t* fp = NULL;

    /* 400- 4FF BIOS data area (BDA) */
    unsigned char* bios_data_area = (unsigned char *) PA_LA(0x400);

    /* 40:0E    word    Extended BIOS Data Area segment */
    unsigned int extended_bios_data_area = (*(unsigned short *)(bios_data_area + 0x0e)) << 4;
    printk("extended_bios_data_area: %x\n", extended_bios_data_area);

    /* a. first kb of ebda */
    if (extended_bios_data_area != NULL) {
        fp = find_floating_pointer(extended_bios_data_area, c_kb);
        printk("look for floating pointer form extended_bios_data_area: %x\n", fp);
        if (fp != NULL) {
            return fp;
        }
    }
    else {
        /* 40:13    word    Memory size in Kbytes */
        unsigned int base_memory = (*(unsigned short *)(bios_data_area + 0x13)) * c_kb;
        //unsigned int base_memory = 640*c_kb;
        printk("system base memory: %x, \n", base_memory);

        /* b. last kb of system base memory */
        fp = find_floating_pointer(base_memory, c_kb);
        printk("look for floating pointer form system base memory: %x\n", fp);
        if (fp != NULL) {
            return fp;
        }
    }

    /* c. In the BIOS ROM address space between 0F0000h and 0FFFFFh. */
    fp = find_floating_pointer(0xF0000, 0x10000);
    printk("look for floating pointer form 0xf0000-0x100000: %x\n", fp);

    return fp;
}

/********************************************************************************/
void mp_config_table_dump(){
    char* signature = (char *)&(m_config_table_header->m_signature);
    printk("mp config table header: \n");
    printk("m_signature:    %c%c%c%c\n", signature[0], signature[1], 
        signature[2], signature[2]);
    printk("table length:   %x\n", m_config_table_header->m_table_length);
    printk("spec rev        %x\n", m_config_table_header->m_spec_rev);
    printk("oem id          %s\n", m_config_table_header->m_oem_id);
    printk("product id      %s\n", m_config_table_header->m_product_id);
    printk("product pointer %x\n", m_config_table_header->m_oem_table_pointer);
    printk("entry count:    %x\n", m_config_table_header->m_entry_count);
}
mp_config_table_header_t *find_config_table(){
    m_floating_pointer = check_floating_pointer_existed();
    printk("m_floating_pointer: %x\n", m_floating_pointer);
    if (m_floating_pointer == NULL) {
        return NULL;
    }

    mp_floating_dump();
    m_config_table_header = (mp_config_table_header_t *)PA_LA(m_floating_pointer->m_phy_addr);
    if (m_config_table_header == NULL) {
        return NULL;
    }
    if (memcmp((char *)&m_config_table_header->m_signature, "PCMP", 4) != 0) {
        return NULL;
    }

    unsigned char sum = check_sum(m_config_table_header, m_config_table_header->m_table_length);
    if (sum == 0) {
        return m_config_table_header;
    }

    printk("config table header sum = %d\n", sum);
    return NULL;
}
void mp_config_processor_dump(mp_config_processor_entry_t *a)
{
    printk("mp config process entry: \n");
    printk("local apic id:      %x\n", a->m_local_apic_id);
    printk("local apic version: %x\n", a->m_local_apic_version);
    printk("cpu flags:          %x\n", a->m_cpu_flags);
    printk("signature:          %x\n", a->m_signature);
    printk("feature flags:      %x\n", a->m_feature_flags);
}
void mp_config_bus_dump(mp_config_bus_entry_t *a){
        char type[7] = {0};
    memcpy(type, (char *) a->m_bus_type, 6);
    printk("mp config bus entry: \n");
    printk("bus id:      %x\n", a->m_bus_id);
    printk("bus type:    %s\n", type);
}
void mp_config_io_apic_dump(mp_config_io_apic_entry_t *a)
{
    printk("mp config io apic entry: \n");
    printk("io apic id:       %x\n", a->m_io_apic_id);
    printk("io apic version:  %x\n", a->m_io_apic_version);
    printk("io apic flags:    %x\n", a->m_io_apic_flags);
    printk("mem map address:  %x\n", a->m_mem_map_addr);
}

void mp_config_io_interrupt_dump(mp_config_io_interrupt_entry_t *a)
{
    printk("interrupt type:     %x,", a->m_interrupt_type);
    printk("io interrupt flag:  %x,", a->m_io_interrupt_flag);
    printk("source bus id:      %x,", a->m_source_bus_id);
    printk("source bus irq:     %x,", a->m_source_bus_irq);
    printk("dest io apic id:    %x,", a->m_destination_io_apic_id);
    printk("dest io apic intin: %x\n", a->m_destination_io_apic_intin);
}

void mp_config_local_interrupt_dump(mp_config_local_interrupt_entry_t *a)
{
    printk("mp config local interrupt entry: \n");
    printk("interrupt type:        %x\n", a->m_interrupt_type);
    printk("local interrupt flag:  %x\n", a->m_local_interrupt_flag);
    printk("source bus id:         %x\n", a->m_source_bus_id);
    printk("source bus irq:        %x\n", a->m_source_bus_irq);
    printk("dest local apic id:    %x\n", a->m_destination_local_apic_id);
    printk("dest local apic intin: %x\n", a->m_destination_local_apic_lintin);
}
void parse_config_entries()
{
    unsigned char* config = (unsigned char *) (m_config_table_header + 1);
    unsigned char* end = (unsigned char *) (m_config_table_header) + m_config_table_header->m_table_length;
    while (config < end) {
        switch (*config) {
        case entry_processor:
            {
                mp_config_processor_entry_t* e = (mp_config_processor_entry_t *) config;
                mp_config_processor_dump(e);
                config += sizeof(mp_config_processor_entry_t);
            }
            break;
        case entry_bus:
            {
                mp_config_bus_entry_t* e = (mp_config_bus_entry_t *) config;
                //mp_config_bus_dump(e);
                config += sizeof(mp_config_bus_entry_t);
            }
            break;
        case entry_io_apic:
            {
                mp_config_io_apic_entry_t* e = (mp_config_io_apic_entry_t *) config;
                //mp_config_io_apic_dump(e);
                config += sizeof(mp_config_io_apic_entry_t);
            }
            break;
        case entry_io_interrupt:
            {
                mp_config_io_interrupt_entry_t* e = (mp_config_io_interrupt_entry_t *) config;
                //mp_config_io_interrupt_dump(e);
                config += sizeof(mp_config_io_interrupt_entry_t);
            }
            break;
        case entry_local_interrupt:
            {
                mp_config_local_interrupt_entry_t* e = (mp_config_local_interrupt_entry_t *) config;
                //mp_config_local_interrupt_dump(e);
                config += sizeof(mp_config_local_interrupt_entry_t);
            }
            break;
        default:
            printk("unknown mp config entry type %u!\n", *config);
            break;
        }
    }
}
void mp_config_init(){
    m_floating_pointer=NULL;
    m_config_table_header=NULL;
    printk("---------------------init mp_config...----------------\n");
    m_config_table_header = find_config_table();
    printk("m_config_table_header: %x\n", m_config_table_header);
    if (m_config_table_header != NULL) {
        mp_config_table_dump();
        clear();
        parse_config_entries();
    }
    printk("---------------------init mp_config...----------------\n");
}