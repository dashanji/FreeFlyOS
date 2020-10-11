#设置项目名
project (init)
add_library(${PROJECT_NAME} OBJECT init.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/init
    ${SimpleKernel_SOURCE_DIR}/kernel/mem
    ${SimpleKernel_SOURCE_DIR}/kernel/main
)
