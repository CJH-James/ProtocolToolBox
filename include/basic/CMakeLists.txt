project (Lib_Basic)

########################
# Create a library     #
########################

# File for Libary
file(GLOB BASIC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)

### Static Libary ###
add_library(static_basic STATIC ${BASIC})

target_include_directories(static_basic 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(static_basic PROPERTIES PREFIX "lib")
set_target_properties(static_basic PROPERTIES OUTPUT_NAME "basic")
set_target_properties(static_basic PROPERTIES SUFFIX ".a")

### Dynamic Library ###
add_library(dynamic_basic SHARED ${BASIC})
target_include_directories(dynamic_basic 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)


set_target_properties(dynamic_basic PROPERTIES PREFIX "lib")
set_target_properties(dynamic_basic PROPERTIES OUTPUT_NAME "basic")
set_target_properties(dynamic_basic PROPERTIES SUFFIX ".so")

