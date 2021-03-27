#设置项目名
project (test_pipe C ASM)

add_library(${PROJECT_NAME} OBJECT test.c start.S)
#add_executable(${PROJECT_NAME} test.c )
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/user
    ${FreeFlyOS_SOURCE_DIR}/test_pipe
)
set(test_name "pip")
add_custom_command(OUTPUT ${test_name}
    DEPENDS
        ${PROJECT_NAME}
    COMMAND
        x86_64-elf-ld -T ../../test_pipe/test.ld -m elf_i386 -e _start ../../build/kernel/user/CMakeFiles/user.dir/stdio.c.o 
        ../../build/kernel/user/CMakeFiles/user.dir/user_syscall.c.o  
        ../../build/test_pipe/CMakeFiles/test_pipe.dir/test.c.o  
        ../../build/test_pipe/CMakeFiles/test_pipe.dir/start.S.o -o test_pipe
    COMMAND
        x86_64-elf-objdump -d test_pipe > ../../disassembly/test_pipe_disass.md
    COMMAND
        dd if=../test_pipe/test_pipe of=../../FreeFlyOS.img bs=512 count=30 seek=570 conv=notrunc
    COMMAND
        echo "pipe down!"
)
add_custom_target(test_pi ALL DEPENDS ${test_name})