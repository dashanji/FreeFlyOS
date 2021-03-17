#设置项目名
project (mp)

add_library(${PROJECT_NAME} OBJECT mp_config.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/mp
    ${FreeFlyOS_SOURCE_DIR}/kernel/mem
    ${FreeFlyOS_SOURCE_DIR}/kernel/asm
    ${FreeFlyOS_SOURCE_DIR}/kernel/init
)
