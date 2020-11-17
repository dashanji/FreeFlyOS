#设置项目名
project (init)
add_library(${PROJECT_NAME} OBJECT init.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/init
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
    ${FreeFlyOS_SOURCE_DIR}/kernel/main
    ${FreeFlyOS_SOURCE_DIR}/kernel/debug
)
