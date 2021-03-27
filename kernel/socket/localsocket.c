#include "localsocket.h"
#include "../file/file.h"
#include "../asm/asm.h"
#include "../mem/vmm.h"
struct socket_local_t local_sockets[MAX_LOCAL_SOCKET];
struct semaphore local_wait_connect_sema;
struct semaphore local_wait_accept_sema;
struct lock local_lock;
extern struct file file_table[MAX_FILE_OPEN];
//分配本地socket
/*
struct socket_local_t *alloc_local_socket(unsigned int family,unsigned int type){
    //TODO:根据family和type判断是哪种socket
    struct socket_local_t *p=local_sockets;
    for(int i=0;i<MAX_LOCAL_SOCKET;i++,p++){
        if(local_sockets[i].ref==0){
            local_sockets[i].ref=1;
            local_sockets[i].socket.state=SS_UNCONNECTED;
            local_sockets[i].socket.flags=0;
            return p;
        }
    }
    return NULL
} 
//寻找local_socket
struct socket_t *look_up_socket(int fd){


}
//根据参数中的family和type创建对应的套接字，此处只有本地套接字，然后和文件表描述符绑定后
//返回文件表描述符
int sys_socket(unsigned int family,unsigned int type,unsigned int protocol){
    if(family>=AF_MAX){
        return -EINVAL;
    }
    //分配一个socket: 从socket表中获取一个空闲的socket
    socket_local_t *lsocket=alloc_local_socket(family,type);
    if(lsocket==NULL){
        return -ENOSR;
    }
    //分配一个文件:从文件表中获取一个空闲的fd
    int fd=get_free_slot_in_global();
    unsigned int global_fd=fd_local2global(fd);
    file_table[global_fd].lsocket=lsocket;
    if(fd<0){
        return -ENOSR;
    }
    return fd;
}
int sys_bind(int fd,char myaddr[MAX_PATH_LEN],unsigned short family){
   
    if(fd<0||fd>=MAX_FILE_OPEN){
        return -EBADF;
    }
    unsigned int global_fd=fd_local2global(fd);
    file_table[global_fd].lsocket->family=family;
    memcpy(file_table[global_fd].lsocket->path,path,MAX_LOCAL_PATH);
    return 0;
}
int sys_listen(int fd,unsigned int backlog){
    if(fd<0||fd>=MAX_FILE_OPEN){
        return -EBADF;
    }
    unsigned int global_fd=fd_local2global(fd);
    struct socket_local_t *p=file_table[global_fd].lsocket;
    if(p->socket.state!=SS_UNCONNECTED){
        return -EINVAL;
    }
    //local socket don't need to do anything
    p->socket.flags|=SF_ACCEPTCON;
    return 0;
}
int sys_accept(int fd,char clientaddr[MAX_PATH_LEN]){
    if(fd<0||fd>=MAX_FILE_OPEN){
        return -EBADF;
    }
    unsigned int global_fd=fd_local2global(fd);
    struct socket_local_t *p=file_table[global_fd].lsocket;
    //应处于未连接状态
    if(p->socket.state!=SS_UNCONNECTED){
        return -EINVAL;
    }
    //应该处于监听状态
     if (!(p->socket.flags & SF_ACCEPTCON)) {
        return -EINVAL;
    }
    //分配一个新套接字来接收连接
}
*/

