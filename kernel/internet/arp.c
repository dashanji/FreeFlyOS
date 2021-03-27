#include "arp.h"
#include "ethernet.h"
#include "rtl8139.h"
#include "../mem/vmm.h"
#include "../asm/asm.h"
#include "../stl/list.h"

#define NULL (void *)0
extern unsigned char my_mac[eth_macaddr_len];
extern unsigned char my_ip[ipaddr_len];
extern struct arp_cache_t *arp_cache;
/*char *L_B(char *data){
    int len=sizeof(data)/sizeof(char);
    char *new_data=vmm_malloc(len,1);
    
    for(int i=0;i<len;i++){
        new_data[i]=data[len-i];
    }
    memcpy(data,new_data,len);
    vmm_free(new_data,len);
    return data;
}*/
//小端序转大端序
unsigned short ntohs(unsigned short n)
{
  return ((n & 0xFF) << 8) | ((n & 0xFF00) >> 8);
}
//构造arp请求并发送,type为ARP类型
struct net_buf *arp_request(unsigned char dst_mac[eth_macaddr_len],unsigned char dst_ip[ipaddr_len],
    char *data,int len,int type){
    int data_len=len;
    //以太网帧头+ARP请求头=42字节，所以需要4字节凑46字节
    if(len<4){
        data_len=4;
    }
    
    char *arp_packet=(char *)vmm_malloc(data_len+sizeof(struct arp_header)+
    sizeof(struct ethernet_frame_header),1);
    //构造返回的buf
    struct net_buf *bf=(struct net_buf *)vmm_malloc(sizeof(struct net_buf),1);
    bf->data=arp_packet;
    bf->data_len=data_len+sizeof(struct arp_header)+
    sizeof(struct ethernet_frame_header);
    //构造以太网帧头
    struct ethernet_frame_header efh;
    memcpy(efh.src,my_mac,eth_macaddr_len);
    memcpy(efh.dst,dst_mac,eth_macaddr_len);

    //大端序 ARP协议
    efh.proto=ntohs(0x0806);
    memcpy(arp_packet,&efh,sizeof(struct ethernet_frame_header));
    arp_packet+=sizeof(struct ethernet_frame_header);
    //构造ARP请求头
    struct arp_header ah;
    ah.hardware_type=ntohs(0x0001);//以太网
    ah.protocol_type=ntohs(0x0800);//上层协议 IPV4
    ah.hardware_addr_len=0x06; 
    ah.protocol_addr_len=0x04;
    ah.op=ntohs(type); //request
    memcpy(ah.src_mac_addr,my_mac,eth_macaddr_len);
    memcpy(ah.src_ip_addr,my_ip,ipaddr_len);
    memcpy(ah.dst_mac_addr,dst_mac,eth_macaddr_len);
    memcpy(ah.dst_ip_addr,dst_ip,ipaddr_len);
    memcpy(arp_packet,&ah,sizeof(struct arp_header));
    arp_packet+=sizeof(struct arp_header);

    //数据段
    if(len>0)
    memcpy(arp_packet,data,len);
    arp_packet+=len;
    if(len<4){
        memset(arp_packet,0,data_len-len);
    }
    return bf;
}
//接收ARP协议包
void arp_receive(struct net_buf *bl){
    struct ethernet_frame_header efh;
    char *p=bl->data;
    memcpy(&efh,p,sizeof(struct ethernet_frame_header));
    p+=sizeof(struct ethernet_frame_header);
    struct arp_header ah;
    memcpy(&ah,p,sizeof(struct arp_header));
    p+=sizeof(struct arp_header);;
    switch(ntohs(ah.op)){
        case ARP_OP_REQUEST:
            printk("%d.%d.%d.%d want to know who have IP: %d.%d.%d.%d\n",ah.src_ip_addr[0],
            ah.src_ip_addr[1],ah.src_ip_addr[2],ah.src_ip_addr[3],ah.dst_ip_addr[0],
            ah.dst_ip_addr[1],ah.dst_ip_addr[2],ah.dst_ip_addr[3]);
            //如果ARP请求包的目标IP等于本机IP，则发送接收包
            if(memcmp(ah.dst_ip_addr,my_ip,ipaddr_len)==0){
                struct net_buf *reply_net_buf;
                reply_net_buf=arp_request(ah.src_mac_addr,ah.src_ip_addr,NULL,0,ARP_OP_REPLY);
                transmit(reply_net_buf);
            }
            break;
        case ARP_OP_REPLY:
            printk("arp reply [%d.%d.%d.%d] -> [%02x:%02x:%02x:%02x:%02x:%02x]\n",ah.src_ip_addr[0],
            ah.src_ip_addr[1],ah.src_ip_addr[2],ah.src_ip_addr[3],ah.src_mac_addr[0],ah.src_mac_addr[1],
            ah.src_mac_addr[2],ah.src_mac_addr[3],ah.src_mac_addr[4],ah.src_mac_addr[5]);
            //arp_cache中没有对应IP信息
            if(find_arp_cache(ah.src_ip_addr)==NULL){
                //将IP和MAC信息插入arp_cache中
                if(!insert_arp_cache(ah.src_ip_addr,ah.src_mac_addr)){
                    printk("insert arp_cache error!\n");
                    return ;
                }
                printk("insert arp_cache successful!\n");
                delete_net_wait_list();
            }
            break;

        default: 
            break;
    }
}
//遍历arp_cache，寻找IP地址是否在缓存中,如果在则返回该cache_line，若没有返回NULL
struct arp_cache_t *find_arp_cache(unsigned char dstip[ipaddr_len]){
    struct list_entry *head=&arp_cache->node;
    struct list_entry *ite=head;
    while((ite=list_next(ite))!=head){
        struct arp_cache_t *ac=list_to_arpcache(ite,node);
        //若找到IP地址
        if(memcmp(ac->ip_addr,dstip,ipaddr_len)==0){           
                return ac;
        }
    }
    return NULL;
}
//接收到ARP Reply包后将信息填入arp_cache中，返回1代表插入成功，返回0则插入失败
char insert_arp_cache(unsigned char dstip[ipaddr_len],unsigned char dstmac[eth_macaddr_len]){
    struct list_entry *head=&arp_cache->node;
    struct list_entry *ite=head;
    char ip[ipaddr_len]={0,0,0,0};
    while((ite=list_next(ite))!=head){
        struct arp_cache_t *ac=list_to_arpcache(ite,node);
        //若某一个cache line为空
        if(memcmp(ac->ip_addr,ip,ipaddr_len)==0){
                printk("insert ip:%02x.%02x.%02x.%02x\n",dstip[0],
                dstip[1],dstip[2],dstip[3]);
                printk("insert mac:%02x.%02x.%02x.%02x.%02x.%02x\n",dstmac[0],
                dstmac[1],dstmac[2],dstmac[3],dstmac[4],dstmac[5]);
                memcpy(ac->ip_addr,dstip,ipaddr_len);
                memcpy(ac->mac_addr,dstmac,eth_macaddr_len);
                return 1;
        }
    }
    return 0;
}