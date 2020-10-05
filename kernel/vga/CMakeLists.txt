#设置项目名
project (vga)

add_library(${PROJECT_NAME} OBJECT vga.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/asm
    ${SimpleKernel_SOURCE_DIR}/kernel/keyboard
    ${SimpleKernel_SOURCE_DIR}/kernel/serial
    ${SimpleKernel_SOURCE_DIR}/kernel/vga
)

