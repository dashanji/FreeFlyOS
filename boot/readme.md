## boot.ld

生成bootblock的链接格式，起始地址从0x7c00开始

## bootsector.S

关中断、内存探测、80x86 CPU从实模式变成保护模式。

## bootmain.c

将elf格式的内核代码读入到指定内存区域中。

## sign.c

将某文件格式化为合法MBR文件，末尾以0xaa55结束。

## CMakeLists.txt

1、编译bootsector.S以及bootmain.c文件生成bootsector.o和bootmain.o

2、将boosector.o和bootmain.o链接到0x7c00地址处生成bootblock.o

3、使用objcopy将bootblack.o复制生成可执行文件bootblock.out

4、使用格式化工具sign将bootblack.out格式化成MBR



