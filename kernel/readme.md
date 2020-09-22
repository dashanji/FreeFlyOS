## kernel.c

ELF格式的内核入口，包含各种外设初始化，以及GDT和IDT表的设置等。

## Makefile

make kernel:生成elf格式的kernel文件。

make clean:删除所有中间的.o文件。

