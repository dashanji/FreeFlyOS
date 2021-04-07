#version 0.1
FROM 3292900173/qemu
ADD FreeFlyOS.img /usr
WORKDIR /usr
#CMD ["qemu-system-i386","-curses","-m 2048","-net nic,model=rtl8139","-smp 2" "-hda","FreeFlyOS.img"]
