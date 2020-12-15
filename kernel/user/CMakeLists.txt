#设置项目名
project (user)

add_library(${PROJECT_NAME} OBJECT user_main.c user_syscall.c stdio.c shell.c string.c buildin_cmd.c)
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${FreeFlyOS_SOURCE_DIR}/kernel/user
    ${FreeFlyOS_SOURCE_DIR}/kernel/file
)
