#设置项目名
project (dt)
add_library(${PROJECT_NAME} OBJECT dt.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/dt
)
