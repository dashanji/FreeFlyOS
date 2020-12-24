#include "../kernel/user/stdio.h"
#include "../kernel/user/user_syscall.h"
#include "../kernel/user/string.h"
#define NULL ((void *)0)
void main(int argc,char **argv){
    /*printf("hello nice to meet you\n");
    while(1);*/
   if (argc > 2 || argc == 1) {
      printf("cat: only support 1 argument.\neg: cat filename\n");
      exit(-2);
   }
   int buf_size = 1024;
   char abs_path[512] = {0};
   void* buf = malloc(buf_size);
   if (buf == NULL) { 
      printf("cat: malloc memory failed\n");
      return -1;
   }
   if (argv[1][0] != '/') {
      getcwd(abs_path, 512);
      user_strcat(abs_path, "/");
      user_strcat(abs_path, argv[1]);
   } else {
      user_strcpy(abs_path, argv[1]);
   }
   int fd = open(abs_path, O_RDONLY);
   if (fd == -1) { 
      printf("cat: open: open %s failed\n", argv[1]);
      return -1;
   }
   int read_bytes= 0;
   while (1) {
      read_bytes = read(fd, buf, buf_size);
      if (read_bytes == -1) {
         break;
      }
      write(1, buf, read_bytes);
   }
   free(buf,buf_size);
   close(fd);
   return 66;
}