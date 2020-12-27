target remote 127.0.0.1:1234
file build/kernel/kernel
#file build/test_pipe/test_pipe
#b syscall_exit
#b wait
#b task_exit
#b sys_exit
#b main

#b my_shell
#b sys_wait
#b sys_execv
#b sys_exit
#b copy_thread
#b exit
#b sys_exit
#b main
b do_fork
c
