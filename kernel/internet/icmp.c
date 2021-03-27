#include "icmp.h"
#include "../mem/vmm.h"
#include "../asm/asm.h"
//发出ICMP回送请求包
void send_icmp_request(unsigned int ip,unsigned short id,unsigned short seq,
    char *data,int len){
        int total_len=len+sizeof(struct icmp_header);
        struct net_buf *nb=(struct net_buf *)vmm_malloc(total_len+sizeof(struct net_buf),1);
        nb->data_len=total_len;
        nb->data=(char *)nb+sizeof(struct net_buf);
        unsigned char dst_ip[4];
        dst_ip[0]=(ip>>24)&0xff;
        dst_ip[1]=(ip>>16)&0xff;
        dst_ip[2]=(ip>>8)&0xff;
        dst_ip[3]=ip&0xff;
        printk("send an icmp echo request to ip:%d.%d.%d.%d\n",dst_ip[0],dst_ip[1],
        dst_ip[2],dst_ip[3]);
        printk("seq:%04x",seq);
        struct icmp_header ih;
        ih.type=ECHO_REQUEST;
        ih.code=0;
        ih.checksum=0;
        ih.id=ntohs(id);
        ih.seqnum=ntohs(seq);
        ih.checksum=checksum((char *)&ih,sizeof(struct icmp_header));
        char *p=nb->data;
        memcpy(p,&ih,sizeof(struct icmp_header));
        p+=sizeof(struct icmp_header);
        if(data!=NULL&&len!=0){
            memcpy(p,data,len);
        }
        send_ip_packet(nb->data,nb->data_len,ip,ICMP_protocol);
}
//发出ICMP回送请求包
void send_icmp_reply(unsigned int ip,unsigned short id,unsigned short seq,
    char *data,int len){
        int total_len=len+sizeof(struct icmp_header);
        struct net_buf *nb=(struct net_buf *)vmm_malloc(total_len+sizeof(struct net_buf),1);
        nb->data_len=total_len;
        nb->data=(char *)nb+sizeof(struct net_buf);
        unsigned char dst_ip[4];
        dst_ip[0]=(ip>>24)&0xff;
        dst_ip[1]=(ip>>16)&0xff;
        dst_ip[2]=(ip>>8)&0xff;
        dst_ip[3]=ip&0xff;
        printk("send an icmp echo reply to ip:%d.%d.%d.%d\n",dst_ip[0],dst_ip[1],
        dst_ip[2],dst_ip[3]);
        printk("seq:%04x",seq);
        struct icmp_header ih;
        ih.type=ECHO_REPLY;
        ih.code=0;
        ih.checksum=0;
        ih.id=ntohs(id);
        ih.seqnum=ntohs(seq);
        ih.checksum=checksum((char *)&ih,sizeof(struct icmp_header));
        char *p=nb->data;
        memcpy(p,&ih,sizeof(struct icmp_header));
        p+=sizeof(struct icmp_header);
        if(data!=NULL&&len!=0){
            memcpy(p,data,len);
        }
        send_ip_packet(nb->data,nb->data_len,ip,ICMP_protocol);
}
//接收ICMP应答包
void receive_icmp_reply(struct net_buf *nb,unsigned int ip){
    char *p=nb->data;
    p+=sizeof(struct ethernet_frame_header);
    p+=sizeof(struct ip_header);
    unsigned char type=*(char *)p;
    nb->data=p;
    switch (type)
    {
    case ECHO_REQUEST:
        receive_echo_request(nb,ip);
        break;
    case ECHO_REPLY:
        receive_echo_reply(nb,ip);
        break;
    default:
        printk("receive an icmp package, but not support the   \
        type %02x now.\n",type);
        break;
    }
}

void receive_echo_request(struct net_buf *nb,unsigned int ip){
    struct icmp_header *ih=(struct icmp_header *)nb->data;
    for(int i=0;i<sizeof(struct icmp_header);i++){
        printk("%02x ",ih[i]);
    }
    unsigned short check_sum=checksum((char *)ih,sizeof(struct icmp_header));
    if(check_sum!=0){
        printk("receive an icmp echo request,but checksum is error:%04x",check_sum);
        return ;
    }
    unsigned char dst_ip[4];
    dst_ip[0]=(ip>>24)&0xff;
    dst_ip[1]=(ip>>16)&0xff;
    dst_ip[2]=(ip>>8)&0xff;
    dst_ip[3]=ip&0xff;
    printk("receive an icmp echo request from ip:%d.%d.%d.%d",dst_ip[0],dst_ip[1],
    dst_ip[2],dst_ip[3]);
    printk("seq:%04x\n",ntohs(ih->seqnum));
    printk("prepare to send icmp reply to %02x.%02x.%02x.%02x\n",dst_ip[0],
        dst_ip[1],dst_ip[2],dst_ip[3]);
    clear();
    send_icmp_reply(ip,ntohs(ih->id),ntohs(ih->seqnum),NULL,0);
}
void receive_echo_reply(struct net_buf *nb,unsigned int ip){
    struct icmp_header *ih=(struct icmp_header *)nb->data;
    for(int i=0;i<sizeof(struct icmp_header);i++){
        printk("%02x ",ih[i]);
    }
    unsigned short check_sum=checksum((char *)ih,sizeof(struct icmp_header));
    if(check_sum!=0){
        printk("receive an icmp echo request,but checksum is error:%04x",check_sum);
        return ;
    }
    unsigned char dst_ip[4];
    dst_ip[0]=(ip>>24)&0xff;
    dst_ip[1]=(ip>>16)&0xff;
    dst_ip[2]=(ip>>8)&0xff;
    dst_ip[3]=ip&0xff;
    printk("receive an icmp echo request from ip:%d.%d.%d.%d",dst_ip[0],dst_ip[1],
    dst_ip[2],dst_ip[3]);
    printk("seq:%04x",ntohs(ih->seqnum));
}