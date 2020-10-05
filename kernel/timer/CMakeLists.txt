#设置项目名
project (timer)

add_library(${PROJECT_NAME} OBJECT timer.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/asm
    ${SimpleKernel_SOURCE_DIR}/kernel/interrupt
    ${SimpleKernel_SOURCE_DIR}/kernel/pic
    ${SimpleKernel_SOURCE_DIR}/kernel/timer
)
