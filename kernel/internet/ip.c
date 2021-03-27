#include "ip.h"

#include "../asm/asm.h"
#include "../mem/vmm.h"
unsigned short id=0;
extern unsigned char my_ip[ipaddr_len];
extern unsigned char my_mask[ipaddr_len];
extern unsigned char my_gw[ipaddr_len];
//字符串形IP转化为整数
unsigned int chartoui(char ip[ipaddr_len]){
    unsigned int ans;
    //printk("ip:%02x.%02x.%02x.%02x\n",ip[0],ip[1],ip[2],ip[3]);
    ans=((unsigned char)ip[0]&0xff)<<24|((unsigned char)ip[1]&0xff)<<16|((unsigned char)ip[2]&0xff)<<8
        |(unsigned char)ip[3]&0xff;
        //printk("ans %08x\n",ans);
    return ans;
}
//unsigned int转大端序
unsigned int htonl(unsigned int n)
{
  return ((n & 0xFF) << 24) | ((n & 0xFF00) << 8) | ((n & 0xFF0000) >> 8) | ((n & 0xFF000000) >> 24);
}
char check_same_subnet(unsigned int ip1,unsigned int ip2,unsigned int mask){
    return (ip1&mask)==(ip2&mask);
}
//计算校验和
unsigned short checksum(char *data,int len){
    unsigned int sum=0;
    unsigned short *p=(unsigned short *)data;
    int i=len;
    for(;i>1;i-=2,p++){
        sum+=(unsigned int)*p;
    }
    if(i==1){
        sum+=*(unsigned char *)p;
    }
    sum=(sum>>16)+(sum&0xFFFF);
    return (unsigned short)~sum;
}
//构造IP包
struct net_buf *build_ip_packet(char *data,int len,unsigned int dstip,unsigned char protocol){
    int total_len=len+sizeof(struct ip_header)+sizeof(struct net_buf);
    struct ip_header ih;
    ih.ihl=5; //无可选项
    ih.version=4; //IPV4
    ih.type_of_service=0; 
    ih.total_length=ntohs(total_len);
    ih.identification=htonl(id++);
    ih.fragment_offset=0;
    ih.time_to_live=32;
    ih.protocol=protocol;
    ih.header_checksum=0;
    ih.src_ip=htonl(chartoui(my_ip));
    ih.dst_ip=htonl(dstip);
    ih.header_checksum=checksum((char *)&ih,sizeof(struct ip_header));
   /* unsigned short *m=&ih;
        for(int i=0;i<sizeof(struct ip_header);i+=2,m++){
        printk("%04x ",*m);
    }
    printk("\n");*/
    struct net_buf *nb=(struct net_buf *)vmm_malloc(total_len,1);
    nb->data_len=total_len;
    nb->data=(char *)nb+sizeof(struct net_buf);
    char *p=(char *)nb->data;
    memcpy(p,&ih,sizeof(struct ip_header));
    p+=sizeof(struct ip_header);
    memcpy(p,data,len);
    return nb;
}
//发送IP包
void send_ip_packet(char *data,int len,unsigned int dstip,unsigned char protocol){

    unsigned int dstgw=0;
    //若要发送的IP和本机IP不处于同一个子网中,则需要查看询问网关其mac地址
    if(check_same_subnet(dstip,chartoui(my_ip),chartoui(my_mask))!=1){
        dstgw=chartoui(my_gw);
    }
    //构造IP包
    struct net_buf *nb=build_ip_packet(data,len,dstip,protocol);
    unsigned char dst_ip[4];
    dst_ip[0]=(dstip>>24)&0xff;
    dst_ip[1]=(dstip>>16)&0xff;
    dst_ip[2]=(dstip>>8)&0xff;
    dst_ip[3]=dstip&0xff;
    unsigned char dst_gw[4];
    dst_gw[0]=(dstgw>>24)&0xff;
    dst_gw[1]=(dstgw>>16)&0xff;
    dst_gw[2]=(dstgw>>8)&0xff;
    dst_gw[3]=dstgw&0xff;
    //待发送的包
    struct net_buf *nb_need_to_send;
    char nb_need_to_send_type;
    struct arp_cache_t *ac;
    if(dstgw!=0)
        ac=find_arp_cache(dst_gw);     
    else
        ac=find_arp_cache(dst_ip);  
    if(ac!=NULL){
        //构造以太网帧并发送
        struct net_buf *send_ip_buf=build_ef(ac->mac_addr,ethernet_ipv4,nb->data,nb->data_len);
        insert_net_send_list(send_ip_buf,IPV4_TYPE);
        nb_need_to_send=send_ip_buf;
        printk("buf_addr:%08x\n",(unsigned int)nb_need_to_send);
        nb_need_to_send_type=IPV4_TYPE;
    }
    //如果没有找到IP对应的MAC地址，则发送ARP广播包
    else{
        //如果不在同一个子网中，则寻找网关的MAC地址
        char dstmac[6]={0xff,0xff,0xff,0xff,0xff,0xff};
        struct net_buf *send_arp_buf;
        if(dstgw!=0){
            send_arp_buf=arp_request(dstmac,my_gw,NULL,0,ARP_OP_REQUEST);
        }
        else{
            send_arp_buf=arp_request(dstmac,dst_ip,NULL,0,ARP_OP_REQUEST);
        }
        insert_net_send_list(send_arp_buf,ARP_TYPE);
        nb_need_to_send=send_arp_buf;
        nb_need_to_send_type=ARP_TYPE;
        struct net_buf *wait_ip_buf=build_ef(NULL,ethernet_ipv4,nb->data,nb->data_len);
        insert_net_wait_list(wait_ip_buf,IPV4_TYPE);
    }
    //发送一个包
    if(delete_net_send_list(nb_need_to_send,nb_need_to_send_type)==1){
        printk("send %02x successful!\n",nb_need_to_send_type);
    }
    else{
        printk("send error!\n");
    }
           
}
//接收IP包
void receive_ip_packet(struct net_buf *nb){
    struct ethernet_frame_header efh;
    char *p=nb->data;
    memcpy(&efh,p,sizeof(struct ethernet_frame_header));
    p+=sizeof(struct ethernet_frame_header);
    struct ip_header ih;
    memcpy(&ih,p,sizeof(struct ip_header));
    /*unsigned short *m=&ih;
    for(int i=0;i<sizeof(struct ip_header);i+=2,m++){
        printk("%04x ",*m);
    }*/
    if(checksum((char *)&ih,sizeof(struct ip_header))!=0){
        printk("received data from IP %d.%d.%d.%d,but header checksum isnot 0\n"
        ,(char)(htonl(ih.src_ip)>>24)&0xFF,(char)(htonl(ih.src_ip)>>16)&0xFF,(char)(htonl(ih.src_ip)>>8)&0xFF,
        (char)(htonl(ih.src_ip)&0xFF));
    }
    switch(ih.protocol)
    {
        //如果是ICMP协议
        case ICMP_protocol:
            receive_icmp_reply(nb,htonl(ih.src_ip));
            break;
        //纯IP包
        case RAW_protocal:
            p+=sizeof(struct ip_header);
            if(htonl(ih.dst_ip)==chartoui(my_ip))
                printk("receive from IP %d.%d.%d.%d,data is:%s\n",(char)(htonl(ih.dst_ip)>>24)&0xFF,
                (char)(htonl(ih.dst_ip)>>16)&0xFF,(char)(htonl(ih.dst_ip)>>8)&0xFF,(char)(htonl(ih.dst_ip)&0xFF),p);
            break;
        default:
            printk("ip packet pharse error!\n");
    }
}
//唤醒等待ARP Reply的IP包，若唤醒成功返回1，唤醒失败返回0
char wake_up_ip_packet(struct net_buf *nb){
    char *p=nb->data;
    struct ethernet_frame_header *efh=(struct ethernet_frame_header *)p;
    p+=sizeof(struct ethernet_frame_header);
    struct ip_header *ih=(struct ip_header *)p;
    unsigned int dstip=ih->dst_ip;
   
    //如果不是同一子网的IP，则找网关的MAC地址
    if(check_same_subnet(ih->dst_ip,chartoui(my_ip),chartoui(my_mask))!=1){
        dstip=chartoui(my_gw);
    }
    unsigned char dst_ip[4];
    dst_ip[0]=(dstip>>24)&0xff;
    dst_ip[1]=(dstip>>16)&0xff;
    dst_ip[2]=(dstip>>8)&0xff;
    dst_ip[3]=dstip&0xff;
    struct arp_cache_t *ac=find_arp_cache(dst_ip);
    if(ac==NULL){
        return 0;
    }
    memcpy(efh->dst,ac->mac_addr,eth_macaddr_len);
    return 1;
}