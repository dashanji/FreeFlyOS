#设置项目名
project (pipe)

add_library(${PROJECT_NAME} OBJECT pipe.c ioqueue.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/task
    ${FreeFlyOS_SOURCE_DIR}/kernel/sync
    ${FreeFlyOS_SOURCE_DIR}/kernel/file
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
    ${FreeFlyOS_SOURCE_DIR}/kernel/debug
)
