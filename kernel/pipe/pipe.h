#ifndef _PIPE_H_
#define _PIPE_H_

#define PIPE_FLAG 0xFFFF
char is_pipe(unsigned int local_fd);
int sys_pipe(int pipefd[2]);
unsigned int pipe_read(int fd, void* buf, unsigned int count);
unsigned int pipe_write(int fd, const void* buf, unsigned int count);
#endif
