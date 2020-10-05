#设置项目名
project (serial)

add_library(${PROJECT_NAME} OBJECT serial.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/asm
    ${SimpleKernel_SOURCE_DIR}/kernel/interrupt
    ${SimpleKernel_SOURCE_DIR}/kernel/pic
    ${SimpleKernel_SOURCE_DIR}/kernel/serial
    ${SimpleKernel_SOURCE_DIR}/kernel/vga
)
