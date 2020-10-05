#设置项目名
project (debug)

add_library(${PROJECT_NAME} OBJECT debug.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/debug
    ${SimpleKernel_SOURCE_DIR}/kernel/vga
)
