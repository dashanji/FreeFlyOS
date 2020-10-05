#设置项目名
project (dt)
add_library(${PROJECT_NAME} OBJECT dt.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/asm
    ${SimpleKernel_SOURCE_DIR}/kernel/dt
)
