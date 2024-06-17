cmake_minimum_required(VERSION 3.13)

project(test001 C CXX)

add_executable(test001 test001.cpp)
target_link_libraries(test001
    RTM-TOOL_CORE_C
)

