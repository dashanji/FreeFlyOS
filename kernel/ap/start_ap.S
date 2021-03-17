#include "ap.h"
.text
.code16
.global apstart
apstart:
	cli

	xorw	%ax,             %ax
	movw	%ax,             %ds
	movw	%ax,             %es
	movw	%ax,             %ss
	movl $0x7C00,%esp

	lgdt	gdt_ptr
	movl	%cr0,	         %eax
	orl		$CR0_PE,         %eax
	movl	%eax,	         %cr0
#display:
#movw $0x18,%ax
#movw %ax,%gs
#movl $((80*1+1)*2),%edi/*第11行，79列*/
#movb $0x0c,%ah/*高四位表示黑底,低四位表示红字*/
#movb $'Y',%al/*显示的字符*/
#movw %ax,%gs:(%edi)

#2:
#	jmp display
	ljmpl	$(SEG_KCODE<<3), $(apstart32)

.code32
apstart32:
	movw	$(SEG_KDATA<<3), %ax
	movw	%ax,             %ds
	movw	%ax,             %es
	movw	%ax,             %ss
	xorw	%ax,             %ax
	movw	%ax,             %fs
	movw	%ax,             %gs

	# setup page directory
	movl    (AP_PGDIR),	     %eax
	movl    %eax,		     %cr3

	# turn on paging
	movl    %cr0,		     %eax
	orl	    $(CR0_PG),	     %eax
	movl    %eax,		     %cr0

	# set a new stack
	movl    (AP_KSTACK),     %esp
    pushl   (AP_INDEX)
	call apmain
1:
    jmp 1b




.align 2
gdt:
.quad	0x0000000000000000
.quad	0x00cf9a000000ffff
.quad	0x00cf92000000ffff
.quad   0x0000920b8000ffff

gdt_ptr:
.word	(gdt_ptr - gdt - 1)
.long   gdt

