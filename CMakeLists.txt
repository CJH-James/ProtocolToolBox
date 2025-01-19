cmake_minimum_required(VERSION 3.20)

project(root)

# For Clangd (generate compile_commands.json)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

# Set execute path
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output)
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib) # static lib path
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib) # dynamic lib path


##################
# Build the lib  #
##################
set (LIB_PATH "include")
add_subdirectory(${LIB_PATH}/basic)
add_subdirectory(${LIB_PATH}/log)

######################
# Build the execute  #
######################
set (HELLOWORLD_PATH "src/helloWorld")

add_subdirectory(${HELLOWORLD_PATH})


