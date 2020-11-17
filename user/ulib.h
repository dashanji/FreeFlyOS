void __attribute__((__noreturn)) exit(int error_code);
int fork(void);
int wait(void);
int waitpid(int pid, int *store);
void yield(void);
int kill(int pid);
int getpid(void);
void print_pgdir(void);