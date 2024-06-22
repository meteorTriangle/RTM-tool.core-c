cmake_minimum_required(VERSION 3.13)

project(test003 C CXX)

add_executable(test003 test003.cpp)
target_link_libraries(test003
    RTM-TOOL_CORE_C
)

