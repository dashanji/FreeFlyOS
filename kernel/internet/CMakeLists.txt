#设置项目名
project (internet)

add_library(${PROJECT_NAME} OBJECT pci.c rtl8139.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/internet
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
    ${FreeFlyOS_SOURCE_DIR}/kernel/apic
    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
)
