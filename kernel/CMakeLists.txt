#设置项目名
project (kernel C ASM)

add_subdirectory(init)
add_subdirectory(asm)
add_subdirectory(debug)
add_subdirectory(dt)
add_subdirectory(interrupt)
add_subdirectory(keyboard)
add_subdirectory(main)
add_subdirectory(mem)
add_subdirectory(task)
add_subdirectory(pic)
add_subdirectory(serial)
add_subdirectory(timer)
add_subdirectory(vga)
add_subdirectory(sync)
add_subdirectory(file)
#add_subdirectory(user)

add_executable(${PROJECT_NAME}
        $<TARGET_OBJECTS:init>
        $<TARGET_OBJECTS:asm>
        $<TARGET_OBJECTS:debug>
        $<TARGET_OBJECTS:dt>
        $<TARGET_OBJECTS:interrupt>
        $<TARGET_OBJECTS:keyboard>
        $<TARGET_OBJECTS:main>
        $<TARGET_OBJECTS:mem>
        $<TARGET_OBJECTS:task>
        $<TARGET_OBJECTS:pic>
        $<TARGET_OBJECTS:serial>
        $<TARGET_OBJECTS:timer>    
        $<TARGET_OBJECTS:vga>
        $<TARGET_OBJECTS:sync>
        $<TARGET_OBJECTS:file>
)

target_link_options(${PROJECT_NAME} PRIVATE -T ${FreeFlyOS_SOURCE_DIR}/kernel/kernel.ld)
target_link_options(${PROJECT_NAME} PRIVATE -Wl,-melf_i386)
#target_link_options(${PROJECT_NAME} PRIVATE -Wl,--format=binary  $<TARGET_OBJECTS:timer>)

set(IMG "FreeFlyOS.img")
add_custom_command(OUTPUT ${IMG}
    DEPENDS
        ${PROJECT_NAME}
    COMMAND
        echo "Generating FreeFlyOS.img..."
    COMMAND
        dd if=/dev/zero of=${IMG} count=10000	     
    COMMAND    
        dd if=../boot/bootblock of=FreeFlyOS.img conv=notrunc
    COMMAND
        dd if=kernel of=FreeFlyOS.img seek=1 conv=notrunc	        
    COMMAND    
        qemu-system-i386 -m 2048 -hda FreeFlyOS.img	
)
add_custom_target(Test1 ALL DEPENDS ${IMG})











