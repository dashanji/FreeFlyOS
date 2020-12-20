target remote 127.0.0.1:1234
file build/kernel/kernel
#b exec
#c
#b schedule 
#c

#b my_shell
#c
#b 150
b sys_mmap
c
