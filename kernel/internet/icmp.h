#ifndef _ICMP_H_
#define _ICMP_H_
#include "arp.h"
#include "ethernet.h"
#include "ip.h"
#include "rtl8139.h"
#define ECHO_REQUEST 8
#define ECHO_REPLY   0
struct icmp_header{
    unsigned char type; //类型（0或8）
    unsigned char code; //代码（0）
    unsigned short checksum; //校验和
    unsigned short id; //标识符
    unsigned short seqnum; //序号
};
void send_icmp_request(unsigned int ip,unsigned short id,unsigned short seq,
    char *data,int len);
void send_icmp_reply(unsigned int ip,unsigned short id,unsigned short seq,
    char *data,int len);
void receive_icmp_reply(struct net_buf *nb,unsigned int ip);
void receive_echo_request(struct net_buf *nb,unsigned int ip);
void receive_echo_reply(struct net_buf *nb,unsigned int ip);
#endif