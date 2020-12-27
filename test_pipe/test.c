#include "../kernel/user/stdio.h"
#include "../kernel/user/user_syscall.h"
int main(int argc, char** argv) {
   int fd[2] = {-1};
   pipe(fd);
   int pid = fork();
   if(pid) {	  // 父进程
      close(fd[0]);  // 关闭输入
      write(fd[1], "Hi, my son, I love you!", 24);
      printf("\nI`m father, my pid is %d\n", user_sys_getpid());
      return 8;
   } else {
      close(fd[1]);  // 关闭输出
      char buf[32] = {0};
      read(fd[0], buf, 24);
      printf("\nI`m child, my pid is %d\n", user_sys_getpid());
      printf("I`m child, my father said to me: \"%s\"\n", buf);
      return 9;
   }
}