#设置项目名
project (test_cpp CXX)

add_library(${PROJECT_NAME} OBJECT test.cpp )
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/user/
    ${FreeFlyOS_SOURCE_DIR}/test_cpp
)
set(test_name "hellp_cpp")
add_custom_command(OUTPUT ${test_name}
    DEPENDS
        ${PROJECT_NAME}
    COMMAND
        echo "cpp start!"
    COMMAND
        x86_64-elf-ld -T ../../test_cpp/test.ld -m elf_i386 -e main ../../build/kernel/user/CMakeFiles/user.dir/stdio.c.o 
        ../../build/kernel/user/CMakeFiles/user.dir/user_syscall.c.o  
        ../../build/kernel/user/CMakeFiles/user.dir/string.c.o 
        ../../build/test_cpp/CMakeFiles/test_cpp.dir/test.cpp.o  -o test_cpp
    COMMAND
        x86_64-elf-objdump -d test_cpp > ../../disassembly/test_cpp_disass.md
    #COMMAND
    #    dd if=../test_cpp/test_cpp of=../../FreeFlyOS.img bs=512 count=50 seek=600 conv=notrunc
    COMMAND
        echo "cpp down!"
    COMMAND   
        qemu-system-i386 -m 2048 -net nic,model=rtl8139 -smp 2 -hda ../../FreeFlyOS.img	
)
add_custom_target(cpp_tar ALL DEPENDS ${test_name})