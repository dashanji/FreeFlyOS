#设置项目名
project (mem)

add_library(${PROJECT_NAME} OBJECT pmm.c vmm.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
    ${FreeFlyOS_SOURCE_DIR}/kernel/stl
    ${FreeFlyOS_SOURCE_DIR}/kernel/task
)
