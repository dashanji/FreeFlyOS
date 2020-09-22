/*
*   主要功能：在bootsector.S和bootmain.c链接成的
*            bootblock.out文件末尾添加0xaa55结束符
*      注意： 合法的MBR文件末尾以0xaa55结束。
*             
*/
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>

/*
*  main(argc,argv)：在第一个参数argv[1]文件的末尾
*    添加0x55AA，然后写入第二个参数argv[2]文件中
*/
int main(int argc, char *argv[]) {
    struct stat st;

    if (argc != 3) {
        fprintf(stderr, "Usage: <input filename> <output filename>\n");
        return -1;
    }

    if (stat(argv[1], &st) != 0) {
        fprintf(stderr, "Error opening file '%s': %s\n", argv[1], strerror(errno));
        return -1;
    }
    printf("'%s' size: %lld bytes\n", argv[1], (long long)st.st_size);

    if (st.st_size > 510) {
        fprintf(stderr, "%lld >> 510!!\n", (long long)st.st_size);
        return -1;
    }

    char buf[512];
    memset(buf, 0, sizeof(buf));

    FILE *ifp = fopen(argv[1], "rb");
    int size = fread(buf, 1, st.st_size, ifp);
    if (size != st.st_size) {
        fprintf(stderr, "read '%s' error, size is %d.\n", argv[1], size);
        return -1;
    }
    fclose(ifp);

    buf[510] = 0x55;
    buf[511] = 0xAA;
    
    FILE *ofp = fopen(argv[2], "wb+");
    size = fwrite(buf, 1, 512, ofp);
    if (size != 512) {
        fprintf(stderr, "write '%s' error, size is %d.\n", argv[2], size);
        return -1;
    }
    fclose(ofp);
    printf("build 512 bytes boot sector: '%s' success!\n", argv[2]);
    return 0;
}

