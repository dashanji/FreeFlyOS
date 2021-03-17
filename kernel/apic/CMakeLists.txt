#设置项目名
project (apic)

add_library(${PROJECT_NAME} OBJECT apic.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/apic
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
    ${FreeFlyOS_SOURCE_DIR}/kernel/timer
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
)