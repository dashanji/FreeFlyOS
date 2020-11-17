#设置项目名
project (pic)

add_library(${PROJECT_NAME} OBJECT pic.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/pic
)
