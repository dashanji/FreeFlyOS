#设置项目名
#project (user)

#set( 
#    SOURCES
#    hello.c 
#    syscall.c 
#    ulib.c 
#    umain.c 
#    initcode.S
#)
#add_library(${PROJECT_NAME}.o OBJECT hello.c syscall.c ulib.c umain.c initcode.S)
#target_include_directories(${PROJECT_NAME}.o
#    PUBLIC
#    ${FreeFlyOS_SOURCE_DIR}/kernel/user
#    ${FreeFlyOS_SOURCE_DIR}/kernel/dt
#    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
#    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
#)


#add_executable(${PROJECT_NAME}
#        ${SOURCES}
#        #${PROJECT_NAME}.o
#        $<TARGET_OBJECTS:dt> 
#        $<TARGET_OBJECTS:interrupt> 
#        $<TARGET_OBJECTS:vga> 
#)
#target_include_directories(${PROJECT_NAME}
#    PUBLIC
#    ${FreeFlyOS_SOURCE_DIR}/kernel/user
#    ${FreeFlyOS_SOURCE_DIR}/kernel/dt
#    ${FreeFlyOS_SOURCE_DIR}/kernel/interrupt
#    ${FreeFlyOS_SOURCE_DIR}/kernel/vga
#)
#target_link_options(${PROJECT_NAME} PRIVATE -T ${FreeFlyOS_SOURCE_DIR}/kernel/user/user.ld)
#target_link_options(${PROJECT_NAME} PRIVATE -Wl,-melf_i386)