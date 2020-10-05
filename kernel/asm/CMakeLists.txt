#设置项目名
project (asm)

add_library(${PROJECT_NAME} OBJECT asm.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/asm
)