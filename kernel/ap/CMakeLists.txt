#设置项目名
project (ap)

add_library(${PROJECT_NAME} OBJECT ap.c start_ap.S)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/ap
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
    ${FreeFlyOS_SOURCE_DIR}/kernel/apic
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
)