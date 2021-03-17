#设置项目名
project (keyboard)

add_library(${PROJECT_NAME} OBJECT keyboard.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
    ${FreeFlyOS_SOURCE_DIR}/kernel/keyboard
    ${FreeFlyOS_SOURCE_DIR}/kernel/serial
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
    ${FreeFlyOS_SOURCE_DIR}/kernel/apic
)
