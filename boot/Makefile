TARGET = x86_64-elf
CC=$(TARGET)-gcc
LD=$(TARGET)-ld
all:bootsector
bootsector.o: bootsector.S
	$(CC) -Iinclude/  -Os -fno-builtin  -Wall -ggdb -m32 -gstabs -nostdinc  -fno-stack-protector -Os -nostdinc -c bootsector.S -o bootsector.o
bootmain.o: bootmain.c
	$(CC)  -Iinclude/ -Os -fno-builtin -Wall -ggdb -m32 -gstabs -nostdinc  -fno-stack-protector -Os -nostdinc -c bootmain.c -o bootmain.o
bootblock.o: bootsector.o bootmain.o
	$(LD)  -m elf_i386 -nostdlib -Os -N -e start -Ttext 0x7C00 bootsector.o bootmain.o -o bootblock.o
sign: sign.c
	gcc sign.c -o sign
bootblock: bootblock.o sign
	$(TARGET)-strip bootblock.o
	$(TARGET)-objcopy -S -O binary bootblock.o bootblock.out
	./sign bootblock.out bootblock
clean:*.o sign bootblock
	rm *.o *.out sign bootblock