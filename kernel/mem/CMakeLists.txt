#设置项目名
project (mem)

add_library(${PROJECT_NAME} OBJECT pmm.c vmm.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/asm
    ${SimpleKernel_SOURCE_DIR}/kernel/mem
    ${SimpleKernel_SOURCE_DIR}/kernel/vga
)
