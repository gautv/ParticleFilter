cmake_minimum_required(VERSION 3.6)

project(particleFilter LANGUAGES CXX)

set(CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(.)

add_subdirectory(Core)
add_subdirectory(Tests)

add_executable(particleFilter particleFilter.cpp)
target_link_libraries (particleFilter LINK_PUBLIC Core)

