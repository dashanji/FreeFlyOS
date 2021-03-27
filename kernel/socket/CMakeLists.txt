#设置项目名
project (socket)

add_library(${PROJECT_NAME} OBJECT localsocket.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/socket
    ${FreeFlyOS_SOURCE_DIR}/kernel/file
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/sync
    ${FreeFlyOS_SOURCE_DIR}/kernel/task
    ${FreeFlyOS_SOURCE_DIR}/kernel/stl
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
)
