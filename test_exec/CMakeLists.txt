#设置项目名
project (test_exec)

add_library(${PROJECT_NAME} OBJECT test.c)
#add_executable(${PROJECT_NAME} test.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/user/
)
set(test_name "test")
add_custom_command(OUTPUT ${test_name}
    DEPENDS
        ${PROJECT_NAME}
    COMMAND
        x86_64-elf-ld -T ../../test_exec/test.ld -m elf_i386 -e main ../../build/kernel/user/CMakeFiles/user.dir/stdio.c.o 
        ../../build/kernel/user/CMakeFiles/user.dir/user_syscall.c.o  
        ../../build/test_exec/CMakeFiles/test_exec.dir/test.c.o -o test 
    COMMAND
        x86_64-elf-objdump -d test > ../../disassembly/test_disass.md
    #COMMAND
    #    dd if=../test_exec/test of=../../FreeFlyOS.img bs=512 count=30 seek=500 conv=notrunc
    COMMAND   
        qemu-system-i386 -m 2048 -hda ../../FreeFlyOS.img	
)
add_custom_target(Test2 ALL DEPENDS ${test_name})