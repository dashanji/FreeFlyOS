#include "../kernel/user/stdio.h"
#include "../kernel/user/user_syscall.h"
int main(int argc, char** argv) {
   int pid = fork();
   char serveraddr[4]={192,168,0,1};
   char clientaddr[4]={192,168,0,2};
   if(pid) {	  // 父进程，服务器端
      
      int serverfd=socket();
      bind(serverfd,serveraddr);
      listen(serverfd);
      int clientfd=accept(serverfd,clientaddr);
      while(1);
   } else {  //子进程，客户端
      int clientfd=socket();
      int serverfd=connect(clientfd,serveraddr);
      while(1);
   }
}