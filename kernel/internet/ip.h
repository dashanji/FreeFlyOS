#ifndef _IP_H_
#define _IP_H_
#include "ethernet.h"
#include "arp.h"
#include "rtl8139.h" 
#include "icmp.h"
#define IP_protocal 0x4
#define ICMP_protocol 0x1
#define RAW_protocal 0xff
struct ip_header{
    unsigned char ihl:4;  //高4位：首部长度
    unsigned char version:4; //低4位：版本
    unsigned char type_of_service; //区分服务（DSCP、ECN）
    unsigned short total_length; //总长度
    unsigned short identification; //标识
    unsigned short fragment_offset; //标志+片偏移
    unsigned char time_to_live; //生存时间
    unsigned char protocol; //协议
    unsigned short header_checksum; //首部校验和
    unsigned int src_ip; //源地址
    unsigned int dst_ip; //目标地址
};
unsigned int chartoui(char ip[ipaddr_len]);
unsigned int htonl(unsigned int n);
char check_same_subnet(unsigned int ip1,unsigned int ip2,unsigned int mask);
unsigned short checksum(char *data,int len);
struct net_buf *build_ip_packet(char *data,int len,unsigned int dstip,unsigned char protocol);
void send_ip_packet(char *data,int len,unsigned int dstip,unsigned char protocol);
void receive_ip_packet(struct net_buf *nb);
char wake_up_ip_packet(struct net_buf *nb);
#endif