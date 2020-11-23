.code32

.global kernel_thread_entry
.extern do_exit

kernel_thread_entry: # void kernel_thread(void)
    sti  #open interrrupt
    pushl %edx # push arg
    call *%ebx # call fn
    ret
    #pushl %eax # save the return value of fn(arg)
    #call do_exit # call do_exit to terminate current thread
