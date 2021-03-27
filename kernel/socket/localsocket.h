#ifndef _LOCALSOCKET_H_
#define _LOCALSOCKET_H_
#include "errno.h"
#include "../sync/sync.h"
#define MAX_LOCAL_SOCKET 128
#define MAX_LOCAL_ADDR      4
#define MAX_BUF_SIZE 1024
typedef enum address_family_e {
        AF_LOCAL = 1,
        AF_INET = 2,
        AF_MAX,
}address_family_t;
typedef enum sock_type_e {
        SOCK_STREAM = 1,
        SOCK_DGRAM,
        SOCK_RAW,
}sock_type_t;
typedef enum protocol_e {
        PROTO_ICMP = 1,
        PROTO_TCP = 6,
        PROTO_UDP = 17,
}protocol_t;
typedef enum socket_state_e {
        SS_FREE = 0,
        SS_UNCONNECTED,
        SS_CONNECTING,
        SS_CONNECTED,
        SS_DISCONNECTING,
}socket_state_t;
typedef enum socket_flag_e {
        SF_ACCEPTCON = (1 << 16),   /* performed a listen */
        SF_WAITDATA  = (1 << 17),   /* wait data to read */
        SF_NOSPACE   = (1 << 18),   /* no space to write */
}socket_flag_t;
typedef enum socket_call_e {
        SOCK_SOCKET = 0,
        SOCK_BIND,
        SOCK_LISTEN,
        SOCK_ACCEPT,
        SOCK_CONNECT,
        MAX_SYS_SOCKET,
}socket_call_t;
struct socket_local_t{
    unsigned int ref; //引用计数
    char addr[MAX_LOCAL_ADDR]; //目前socket地址
    socket_flag_t flag; //socket标志符
    struct socket_local_t *connecting_list;  //连接链表
    struct socket_local_t *connected_socket; //已经连接的socket
    struct semaphore *wait_connect_sem;  //等待连接信号
    struct semaphore *wait_accept_sem;  //等待接收信号
    struct lock *lock;  //互斥访问缓冲区
    char buf[MAX_BUF_SIZE]; //缓冲区
    //unsigned short family; //address family AF_xxx
    //struct socket_t socket;
    
};
struct socket_t{
    unsigned int flags;
    unsigned int family;
    unsigned int type;
    unsigned int protocol;
    socket_state_t state;
};
void socket_init();
int sys_socket();
int sys_bind(int fd,char myaddr[MAX_LOCAL_ADDR]);
int sys_listen(int fd);
int sys_accept(int fd,char clientaddr[MAX_LOCAL_ADDR]);
int sys_connect(int fd,char serveraddr[MAX_LOCAL_ADDR]);
#endif