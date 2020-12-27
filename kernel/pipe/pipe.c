#include "pipe.h"
#include "ioqueue.h"
#include "../file/file.h"
#include "../file/fs.h"
#include "../mem/vmm.h"
#define NULL ((void *)0)
extern struct file file_table[MAX_FILE_OPEN];
/* 判断文件描述符local_fd是否是管道 */
char is_pipe(unsigned int local_fd) {
   unsigned int global_fd = fd_local2global(local_fd); 
   return file_table[global_fd].fd_flag == PIPE_FLAG;
}

/* 创建管道,成功返回0,失败返回-1 */
int sys_pipe(int pipefd[2]) {
   int global_fd = get_free_slot_in_global();

   /* 申请一页内核内存做环形缓冲区 */
   file_table[global_fd].fd_inode =vmm_malloc(VMM_PAGE_SIZE,1); 

   /* 初始化环形缓冲区 */
   ioqueue_init((struct ioqueue*)file_table[global_fd].fd_inode);
   if (file_table[global_fd].fd_inode == NULL) {
      return -1;
   }
  
   /* 将fd_flag复用为管道标志 */
   file_table[global_fd].fd_flag = PIPE_FLAG;

   /* 将fd_pos复用为管道打开数 */
   file_table[global_fd].fd_pos = 2;
   pipefd[0] = task_fd_install(global_fd);
   pipefd[1] = task_fd_install(global_fd);
   return 0;
}

/* 从管道中读数据 */
unsigned int pipe_read(int fd, void* buf, unsigned int count) {
   char* buffer = buf;
   unsigned int bytes_read = 0;
   unsigned int global_fd = fd_local2global(fd);

   /* 获取管道的环形缓冲区 */
   struct ioqueue* ioq = (struct ioqueue*)file_table[global_fd].fd_inode;

   /* 选择较小的数据读取量,避免阻塞 */
   unsigned int ioq_len = ioq_length(ioq);
   unsigned int size = ioq_len > count ? count : ioq_len;
   while (bytes_read < size) {
      *buffer = ioq_getchar(ioq);
      bytes_read++;
      buffer++;
   }
   return bytes_read;
}

/* 往管道中写数据 */
unsigned int pipe_write(int fd, const void* buf, unsigned int count) {
   unsigned int bytes_write = 0;
   unsigned int global_fd = fd_local2global(fd);
   struct ioqueue* ioq = (struct ioqueue*)file_table[global_fd].fd_inode;

   /* 选择较小的数据写入量,避免阻塞 */
   unsigned int ioq_left = bufsize - ioq_length(ioq);
   unsigned int size = ioq_left > count ? count : ioq_left;

   const char* buffer = buf;
   while (bytes_write < size) {
      ioq_putchar(ioq, *buffer);
      bytes_write++;
      buffer++;
   }
   return bytes_write;
}
