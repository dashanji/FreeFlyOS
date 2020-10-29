#设置项目名
project (task)

add_library(${PROJECT_NAME} OBJECT task.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/dt
    ${SimpleKernel_SOURCE_DIR}/kernel/mem
)
