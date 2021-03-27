#设置项目名
project (test_socket C ASM)

add_library(${PROJECT_NAME} OBJECT test.c start.S)
#add_executable(${PROJECT_NAME} test.c )
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/user
    ${FreeFlyOS_SOURCE_DIR}/test_socket
)
set(test_name "testso")
add_custom_command(OUTPUT ${test_name}
    DEPENDS
        ${PROJECT_NAME}
    COMMAND
        x86_64-elf-ld -T ../../test_socket/test.ld -m elf_i386 -e _start ../../build/kernel/user/CMakeFiles/user.dir/stdio.c.o 
        ../../build/kernel/user/CMakeFiles/user.dir/user_syscall.c.o  
        ../../build/test_socket/CMakeFiles/test_socket.dir/test.c.o  
        ../../build/test_socket/CMakeFiles/test_socket.dir/start.S.o -o test_socket
    COMMAND
        x86_64-elf-objdump -d test_socket > ../../disassembly/test_socket_disass.md
    COMMAND
        dd if=../test_socket/test_socket of=../../FreeFlyOS.img bs=512 count=50 seek=650 conv=notrunc
    COMMAND
        echo "testsocket down!"
    COMMAND   
        qemu-system-i386 -m 2048 -net nic,model=rtl8139 -smp 2 -hda ../../FreeFlyOS.img	
)
add_custom_target(endsocket ALL DEPENDS ${test_name})