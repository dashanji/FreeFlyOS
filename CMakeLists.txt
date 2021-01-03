#CMake最低版本号要求
cmake_minimum_required(VERSION 3.12)

# skip cmake compiler check
set(CMAKE_C_COMPILER_WORKS TRUE)
set(CMAKE_CXX_COMPILER_WORKS TRUE)

#项目信息
project(FreeFlyOS C ASM)

set(CMAKE_C_FLAGS "-Os -nostdlib -fno-builtin -Wall -ggdb -m32 -gstabs -nostdinc  -fno-stack-protector")
set(CMAKE_ASM_FLAGS "${CMAKE_C_FLAGS}")


# Set cmake moudle path
#set(CMAKE_MODULE_PATH "${FreeFlyOS_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})


#增加boot子目录和kernel子目录
add_subdirectory(boot)

#add_subdirectory(user)
#set(${user}.out obj_user.out)
set(CMAKE_C_FLAGS "-nostdlib -g -m32")
add_subdirectory(kernel)
add_subdirectory(test_exec)
add_subdirectory(test_cat)
add_subdirectory(test_pipe)

