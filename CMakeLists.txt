cmake_minimum_required(VERSION 3.6)

project(particleFilter LANGUAGES CXX)

add_subdirectory(Core)
add_subdirectory(Tests)

add_executable(particleFilter particleFilter.cpp)
target_link_libraries (particleFilter LINK_PUBLIC Core)

