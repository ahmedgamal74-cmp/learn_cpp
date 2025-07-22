cmake_minimum_required(VERSION 3.10)
project(myproject)

set(CMAKE_CXX_STANDARD 17)

# add_executable(myproject
#     main.cpp
#     # helper.cpp
#     # math_utils.cpp
# )

file(GLOB SOURCES *.cpp)
add_executable(myproject ${SOURCES})


add_custom_target(run
    COMMAND myproject
    DEPENDS myproject
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)