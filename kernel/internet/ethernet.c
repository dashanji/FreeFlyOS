#include "ethernet.h"
#include "../mem/vmm.h"
#include "rtl8139.h"
#include "../asm/asm.h"
#include "arp.h"
#include "ip.h"
extern unsigned char my_mac[eth_macaddr_len];//{0xd2,0xc0,0xcb,0x35,0xb2,0xd3};//{0xae,0xe7,0xc1,0x79,0xd8,0x64};
//发送数据给指定MAC地址 构造以太网帧
struct net_buf *build_ef(unsigned char dst[eth_macaddr_len],unsigned short protocal,char *data,int len){
    //首先需要构造一个以太网帧，先确定帧长度
    int ef_length=len;
    //最小的以太网帧为46字节
    if(ef_length<46){
        ef_length=46;
    }
    //不能发送给本机
    if(memcmp(my_mac,dst,eth_macaddr_len)==0){
        return ;
    }
    //数据+帧头
    struct net_buf *buf=vmm_malloc(ef_length+sizeof(struct ethernet_frame_header)+sizeof(struct net_buf),1);
    struct ethernet_frame_header efh;
    memcpy(efh.dst,dst,eth_macaddr_len);
    memcpy(efh.src,my_mac,eth_macaddr_len);
    //大端序
    efh.proto=ntohs(protocal);
    buf->data_len=ef_length+sizeof(struct ethernet_frame_header);
    buf->data=(char *)buf+sizeof(struct net_buf);
    char *p=buf->data;
    memcpy(p,&efh,sizeof(struct ethernet_frame_header));
    p+=sizeof(struct ethernet_frame_header);
    memcpy(p,data,len);
    if(len<ef_length){
        memset(p+len,0,ef_length-len);
    }
    return buf;
}
//接收以太网帧
void receive_ef(char *data,int len){
    struct net_buf *buf=vmm_malloc(len+sizeof(struct net_buf),1);
    buf->data_len=len;
    buf->data=(char *)buf+sizeof(struct net_buf);
    memcpy(buf->data,data,len);
    struct ethernet_frame_header efh;
    memcpy(&efh,buf->data,sizeof(struct ethernet_frame_header));
    printk("receive ethernet_frame from [%02x:%02x:%02x:%02x:%02x:%02x] to [%02x:%02x:%02x:%02x:%02x:%02x]\n",efh.src[0],efh.src[1],efh.src[2],
    efh.src[3],efh.src[4],efh.src[5],efh.dst[0],efh.dst[1],efh.dst[2],
    efh.dst[3],efh.dst[4],efh.dst[5]);
    //如果上层协议是ARP协议
    if(ntohs(efh.proto)==ethernet_arp){
        arp_receive(buf);
    }
    //如果上层协议是IP协议
    else if(ntohs(efh.proto)==ethernet_ipv4){
        receive_ip_packet(buf);
    }
    else{
        //如果发送的MAC地址是本机
        if(memcmp(my_mac,efh.dst,eth_macaddr_len)==0){
            printk("data:%s\n",(char *)(buf->data+sizeof(struct ethernet_frame_header)));
        }
    }
    
}