void socket_init(){

    sema_init(&local_wait_accept_sema,0);
    sema_init(&local_wait_connect_sema,0);   
    lock_init(&local_lock);
    for(int i=0;i<MAX_LOCAL_SOCKET;i++){
        local_sockets[i].ref=0;
        memset(local_sockets[i].addr,0,MAX_LOCAL_ADDR);
        local_sockets[i].flag=0;
        local_sockets[i].connecting_list=NULL;
        
        local_sockets[i].wait_accept_sem=&local_wait_accept_sema;
        local_sockets[i].wait_connect_sem=&local_wait_connect_sema;
        local_sockets[i].lock=&local_lock;
        memset(local_sockets[i].buf,0,(unsigned int)MAX_BUF_SIZE);
    }
        
}
int sys_socket(){

    //获取空闲socket_local
    struct socket_local_t *p=local_sockets;
    for(int i=0;i<MAX_LOCAL_SOCKET;i++,p++){
        if(p->ref==0){
            p->ref=1;
            break;
        }
    }
    
    //获取空闲文件描述符
    int freefd=get_free_slot_in_global();
    
    int fd=task_fd_install(freefd);
    //在文件描述符对应的文件表中安装socket_local
    unsigned int global_fd=fd_local2global(fd);
    printk("freefd:%d\n",freefd);
    printk("fd:%d\n",fd);
    printk("global_fd:%d\n",global_fd);
    file_table[freefd].lsocket=p;
    file_table[freefd].fd_inode=(struct inode*)vmm_malloc(1024,1);

    return fd;
}   
int sys_bind(int fd,char myaddr[MAX_LOCAL_ADDR]){
    unsigned int global_fd=fd_local2global(fd);
    memcpy(file_table[global_fd].lsocket->addr,myaddr,MAX_LOCAL_ADDR);
    return 0;
}
int sys_listen(int fd){
    unsigned int global_fd=fd_local2global(fd);
    file_table[global_fd].lsocket->flag|=SF_ACCEPTCON;
    return 0;
}
int sys_accept(int fd,char clientaddr[MAX_LOCAL_ADDR]){
    struct socket_local_t *p;
    unsigned int global_fd=fd_local2global(fd);
    p=file_table[global_fd].lsocket;
    //判断本地socket（服务器）是否准备连接
    if(!(p->flag&SF_ACCEPTCON)){
        return -EINVAL;
    }
    //分配一个新的套接字来接收连接
    struct socket_local_t *new_socket=local_sockets;
    for(int i=0;i<MAX_LOCAL_SOCKET;i++,new_socket++){
        if(local_sockets[i].ref==0){
            local_sockets[i].ref=1;
            break;
        }
    }

    //获取空闲文件描述符
    int new_freefd=get_free_slot_in_global();
    int new_fd=task_fd_install(new_freefd);
    //在文件描述符对应的文件表中安装socket_local
    unsigned int new_global_fd=fd_local2global(new_fd);
    file_table[new_global_fd].lsocket=new_socket;
    file_table[new_global_fd].fd_inode=(struct inode*)vmm_malloc(1024,1);
    //等待客户端连接
    while(new_socket->connecting_list==NULL){
        printk("Server waiting for connect\n");
        sema_down(new_socket->wait_connect_sem);
    }
    //若有客户端连接
    struct socket_local_t *client_socket=new_socket->connecting_list;
    client_socket->connected_socket=p;
    p->ref++;
    printk("Server wake up\n");
    //唤醒已经连接成功的客户端
    sema_up(client_socket->wait_accept_sem);
    //返回新套接字对应的文件描述符
    return new_fd;
}
int sys_connect(int fd,char serveraddr[MAX_LOCAL_ADDR]){
    //获取客户端socket
    unsigned int client_globalfd=fd_local2global(fd);
    printk("This is Client\n");
    struct socket_local_t *client_socket=file_table[client_globalfd].lsocket;

    struct socket_local_t *server_socket=local_sockets;
    for(int i=0;i<MAX_LOCAL_SOCKET;i++,server_socket++){
        if(server_socket->ref!=0&&!memcmp(server_socket->addr,serveraddr,MAX_LOCAL_ADDR)){
            printk("find server");
            break;
        }
    }
    //判断服务器socket是否准备连接
    if(!(server_socket->flag&SF_ACCEPTCON)){
        return -EINVAL;
    }
    server_socket->connecting_list=client_socket;
    //客户端发出 让服务器端连接 的信号
    printk("Client let Server connect!\n");
    sema_up(server_socket->wait_connect_sem);
    //等待服务器连接 完成信号
    sema_down(client_socket->wait_accept_sem);
     printk("Client connected Server!\n");
    client_socket->ref++;
    return 0;
}