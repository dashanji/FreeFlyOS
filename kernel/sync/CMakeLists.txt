#设置项目名
project (sync)

add_library(${PROJECT_NAME} OBJECT sync.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/debug
    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
    ${FreeFlyOS_SOURCE_DIR}/kernel/task
    ${FreeFlyOS_SOURCE_DIR}/kernel/stl
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
)
