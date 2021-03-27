#ifndef _RTL8139_H_
#define _RTL8139_H_
#include "ethernet.h"
#include "arp.h"
#include "ip.h"
#include "../stl/list.h"
#define RTL8139_VENDOR_ID 0x10ec
#define RTL8139_DEVICE_ID 0x8139
#define NUM_TX_BUFFER   4

#define NULL (void *)0

#define RTL8139_VENDOR_ID   0x10ec
#define RTL8139_DEVICE_ID   0x8139

#define RTL8139_MAC         0x00
#define RTL8139_TX_STATUS0  0x10
#define RTL8139_TX_ADDR0    0x20
#define RTL8139_RX_BUF_ADDR 0x30
#define RTL8139_COMMAND     0x37
#define RTL8139_CAPR        0x38
#define RTL8139_INTR_MASK   0x3C
#define RTL8139_INTR_STATUS 0x3E
#define RTL8139_RCR         0x44
#define RTL8139_CONFIG_0    0x51
#define RTL8139_CONFIG_1    0x52

#define RTL8139_RX_OK       0x0001
#define RTL8139_RX_ERROR    0x0002
#define RTL8139_TX_OK       0x0004
#define RTL8139_TX_ERROR    0x0008
#define RTL8139_RX_OVERFLOW 0x0010
#define RTL8139_RX_UNDERRUN 0x0020 
#define RTL8139_RX_FIFOOVER 0x0040 
#define RTL8139_PCS_TIMEOUT 0x4000
#define RTL8139_PCI_ERROR   0x8000 

//发送包队列长度
#define NET_BUF_SEND_LIST_LENGTH 20
//等待包队列长度
#define NET_BUF_WAIT_LIST_LENGTH 20

#define ETHERNET_TYPE 0 //以太网帧
#define ARP_TYPE 1  //ARP包
#define IPV4_TYPE 2  //IPV4包
typedef struct rtl8139_t{
    char    inited;
    unsigned int  io_address;
    unsigned int  irq;
    unsigned char   mac_addr[6];

    unsigned char*  rx_buffer;
    unsigned int  current_rx;   /* CAPR, Current Address of Packet Read */
    unsigned int  rx_buf_len;

    unsigned char*  tx_buffers[NUM_TX_BUFFER];
    unsigned char   current_tx;
}rtl8139;
//网络包发送队列
typedef struct net_buf_send_list_t{
    struct net_buf *nb;
    char type;
    list_entry_t node;
}nb_send_list_t;
//将list_entry_t转化为nb_send_list_t
#define list_to_nb_send_list(list_entry_addr,member)         \
    to_struct(list_entry_addr,nb_send_list_t,member)
//网络包等待队列
typedef struct net_buf_wait_list_t{
    struct net_buf *nb;
    char type;
    list_entry_t node;
}nb_wait_list_t;
//将list_entry_t转化为nb_wait_list_t
#define list_to_nb_wait_list(list_entry_addr,member)         \
    to_struct(list_entry_addr,nb_wait_list_t,member)

unsigned int get_info_from_pci();
void rtl8139_init();
void do_rtl8139_irq(rtl8139 *rtl);
int transmit(struct net_buf* buf);
void receive();
char insert_net_send_list(struct net_buf *nb,char type);
char delete_net_send_list(struct net_buf *nb,char type);
char insert_net_wait_list(struct net_buf *nb,char type);
char delete_net_wait_list();
void clear_net_send_list();
#endif