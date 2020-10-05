#设置项目名
project (interrupt C ASM)
set(SOURCES
    trap.c
    trapentry.S
    vector.S
)
add_library(${PROJECT_NAME} OBJECT ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${SimpleKernel_SOURCE_DIR}/kernel/interrupt
    ${SimpleKernel_SOURCE_DIR}/kernel/timer
    ${SimpleKernel_SOURCE_DIR}/kernel/vga
)
