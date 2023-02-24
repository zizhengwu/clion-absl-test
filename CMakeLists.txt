cmake_minimum_required(VERSION 3.24)
project(untitled)

# Process Abseil's CMake build system
add_subdirectory(abseil-cpp)

add_executable(untitled main.cpp)

# Declare dependency on the absl::strings library
target_link_libraries(untitled absl::strings)
