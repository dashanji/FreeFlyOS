#include "rtl8139.h"
#include "pci.h"
#include "icmp.h"
#include "../asm/asm.h"
#include "../mem/vmm.h"
#include "../mem/memlayout.h"
#include "../apic/apic.h"
#include "../vga/vga.h"
#include "../interrupt/trap.h"
#define ETH_ADDR_LEN 6
extern pci_device_t pci_devices[20];
extern unsigned int pci_devices_num;
unsigned char my_mac[eth_macaddr_len];
unsigned char my_ip[ipaddr_len];
unsigned char my_mask[ipaddr_len];
unsigned char my_gw[ipaddr_len];
struct arp_cache_t *arp_cache;
nb_send_list_t *nb_send_list;
nb_wait_list_t *nb_wait_list;
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
    //构造MAC地址
    my_mac[0]=0x12;//ICMP PING外网可用0x00,0x50,0x56,0xee,0x8f,0x0c
    my_mac[1]=0x34;//;//; //
    my_mac[2]=0x56;//;//; //
    my_mac[3]=0x78;//;//; //
    my_mac[4]=0x9a;//;//; //
    my_mac[5]=0xbc;//;//; // 
    //构造IP地址
    my_ip[0]=192;
    my_ip[1]=168;
    my_ip[2]=0;
    my_ip[3]=2; //2
    //构造掩码地址
    my_mask[0]=255;
    my_mask[1]=255;
    my_mask[2]=255;
    my_mask[3]=0;
    //构造网关地址
    my_gw[0]=172;
    my_gw[1]=16;
    my_gw[2]=170;
    my_gw[3]=2;
   /* char dst_ip_cache[ipaddr_len];
    dst_ip_cache[0]=172;
    dst_ip_cache[1]=16;
    dst_ip_cache[2]=170;
    dst_ip_cache[3]=2;
    char dst_mac_cache[eth_macaddr_len];
    dst_mac_cache[0]=0x00; 
    dst_mac_cache[1]=0x0c;  
    dst_mac_cache[2]=0x29;  
    dst_mac_cache[3]=0x87;  
    dst_mac_cache[4]=0x7e;   
    dst_mac_cache[5]=0xf3;   */
    /*arp_cache初始化，100个槽*/
    arp_cache=(struct arp_cache_t*)vmm_malloc(sizeof(struct arp_cache_t)*ARP_CACHE_NUM,1);
    struct arp_cache_t *p=arp_cache;

    //初始化ARP_CACHE
    for(int i=0;i<ARP_CACHE_NUM;i++,p++){
        memset(p->ip_addr,0,ipaddr_len);
        memset(p->mac_addr,0,eth_macaddr_len);
        list_init(&p->node);
        //放在head后
        /*if(i==1){
                memcpy(p->ip_addr,dst_ip_cache,ipaddr_len);
                memcpy(p->mac_addr,dst_mac_cache,eth_macaddr_len);
        }*/
        list_add_after(&arp_cache->node,&p->node);
    }
    //初始化发送包队列
    nb_send_list=(nb_send_list_t *)vmm_malloc(sizeof(nb_send_list_t)*NET_BUF_SEND_LIST_LENGTH,1);
    nb_send_list_t *send_ite=nb_send_list;
    for(int i=0;i<NET_BUF_SEND_LIST_LENGTH;i++,send_ite++){
        send_ite->nb=NULL;
        list_init(&send_ite->node);
        list_add_after(&nb_send_list->node,&send_ite->node);
    }
    //初始化等待包队列
    nb_wait_list=(nb_wait_list_t *)vmm_malloc(sizeof(nb_wait_list_t)*NET_BUF_WAIT_LIST_LENGTH,1);
    nb_wait_list_t *wait_ite=nb_wait_list;
    for(int i=0;i<NET_BUF_WAIT_LIST_LENGTH;i++,wait_ite++){
        wait_ite->nb=NULL;
        list_init(&wait_ite->node);
        list_add_after(&nb_wait_list->node,&wait_ite->node);
    }
    printk("*********************** init RTL8139 ****************************\n\n");
}
void do_rtl8139_irq(rtl8139 *rtl)
{
    

    unsigned int status = inw(rtl->io_address + RTL8139_INTR_STATUS);
    outw(rtl->io_address + RTL8139_INTR_STATUS, status);

    if (status & RTL8139_RX_OK) {
        printk("receive:\n");
        receive();
        
    }
    else if (status & RTL8139_TX_OK) {
        unsigned int tx_status = inl(rtl->io_address + RTL8139_TX_STATUS0);
        //printk("TXOK, TX_STATUS0: 0x%08x\n", tx_status);
    }
    else {
        //printk("0x%08x\n", status);
    }

    //printk("\n");
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
int transmit(struct net_buf* buf)
{
    printk("transmit:\n");
    memcpy(rtl.tx_buffers[rtl.current_tx], buf->data, buf->data_len);
    unsigned int status = inw(rtl.io_address + RTL8139_INTR_STATUS);
    //printk("transmit TX_STATUS0: 0x%08x, INTR_STATUS: %x\n", 
    //        inl(rtl.io_address + RTL8139_TX_STATUS0), status);

    enum intr_status flags;
    flags=intr_save();
    {
        outl(rtl.io_address + RTL8139_TX_ADDR0 + rtl.current_tx * 4, LA_PA(rtl.tx_buffers[rtl.current_tx]));
        outl(rtl.io_address + RTL8139_TX_STATUS0 + rtl.current_tx * 4, (256 << 16) | 0x0 | buf->data_len);
        rtl.current_tx = (rtl.current_tx + 1) % 4;
    //   printk("after transmit TX_STATUS0: 0x%08x\n", inl(rtl.io_address + RTL8139_TX_STATUS0));
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
   // printk("RXOK, ");
    unsigned char* rx = rtl.rx_buffer;
    unsigned int cur = rtl.current_rx;

    while ((inb(rtl.io_address + RTL8139_COMMAND) & 0x01) == 0) {
        unsigned int offset = cur % rtl.rx_buf_len;
        char* buf = rx + offset;
        unsigned int status = *(unsigned int *) (buf);
        unsigned int size   = status >> 16;

       /* printk("[0x%08x, 0x%08x] | ", offset, size);
        for (int i = 0; i < 16; i++) {
            printk("%02x ", rx[4 + i + offset]);
        }*/
        receive_ef(buf+4,size-4);
        /*struct net_buf nb;
        nb.data=(char *)buf+4;
        nb.data_len=size-4;*/
        
        //for(int i=0;i<nb.data_len;i++)
        //printk("%02x",nb.data[i]);
        //printk("\ndata_len:%d\n",nb.data_len);
        //receive_ip_packet(&nb);
        cur = (cur + size + 7) & ~3;
        outw(rtl.io_address + RTL8139_CAPR, cur - 16);
    }

    rtl.current_rx = cur;
}

//在包发送队列中插入新的包，如果插入成功则返回1，否则返回0
char insert_net_send_list(struct net_buf *nb,char type){
    list_entry_t *head=&nb_send_list->node;
    list_entry_t *ite=head;
    //遍历包发送队列
    while((ite=list_next(ite))!=head){
        nb_send_list_t *nsl=list_to_nb_send_list(ite,node);
        if(nsl->nb==NULL){
            nsl->nb=nb;
            nsl->type=type;
            return 1;
        }
    }
    return 0;
}

//在包发送队列中发送包并删除，如果删除成功则返回1，否则返回0
char delete_net_send_list(struct net_buf *nb,char type){
    list_entry_t *head=&nb_send_list->node;
    list_entry_t *ite=head;
    //遍历包发送队列
    while((ite=list_next(ite))!=head){
        nb_send_list_t *nsl=list_to_nb_send_list(ite,node);
        if(nsl->nb==nb){
            transmit(nsl->nb);
            nsl->nb=NULL;
            return 1;
        }
    }
    return 0;
}

//在包等待队列中插入新的包，如果插入成功则返回1，否则返回0
char insert_net_wait_list(struct net_buf *nb,char type){
    list_entry_t *head=&nb_wait_list->node;
    list_entry_t *ite=head;
    //遍历包等待队列
    while((ite=list_next(ite))!=head){
        nb_wait_list_t *nwl=list_to_nb_wait_list(ite,node);
        if(nwl->nb==NULL){
            nwl->nb=nb;
            nwl->type=type;
            return 1;
        }
    }
    return 0;
}

//在包等待队列中等待APR Reply的IPV4包，如果删除成功则返回1，否则返回0
char delete_net_wait_list(){
    list_entry_t *head=&nb_wait_list->node;
    list_entry_t *ite=head;
    //遍历包等待队列
    while((ite=list_next(ite))!=head){
        nb_wait_list_t *nwl=list_to_nb_wait_list(ite,node);
        if(nwl->nb!=NULL&&nwl->type==IPV4_TYPE){
            if(wake_up_ip_packet(nwl->nb)==1){
                printk("wake up \n");
                insert_net_send_list(nwl->nb,IPV4_TYPE);
                return 1;
            }
        }
    }
    return 0;
}

//清空发送队列的所有包
void clear_net_send_list(){
    list_entry_t *head=&nb_wait_list->node;
    list_entry_t *ite=head;
    //遍历包等待队列
    while((ite=list_next(ite))!=head){
        nb_wait_list_t *nwl=list_to_nb_wait_list(ite,node);
        if(nwl->nb!=NULL){
            transmit(nwl->nb);
            nwl->nb=NULL;
        }
    }

}