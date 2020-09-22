junkos.img:boot/bootblock kernel/kernel
	dd if=/dev/zero of=FreeFlyOS.img count=10000
	dd if=boot/bootblock of=FreeFlyOS.img conv=notrunc 
	dd if=kernel/kernel of=FreeFlyOS.img seek=1 conv=notrunc 
run: junkos.img
	qemu-system-i386 -hda FreeFlyOS.img
