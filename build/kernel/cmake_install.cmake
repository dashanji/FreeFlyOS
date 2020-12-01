# Install script for directory: /Users/caoy/Desktop/FreeFlyOS/kernel

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/init/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/asm/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/debug/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/dt/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/interrupt/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/keyboard/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/main/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/mem/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/task/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/pic/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/serial/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/timer/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/vga/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/sync/cmake_install.cmake")
  include("/Users/caoy/Desktop/FreeFlyOS/build/kernel/file/cmake_install.cmake")

endif()

