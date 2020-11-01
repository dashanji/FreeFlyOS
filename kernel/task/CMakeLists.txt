#设置项目名
project (task)

add_library(${PROJECT_NAME} OBJECT task.c thread_entry.S switch.S)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/dt
    ${SimpleKernel_SOURCE_DIR}/kernel/mem
    ${SimpleKernel_SOURCE_DIR}/kernel/asm
    ${SimpleKernel_SOURCE_DIR}/kernel/interrupt
    ${SimpleKernel_SOURCE_DIR}/kernel/vga
)
