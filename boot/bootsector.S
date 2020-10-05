/*
*  主要功能：关中断、内存探测、80x86 CPU从实模式变成保护模式
*           跳转到加载内核的32位代码段
*    注意：本文件不是MBR(512B)，而是和bootmain.c链接成MBR
*/
.text
.code16   #.code16表示16位代码段
.global start
/*
*将ds、es和ss段寄存器均设置成cs段寄存器的值，并将栈顶指针esp指向
*0x7c00，栈向低地址增长。这步操作其实也可省略，因为在16位代码段中
*还用不到其他段寄存器，在需要使用的时候再初始化不迟
*/
start:
movw %cs,%ax
movw %ax,%ds	# ->Data Segment
movw %ax,%es	# ->Extra Segment
movw %ax,%ss	# ->Stack Segment
movl $0x7C00,%esp

/*
*关中断，在后面我们在内存中会建立中断向量表，所以事先关好中断，
*防止在建表过程中来了中断，所以事先屏蔽，防止这种情况产生。
*/
cli


/* 内存探测，内存地址0x8000作为内存探测段数的存储地址，
   方便后面调用 */
movw $0,0x8000
movw $0x8004,%di
xor %ebx,%ebx
mm_probe:
movl $0xe820,%eax
movl $20,%ecx
movl $0x534D4150,%edx
int $0x15
#产生进位则跳转
jnc cont
jmp probe_end
cont:
incl 0x8000
addw $20,%di
cmpl $0,%ebx
jnz mm_probe
probe_end:


/*
*打开地址线A20。实际上若我们使用qemu跑这个程序时，A20默认打开，
*但为了兼容性，最好还是手动将A20地址线打开.读者可以试一试将打开
*A20代码删去后，在保护模式(32位代码段#)下用回滚机制测试时是否
*仍然显示字符
*
*8042(键盘控制器)端口的P21和A20相连，置1则打开
*0x64端口 读：位1=1 输入缓冲器满(0x60/0x64口有给8042的数据）
*0x64端口 写: 0xd1->写8042的端口P2，比如位2控制P21 
*当写时，0x60端口提供数据，比如0xdf，这里面把P2置1
*
*由于MacOS下编译器的版本原因，若加上下面代码会超出512B,故舍去
*/

/*waitforbuffernull1:

#先确定8042是不是为空,如果不为空，则一直等待
xorl %eax,%eax
inb $0x64,%al
testb $0x2,%al
jnz waitforbuffernull1

#8042中没有命令，则开始向0x64端口发出写P2端口的命令
movb $0xd1,%al
outb %al,$0x64
waitforbuffernull2:

#再确定8042是不是为空,如果不为空，则一直等待 
xorl %eax,%eax
inb $0x64,%al
testb $0x2,%al
jnz waitforbuffernull2

#向0x60端口发送数据，即把P2端口设置为0xdf
movb $0xdf,%al
outb %al,$0x60*/

/* 加载gdt表,即将内存中的gdt基址和表长写入GDTR寄存器 */
lgdt gdt_48

/* 打开保护模式，将cr0的位0置为1,一般而言BIOS中断
    只在实模式下进行调用 */
movl %cr0,%eax
orl $0x1,%eax
movl %eax,%cr0

/*
*进入到32位代码段。0x8代表段选择子(16位)——0000000000001000
*其中最后2为代表特权级.linux内核只使用了2个特权级(0和3)，00代表
*0特权级(内核级)，倒数第3位的代表是gdt(全局描述符表)还是
*idt(局部描述符表)，0代表全局描述符表，前13位代表gdt的项数(第1项)，
*属于代码段。所以0x8代表特权级为0(内核级)的全局代码段,promode代表
*偏移地址。
*/
ljmp $0x8,$promode

/* 保护模式下的32位代码段 */
promode:
.code32
movw $0x10,%ax
movw %ax,%ds	#->Data Segment
movw %ax,%es	#->Extra Segment
movw %ax,%ss	#->Stack Segment

movw $0x18,%ax
movw %ax,%gs

movl $0x0,%ebp
movl $start,%esp

/* 调用bootmain.c中的bootmain函数 */
call bootmain

/* 在内存中做一块GDT表 */
.align 2
gdt:
.word 0,0,0,0

.word 0xFFFF	#第1项CS,基地址为0，限长
.word 0x0000    
.word 0x9A00
.word 0x00C0

.word 0xFFFF	#第2项DS,基地址为0
.word 0x0000
.word 0x9200
.word 0x00C0

.word 0xFFFF	#第3项VGA,基地址位0xb8000
.word 0x8000
.word 0x920b
.word 0x0000 

/*
*将gdtr专用寄存器指向我们在内存中做的一块GDT表,GDTR寄存器格式:
*48位(高32位地址+低16位限长)，intel是小端方式
*/
gdt_48:
.word 0x1f    #gdt表限长 sizeof(gdt)-1 低地址，放在gdtr的低字节
.long gdt     #gdt表基址  高地址，放在gdtr的高字节


