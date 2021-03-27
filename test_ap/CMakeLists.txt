#设置项目名
project (test_ap CXX ASM)

add_library(${PROJECT_NAME} OBJECT start_ap.S )
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/ap
    ${FreeFlyOS_SOURCE_DIR}/test_ap
)
set(test_name "start_ap")
add_custom_command(OUTPUT ${test_name}
    DEPENDS
        ${PROJECT_NAME}
    COMMAND
        echo "ap start!"
    COMMAND
        x86_64-elf-ld -T ../../test_ap/ap_ld.ld -m elf_i386 -e apstart 
        ../../build/test_ap/CMakeFiles/test_ap.dir/start_ap.S.o  -o test_cpp
    COMMAND
        x86_64-elf-objdump -d test_cpp > ../../disassembly/test_cpp_disass.md
    COMMAND
        dd if=../test_ap/test_ap of=../../FreeFlyOS.img bs=512 count=30 seek=650 conv=notrunc
    COMMAND
        echo "ap down!"
    COMMAND   
        qemu-system-i386 -m 2048 -smp 2 -hda ../../FreeFlyOS.img	
)
add_custom_target(ap_tar ALL DEPENDS ${test_name})