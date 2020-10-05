#设置项目名
project (keyboard)

add_library(${PROJECT_NAME} OBJECT keyboard.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/interrupt
    ${SimpleKernel_SOURCE_DIR}/kernel/keyboard
    ${SimpleKernel_SOURCE_DIR}/kernel/serial
    ${SimpleKernel_SOURCE_DIR}/kernel/vga
)
