#设置项目名
project (file)
add_library(${PROJECT_NAME} OBJECT ide-dev.c fs.c dir.c file.c ide-dev.c inode.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/file
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
    ${FreeFlyOS_SOURCE_DIR}/kernel/debug
    ${FreeFlyOS_SOURCE_DIR}/kernel/task
    ${FreeFlyOS_SOURCE_DIR}/kernel/keyboard
    ${FreeFlyOS_SOURCE_DIR}/kernel/pipe
)
