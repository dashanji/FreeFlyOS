#Makefile
TARGET = x86_64-elf
CC=$(TARGET)-gcc
LD=$(TARGET)-ld
kernel.o:kernel.c
	$(CC) -m32 -g -c kernel.c -o kernel.o
asm.o:asm/asm.c
	$(CC) -m32 -g -c asm/asm.c -o asm.o
vga.o:vga/vga.c
	$(CC) -m32 -g -c vga/vga.c -o vga.o
dt.o:dt/dt.c
	$(CC) -m32 -g -c dt/dt.c -o dt.o
trap.o:interrupt/trap.c
	$(CC) -m32 -g -c interrupt/trap.c -o trap.o
timer.o:timer/timer.c
	$(CC) -m32 -g -c timer/timer.c -o timer.o
pic.o:pic/pic.c
	$(CC) -m32 -g -c pic/pic.c -o pic.o
serial.o:serial/serial.c
	$(CC) -m32 -g -c serial/serial.c -o serial.o
keyboard.o:keyboard/keyboard.c
	$(CC) -m32 -g -c keyboard/keyboard.c -o keyboard.o
debug.o:debug/debug.c
	$(CC) -m32 -g -c debug/debug.c -o debug.o
pmm.o:mem/pmm.c
	$(CC) -m32 -g -c mem/pmm.c -o pmm.o
#console.o:console.c
#	$(CC) -m32 -g -c console.c -o console.o
vector.o:interrupt/vector.S
	$(CC) -Iinclude/  -Os -fno-builtin  -Wall -ggdb -m32 -gstabs -nostdinc  -fno-stack-protector -Os -nostdinc -c interrupt/vector.S -o vector.o
trapentry.o:interrupt/trapentry.S
	$(CC) -Iinclude/  -Os -fno-builtin  -Wall -ggdb -m32 -gstabs -nostdinc  -fno-stack-protector -Os -nostdinc -c interrupt/trapentry.S -o trapentry.o
kernel:kernel.o asm.o  dt.o trap.o vector.o trapentry.o timer.o pic.o serial.o keyboard.o vga.o debug.o pmm.o#console.o
	$(LD) -m elf_i386 -N -e main -Ttext 0x100000 -o kernel kernel.o asm.o dt.o trap.o vector.o trapentry.o timer.o pic.o serial.o keyboard.o vga.o debug.o pmm.o
clean:*.o
	rm *.o

