#设置项目名
project (bootblock C ASM)

add_library(bootsector OBJECT bootsector.S)
add_library(bootmain OBJECT bootmain.c)

#链接
add_executable(${PROJECT_NAME}.o 
    $<TARGET_OBJECTS:bootsector>
    $<TARGET_OBJECTS:bootmain>
)

target_link_options(${PROJECT_NAME}.o PRIVATE -T ${FreeFlyOS_SOURCE_DIR}/boot/boot.ld)
target_link_options(${PROJECT_NAME}.o PRIVATE -Wl,-melf_i386)


add_custom_command(TARGET ${PROJECT_NAME}.o
    POST_BUILD
    COMMAND
        ${CMAKE_OBJCOPY} -S -O binary ${PROJECT_NAME}.o ${PROJECT_NAME}.out
    COMMAND    
        gcc ${FreeFlyOS_SOURCE_DIR}/boot/sign.c -o sign
    COMMAND    
        ./sign ${PROJECT_NAME}.out ${PROJECT_NAME}
)

