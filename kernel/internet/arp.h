#ifndef _ARP_H_
#define _ARP_H_
#include "ethernet.h"
#define ipaddr_len 4

#define ARP_OP_REQUEST  1
#define ARP_OP_REPLY    2

#define ARP_CACHE_NUM 100
#include "../stl/list.h"
#include "../stl/defs.h"
struct arp_header{
    unsigned short hardware_type; //硬件类型
    unsigned short protocol_type; //上层协议类型
    unsigned char hardware_addr_len; //硬件地址长度
    unsigned char protocol_addr_len; //协议地址长度
    unsigned short op; //协议码
    unsigned char src_mac_addr[eth_macaddr_len]; //发送端以太网地址
    unsigned char src_ip_addr[ipaddr_len]; //发送端IP地址
    unsigned char dst_mac_addr[eth_macaddr_len]; //目的以太网地址
    unsigned char dst_ip_addr[ipaddr_len]; //目的IP地址
};
struct arp_cache_t{
    unsigned char ip_addr[ipaddr_len]; //IP地址
    unsigned char mac_addr[eth_macaddr_len]; //mac地址
    struct list_entry node;
};

//将list_entry_t转化为sturct task_struct
#define list_to_arpcache(list_entry_addr,member)         \
    to_struct(list_entry_addr,struct arp_cache_t,member)

unsigned short ntohs(unsigned short n);
struct net_buf *arp_request(unsigned char dst_mac[eth_macaddr_len],unsigned char dst_ip[ipaddr_len],
    char *data,int len,int type);
void arp_receive(struct net_buf *bl);
struct arp_cache_t *find_arp_cache(unsigned char dstip[ipaddr_len]);
char insert_arp_cache(unsigned char dstip[ipaddr_len],unsigned char dstmac[eth_macaddr_len]);
#endif