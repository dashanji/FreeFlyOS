#ifndef _PCI_H_
#define _PCI_H_
#define PCI_CONFIG_ADDR                 0xCF8
#define PCI_CONFIG_DATA                 0xCFC

#define PCI_CONFIG_VENDOR               0x00
#define PCI_CONFIG_COMMAND              0x04
#define PCI_CONFIG_CLASS_REV            0x08
#define PCI_CONFIG_HDR_TYPE             0x0C
#define PCI_CONFIG_BASE_ADDR0           0x10
#define PCI_CONFIG_INTR                 0x3C

#define PCI_BASE_ADDR_MEM_MASK           (~0x0FUL)
#define PCI_BASE_ADDR_IO_MASK            (~0x03UL)
enum type_e {
        TYPE_INVALID = -1,
        TYPE_MEM = 0,
        TYPE_IO,
    };
typedef struct pci_device_bar_t{
    unsigned int type;
    unsigned int base_addr;
    unsigned int length;
}pci_device_bar;
typedef struct pci_device{
    unsigned char            bus;
    unsigned char            dev;
    unsigned char            function;

    unsigned short           vendor_id;
    unsigned short           device_id;
    unsigned int             class_code;
    char                     multi_function;
    unsigned char            interrupt_line;
    unsigned char            interrupt_pin;
    unsigned char            revision;
    pci_device_bar           bar[6];
}pci_device_t;
unsigned int pci_read(unsigned int bus, unsigned int device, unsigned int function, unsigned int addr);
void pci_write(unsigned int bus, unsigned int device, unsigned int function, unsigned int addr, unsigned int val);
void check_device(unsigned char bus, unsigned char device);
void enum_buses();
void pci_device_init(pci_device_t *pdt,unsigned char bus, unsigned char dev, unsigned char function, unsigned short vendor_id, unsigned short device_id, 
                unsigned int class_code, unsigned char revision, char multi_function);
void pci_device_bar_init(pci_device_bar *pci_db,unsigned int addr_reg_val, unsigned int len_reg_val);
void dump(pci_device_t *pdt);
void enable_bus_mastering(pci_device_t* device);
void pci_init();
#endif