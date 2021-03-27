.text
.code32
.extern main
.extern exit
.global _start
_start:
    push %ebx
    push %ecx
    call main

    push %eax
    call exit