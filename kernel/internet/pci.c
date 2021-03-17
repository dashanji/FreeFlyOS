#include "pci.h"
#include "../asm/asm.h"
#include "../vga/vga.h"
#include "../mem/vmm.h"
pci_device_t pci_devices[20];
unsigned int pci_devices_num=0;
unsigned int pci_read(unsigned int bus, unsigned int device, unsigned int function, unsigned int addr)
{
    outl(PCI_CONFIG_ADDR, ((unsigned int) 0x80000000 | (bus << 16) | (device << 11) | (function << 8) | addr));
    return inl(PCI_CONFIG_DATA);
}

void pci_write(unsigned int bus, unsigned int device, unsigned int function, unsigned int addr, unsigned int val)
{
    outl(PCI_CONFIG_ADDR, ((unsigned int) 0x80000000 | (bus << 16) | (device << 11) | (function << 8) | addr));
    outl(PCI_CONFIG_DATA, val);
}
void check_device(unsigned char bus, unsigned char device)
{
    unsigned char function = 0;

    unsigned int val = pci_read(bus, device, function, PCI_CONFIG_VENDOR);
    if(val!=0){
        unsigned short vendor_id = val & 0xffff;
        unsigned short device_id = val >> 16;
        if (vendor_id == 0xffff) {
            return;
        }

        val = pci_read(bus, device, function, PCI_CONFIG_HDR_TYPE);
        unsigned char header_type = ((val >> 16));

        val = pci_read(bus, device, function, PCI_CONFIG_COMMAND);
        unsigned short command = val & 0xffff;

        val = pci_read(bus, device, function, PCI_CONFIG_CLASS_REV);
        unsigned int classcode = val >> 8;
        unsigned char revision = val & 0xFF;

        //pci_device_t *pci_device=vmm_malloc(sizeof(pci_device_t),1);
        pci_device_init(&pci_devices[pci_devices_num],bus, device, function, vendor_id, device_id, classcode, revision, (header_type & 0x80));

        for (int bar = 0; bar < 6; bar++) {
            int reg = PCI_CONFIG_BASE_ADDR0 + (bar*4);
            val = pci_read(bus, device, function, reg);
            pci_write(bus, device, function, reg, 0xffffffff);
            unsigned int len = pci_read(bus, device, function, reg);
            pci_write(bus, device, function, reg, val);

            if (len != 0 && len != 0xffffffff) {
                pci_device_bar_init(&(pci_devices[pci_devices_num].bar[bar]),val, len);
            }
        }

        val = pci_read(bus, device, function, PCI_CONFIG_INTR);
        if ((val & 0xff) > 0 && (val & 0xff) < 32) {
            unsigned int irq = val & 0xff;
            pci_devices[pci_devices_num].interrupt_line = irq;
        }
        pci_devices_num++;
    }
    //%02x
    //printk("pci device at bus: %c, device: %c", bus, device);
    //dump(pci_device);
    //vmm_free(pci_device,sizeof(pci_device_t));
}

void enum_buses()
{
    for (unsigned short bus = 0; bus < 256; bus++) {
        for (unsigned char device = 0; device < 32; device++) {
            check_device(bus, device);
        }
    }
}
void pci_device_bar_init(pci_device_bar *pci_db,unsigned int addr_reg_val, unsigned int len_reg_val)
{
    if (addr_reg_val == 0xffffffff) {
        addr_reg_val = 0;
    }

    if (addr_reg_val & 1) {
        pci_db->type = TYPE_IO;
        pci_db->base_addr = addr_reg_val  & PCI_BASE_ADDR_IO_MASK;
        pci_db->length    = ~(len_reg_val & PCI_BASE_ADDR_IO_MASK) + 1;
    }
    else {
        pci_db->type = TYPE_MEM;
        pci_db->base_addr = addr_reg_val  & PCI_BASE_ADDR_MEM_MASK;
        pci_db->length    = ~(len_reg_val & PCI_BASE_ADDR_MEM_MASK) + 1;
    }
}
//
void pci_device_init(pci_device_t *pdt,unsigned char bus, unsigned char dev, unsigned char function, unsigned short vendor_id, unsigned short device_id, 
                unsigned int class_code, unsigned char revision, char multi_function){
                pdt->bus=bus;
                pdt->dev=dev;
                pdt->function=function;
                pdt->vendor_id=vendor_id;
                pdt->device_id=device_id;
                pdt->class_code=class_code;
                pdt->multi_function=multi_function;
                pdt->revision=revision;
}
void dump(pci_device_t *pdt){
    printk("vendor id:      0x%08x", pdt->vendor_id);
    printk("device id:      0x%08x", pdt->device_id);
    printk("class code:     0x%08x", pdt->class_code);
    printk("revision:       0x%08x", pdt->revision);
    printk("multi function: %c", pdt->multi_function);
    printk("interrupt line: %02x", pdt->interrupt_line);
    printk("interrupt pin:  %02x", pdt->interrupt_pin);
    for (int i = 0; i < 6; i++) {
        if (pdt->bar[i].type != TYPE_INVALID) {
            printk("bar %02x: ", i);
            printk("type: %s, ", pdt->bar[i].type == TYPE_IO ? "io base address" : "mem base address");
            printk("base address: 0x%08x, ", pdt->bar[i].base_addr);
            printk("len: 0x%08x", pdt->bar[i].length);
        }
    }
}
void enable_bus_mastering(pci_device_t* device)
{
    unsigned int val = pci_read(device->bus, device->dev, device->function, PCI_CONFIG_COMMAND);
    val |= 4;
    pci_write(device->bus, device->dev, device->function, PCI_CONFIG_COMMAND, val);

    val = pci_read(device->bus, device->dev, device->function, PCI_CONFIG_COMMAND);
    printk("after enable bus mastering, command: %08x\n", val);
}
void pci_init(){
    printk("\n");
    printk("********************** init pci **********************\n");
    pci_devices_num=0;
   // m_device_pool.init(sizeof(pci_device_t));
   // m_devices.init(os()->get_obj_pool_of_size());
    enum_buses();

    printk("********************** init pci **********************\n");
    printk("\n");
}