#设置项目名
project (task)

add_library(${PROJECT_NAME} OBJECT task.c thread_entry.S switch.S)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/dt
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
    ${FreeFlyOS_SOURCE_DIR}/kernel/task
    ${FreeFlyOS_SOURCE_DIR}/kernel/stl
    ${FreeFlyOS_SOURCE_DIR}/kernel/debug
    ${FreeFlyOS_SOURCE_DIR}/kernel/sync
    ${FreeFlyOS_SOURCE_DIR}/kernel/file
)
