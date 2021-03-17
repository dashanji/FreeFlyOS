#设置项目名
project (serial)

add_library(${PROJECT_NAME} OBJECT serial.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
    ${FreeFlyOS_SOURCE_DIR}/kernel/pic
    ${FreeFlyOS_SOURCE_DIR}/kernel/serial
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
    ${FreeFlyOS_SOURCE_DIR}/kernel/keyboard
    ${FreeFlyOS_SOURCE_DIR}/kernel/apic
)
