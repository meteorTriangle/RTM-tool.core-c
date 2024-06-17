cmake_minimum_required(VERSION 3.13)

project(test002 C CXX)

add_executable(test002 test002.cpp)
target_link_libraries(test002
    RTM-TOOL_CORE_C
)

