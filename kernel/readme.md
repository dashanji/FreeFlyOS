## kernel.ld

内核各个节的链接地址，从物理内存0x1000000(16MB)开始

## CMakeLists.txt

生成elf格式的内核kernel，接着使用dd命令将boot中的bootblock(MBR)和内核kernel生成启动盘
接着通过32位qemu运行该盘(按硬盘方式)，即可得到截图结果。