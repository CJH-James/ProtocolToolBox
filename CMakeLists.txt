cmake_minimum_required(VERSION 3.20)
project (HelloWorld VERSION 0.1.0)

# For Clangd (generate compile_commands.json)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

# cmake verbose output
# set(CMAKE_VERBOSE_MAKEFILE TRUE)



########################
# Create a library     #
########################

# File for Libary
file(GLOB BASIC ${PROJECT_SOURCE_DIR}/include/*.c)

### Static Libary ###
add_library(basic_static STATIC ${BASIC})
target_include_directories(basic_static PUBLIC ${PROJECT_SOURCE_DIR}/include/header)

### Dynamic Library ###
add_library(basic_dynamic SHARED ${BASIC})
add_library(lib::basic ALIAS basic_dynamic)
target_include_directories(basic_dynamic PUBLIC ${PROJECT_SOURCE_DIR}/include/header)

########################
# Create a executable  #
########################
set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/main.c
)
# Add an executable with the above sources
add_executable(hello_static ${SOURCES})
add_executable(hello_dynamic ${SOURCES})


target_include_directories(hello_static ${PROJECT_SOURCE_DIR}/include)
target_include_directories(hello_dynamic ${PROJECT_SOURCE_DIR}/include)


# link to static Libary
target_link_libraries(hello_static
    PRIVATE
    basic_static
)

# link to dynamic Libary
target_link_libraries(hello_dynamic
    PRIVATE
    lib::basic
)




