#ifndef _ETHERNET_H_
#define _ETHERNET_H_
#define eth_macaddr_len 6
#define ethernet_arp  0x0806
#define ethernet_ipv4 0x0800
struct ethernet_frame_header{
        unsigned char dst[eth_macaddr_len];//目的MAC地址
        unsigned char src[eth_macaddr_len];//源MAC地址
        unsigned short proto;//帧类型
};
struct net_buf{
    unsigned int data_len; //数据长度
    char *data; //数据
};
struct net_buf *build_ef(unsigned char dst[eth_macaddr_len],unsigned short protocal,char *data,int len);
void receive_ef(char *data,int len);
#endif