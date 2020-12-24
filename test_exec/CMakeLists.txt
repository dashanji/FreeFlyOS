#设置项目名
project (test_exec C ASM)

add_library(${PROJECT_NAME} OBJECT test.c start.S)
#add_executable(${PROJECT_NAME} test.c )
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/user/
    ${FreeFlyOS_SOURCE_DIR}/kernel/test_exec
)
set(test_name "exec")
add_custom_command(OUTPUT ${test_name}
    DEPENDS
        ${PROJECT_NAME}
    COMMAND
        x86_64-elf-ld -T ../../test_exec/test.ld -m elf_i386 -e _start ../../build/kernel/user/CMakeFiles/user.dir/stdio.c.o 
        ../../build/kernel/user/CMakeFiles/user.dir/user_syscall.c.o  
        ../../build/test_exec/CMakeFiles/test_exec.dir/test.c.o  
        ../../build/test_exec/CMakeFiles/test_exec.dir/start.S.o -o test_exec
    COMMAND
        x86_64-elf-objdump -d test_exec > ../../disassembly/test_disass.md
    COMMAND
        dd if=../test_exec/test_exec of=../../FreeFlyOS.img bs=512 count=30 seek=500 conv=notrunc
)
add_custom_target(exec_tar ALL DEPENDS ${test_name})