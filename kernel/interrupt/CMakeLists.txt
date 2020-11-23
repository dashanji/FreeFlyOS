#设置项目名
project (interrupt C ASM)
set(SOURCES
    trap.c
    trapentry.S
    vector.S
    syscall.c
)
add_library(${PROJECT_NAME} OBJECT ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
    ${FreeFlyOS_SOURCE_DIR}/kernel/debug
    ${FreeFlyOS_SOURCE_DIR}/kernel/timer
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
    ${FreeFlyOS_SOURCE_DIR}/kernel/task
)
