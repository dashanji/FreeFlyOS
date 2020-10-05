project(main)

add_library(${PROJECT_NAME} OBJECT main.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/asm
    ${SimpleKernel_SOURCE_DIR}/kernel/debug
    ${SimpleKernel_SOURCE_DIR}/kernel/dt
    ${SimpleKernel_SOURCE_DIR}/kernel/interrupt
    ${SimpleKernel_SOURCE_DIR}/kernel/keyboard
    ${SimpleKernel_SOURCE_DIR}/kernel/mem
    ${SimpleKernel_SOURCE_DIR}/kernel/pic
    ${SimpleKernel_SOURCE_DIR}/kernel/serial
    ${SimpleKernel_SOURCE_DIR}/kernel/timer
    ${SimpleKernel_SOURCE_DIR}/kernel/vga
)