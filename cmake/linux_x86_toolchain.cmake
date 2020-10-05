set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_VERSION 1)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

# GCC
find_program(X86_64 x86_64-elf-gcc REQUIRED)
if (NOT X86_64)
    message(FATAL_ERROR "x86_64-elf-gcc not found.\n"
            "Run `brew install x86_64-elf-gcc` to install the toolchain.")
else ()
    message(STATUS "Found x86_64-elf-gcc ${X86_64}.")
endif ()

set(TOOLCHAIN_PREFIX x86_64-elf-)
set(CMAKE_C_COMPILER ${TOOLCHAIN_PREFIX}gcc)
set(CMAKE_OBJCOPY ${TOOLCHAIN_PREFIX}objcopy)