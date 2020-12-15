project(main)

add_library(${PROJECT_NAME} OBJECT main.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/debug
    ${FreeFlyOS_SOURCE_DIR}/kernel/dt
    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
    ${FreeFlyOS_SOURCE_DIR}/kernel/keyboard
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
    ${FreeFlyOS_SOURCE_DIR}/kernel/pic
    ${FreeFlyOS_SOURCE_DIR}/kernel/serial
    ${FreeFlyOS_SOURCE_DIR}/kernel/timer
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
    ${FreeFlyOS_SOURCE_DIR}/kernel/task
    ${FreeFlyOS_SOURCE_DIR}/kernel/file
    ${FreeFlyOS_SOURCE_DIR}/kernel/user
)