cmake_minimum_required(VERSION 3.13)
project(RTM-TOOL_CORE_C C CXX)
add_library(RTM-TOOL_CORE_C STATIC src/RTM-tool_core.cpp)
target_include_directories(RTM-TOOL_CORE_C PUBLIC
    ./include
)

add_subdirectory(example)