#include "rtl8139.h"
#include "pci.h"
#include "../asm/asm.h"
#include "../mem/vmm.h"
#include "../mem/memlayout.h"
#include "../apic/apic.h"
#include "../vga/vga.h"
#include "../interrupt/trap.h"
#define ETH_ADDR_LEN 6
extern pci_device_t pci_devices[20];
extern unsigned int pci_devices_num;
rtl8139 rtl;
unsigned int get_info_from_pci()
{
    pci_device_t *device;
    /* get pci device */
    for(int i=0;i<pci_devices_num;i++){
        if(pci_devices[i].vendor_id==RTL8139_VENDOR_ID
            &&pci_devices[i].device_id==RTL8139_DEVICE_ID){
                device=&pci_devices[i];
                break;
        }
    }
    if (device == NULL) {
        printk( "RTL8139 init failed: not find pci device.\n");
        return -1;
    }
    printk("find rtl8139 device, vendor id: 0x%08x, device id: 0x%08x\n",
            device->vendor_id, device->device_id);

    /* enable bus mastering */
    enable_bus_mastering(device);

    /* get io address */
    for (int i = 0; i < 6; i++) {
        if (device->bar[i].type == TYPE_IO) {
            rtl.io_address = device->bar[i].base_addr;
            break;
        }
        rtl.io_address = 0;
    }
    
    if (rtl.io_address == 0) {
        printk("RTL8139 init failed: INVALID pci device io address.\n");
        return -1;
    }
    printk("rlt8139 io address: 0x%08x\n", rtl.io_address);

    /* get irq */
    rtl.irq = device->interrupt_line;
    if (rtl.irq == 0xff) {
        printk("RTL8139 init failed: INVALID irq.\n");
        return -1;
    }
    printk( "rlt8139 irq: %08x\n", rtl.irq);

    return 0;
}

