#设置项目名
project (test_cat C ASM)

add_library(${PROJECT_NAME} OBJECT test.c start.S)
#add_executable(${PROJECT_NAME} test.c )
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/user/
     ${FreeFlyOS_SOURCE_DIR}/kernel/test_cat
)
set(test_name "cat")
add_custom_command(OUTPUT ${test_name}
    DEPENDS
        ${PROJECT_NAME}
    COMMAND
        x86_64-elf-ld -T ../../test_cat/test.ld -m elf_i386 -e _start ../../build/kernel/user/CMakeFiles/user.dir/stdio.c.o 
        ../../build/kernel/user/CMakeFiles/user.dir/user_syscall.c.o  
        ../../build/kernel/user/CMakeFiles/user.dir/string.c.o 
        ../../build/test_cat/CMakeFiles/test_cat.dir/test.c.o  
        ../../build/test_cat/CMakeFiles/test_cat.dir/start.S.o -o test_cat
    COMMAND
        x86_64-elf-objdump -d test_cat > ../../disassembly/test_disass.md
    COMMAND
        dd if=../test_cat/test_cat of=../../FreeFlyOS.img bs=512 count=40 seek=530 conv=notrunc
    COMMAND   
        qemu-system-i386 -m 2048 -hda ../../FreeFlyOS.img	
)
add_custom_target(cat_tar ALL DEPENDS ${test_name})