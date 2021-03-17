#设置项目名
project (timer)

add_library(${PROJECT_NAME} OBJECT timer.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
    ${FreeFlyOS_SOURCE_DIR}/kernel/pic
    ${FreeFlyOS_SOURCE_DIR}/kernel/timer
    ${FreeFlyOS_SOURCE_DIR}/kernel/apic
)
