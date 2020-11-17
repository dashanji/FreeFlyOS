#设置项目名
project (vga)

add_library(${PROJECT_NAME} OBJECT vga.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/keyboard
    ${FreeFlyOS_SOURCE_DIR}/kernel/serial
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
)