void rtl8139_init()
{
    printk("*********************** init RTL8139 ****************************\n");
    rtl.inited = 0;
    if (get_info_from_pci(&rtl) != 0) {
        return;
    }

    /* mac address */
    for (int i = 0; i < 6; i++) {
        rtl.mac_addr[i] = inb(rtl.io_address + RTL8139_MAC + i);
    }
   // os()->get_net()->set_eth_addr(rtl.mac_addr);
    printk("mac addr: %02x:%02x:%02x:%02x:%02x:%02x\n", rtl.mac_addr[0], rtl.mac_addr[1],
            rtl.mac_addr[2], rtl.mac_addr[3], rtl.mac_addr[4], rtl.mac_addr[5]);

    /* send 0x00 to CONFIG_1 register to set the LWAKE + LWPTN to active high, 
     * this should essentially power on the device */
    outb(rtl.io_address + RTL8139_CONFIG_1, 0x00);

    /* software reset, to clear the RX and TX buffers and set everything back to defaults */
    outb(rtl.io_address + RTL8139_COMMAND, 0x10);
    while ((inb(rtl.io_address + RTL8139_COMMAND) & 0x10) != 0) {
        nop();
    }

    /* init receive buffer */
    rtl.rx_buffer = (unsigned char *) vmm_malloc(1024*4,1);
    rtl.current_rx = 0;
    rtl.rx_buf_len = 32*1024;

    outl(rtl.io_address + RTL8139_RX_BUF_ADDR, LA_PA(rtl.rx_buffer));
    outl(rtl.io_address + RTL8139_CAPR, rtl.current_rx);
    outl(rtl.io_address + 0x3a, 0);

    /* init tx buffers */
    rtl.current_tx = 0;
    for (int i = 0; i < 4; i++) {
        rtl.tx_buffers[i] = (unsigned char *) vmm_malloc(1024*2,1);
    }

    /* 
     * set IMR(Interrupt Mask Register)
     * To set the RTL8139 to accept only the Transmit OK (TOK) and Receive OK (ROK) interrupts, 
     * we would have the TOK and ROK bits of the IMR high and leave the rest low. 
     * That way when a TOK or ROK IRQ happens, it actually will go through and fire up an IRQ.
     */
    outw(rtl.io_address + RTL8139_INTR_MASK, RTL8139_RX_OK | RTL8139_TX_OK);
    //outw(m_io_address + RTL8139_INTR_MASK, 0xffff);

    /* 
     * configuring receive buffer(RCR)
     * Before hoping to see a packet coming to you, you should tell the RTL8139 to accept packets 
     * based on various rules. The configuration register is RCR.
     *  AB - Accept Broadcast: Accept broadcast packets sent to mac ff:ff:ff:ff:ff:ff
     *  AM - Accept Multicast: Accept multicast packets.
     *  APM - Accept Physical Match: Accept packets send to NIC's MAC address.
     *  AAP - Accept All Packets. Accept all packets (run in promiscuous mode).
     *  Another bit, the WRAP bit, controls the handling of receive buffer wrap around.
     */
    outl(rtl.io_address + RTL8139_RCR, (2 << 11) | 0xf); /* AB + AM + APM + AAP */

    /* enable receive and transmitter */
    outb(rtl.io_address + RTL8139_COMMAND, 0x0c);

    /* enable interrupt */
    enable_irq(rtl.irq, 0);
    //os()->get_arch()->get_io_apic()->enable_irq(m_irq, os()->get_arch()->get_cpu_num()-1);

    rtl.inited = 1;
    printk("*********************** init RTL8139 ****************************\n\n");
}
void do_rtl8139_irq(rtl8139 *rtl)
{
    printk("interrupt, ");

    unsigned int status = inw(rtl->io_address + RTL8139_INTR_STATUS);
    outw(rtl->io_address + RTL8139_INTR_STATUS, status);

    if (status & RTL8139_RX_OK) {
        receive();
    }
    else if (status & RTL8139_TX_OK) {
        unsigned int tx_status = inl(rtl->io_address + RTL8139_TX_STATUS0);
        printk("TXOK, TX_STATUS0: 0x%08x\n", tx_status);
    }
    else {
        printk("0x%08x\n", status);
    }

    printk("\n");
}
/*    RTL8139传输包
    1、把包拷贝到一段连续物理内存缓冲区中
    2、写下作用描述符
    （1）在这缓冲区起始地址（物理地址）填满
    （2）填满传输状态：包的大小，先前的传输临界点，在TSD中清OWN位（发生在PCI操作中）
    3、如果移到FIFO的数据量达到先前的传输临界点，芯片开始将数据从FIFO中移到line中
    4、当整个包被移到FIFO后，OWN位被设置为1
    5、当整个包被移到line后，TOK（在TSD中）被设置为1
    6、如果TOK（IMR）被设置为1并且TOK（ISR）也被置位接着触发中断
    7、执行中断服务程序，驱动需要清TOK（ISR）状态图：(TOK,OWN)
*/
/*先从应用程序中把数据包拷贝到一段连续的内存中（这段内存就是我们这里要分配的缓存），
然后把这段内存的地址 写进网卡的数据发送地址寄存器(TSAD)中,这个寄存器的偏移量是TxAddr0 =0×20。
在把这个数据包的长度写进另一个寄存器（TSD）中，它的偏移量是TxStatus0 =0× 10。
然后就把这段内存的数据发送到网卡内部的发送缓冲中(FIFO),最后由这个发送缓冲区把数据发送到网线上。*/
int transmit(char* buf, unsigned int len)
{
    memcpy(rtl.tx_buffers[rtl.current_tx], buf, len);
    unsigned int status = inw(rtl.io_address + RTL8139_INTR_STATUS);
    printk("transmit TX_STATUS0: 0x%08x, INTR_STATUS: %x\n", 
            inl(rtl.io_address + RTL8139_TX_STATUS0), status);

    enum intr_status flags;
    flags=intr_save();
    {
        outl(rtl.io_address + RTL8139_TX_ADDR0 + rtl.current_tx * 4, LA_PA(rtl.tx_buffers[rtl.current_tx]));
        outl(rtl.io_address + RTL8139_TX_STATUS0 + rtl.current_tx * 4, (256 << 16) | 0x0 | len);
        rtl.current_tx = (rtl.current_tx + 1) % 4;
        printk("after transmit TX_STATUS0: 0x%08x\n", inl(rtl.io_address + RTL8139_TX_STATUS0));
    }
    intr_restore(flags);

    return 0;
}
/*      receive
      1、line中接受的数据被存放在接收FIFO中
      2、当满足先前的接收临界点后，数据从FIFO中移到接收缓冲区中
      3、在整个包从FIFO中移到接收缓冲区后，接收包头（接收包状态和包长度）被写到先前一个包中
      CBA更新为包尾。
      4、CMD（缓冲区空）和ISR（TOK）被置位
      5、调用中断服务程序，接着驱动清ISR（TOK）并且更新CAPR。
*/

void receive()
{
    printk("RXOK, ");
    unsigned char* rx = rtl.rx_buffer;
    unsigned int cur = rtl.current_rx;

    while ((inb(rtl.io_address + RTL8139_COMMAND) & 0x01) == 0) {
        unsigned int offset = cur % rtl.rx_buf_len;
        unsigned int status = *(unsigned int *) (rx+offset);
        unsigned int size   = status >> 16;

        printk("[0x%08x, 0x%08x] | ", offset, size);
        for (int i = 0; i < 16; i++) {
            printk("%02x ", rx[4 + i + offset]);
        }

        

        cur = (cur + size + 7) & ~3;
        outw(rtl.io_address + RTL8139_CAPR, cur - 16);
    }

    rtl.current_rx = cur;
}

