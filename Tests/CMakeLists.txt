cmake_minimum_required(VERSION 3.6)

find_package(Catch2 CONFIG REQUIRED)
add_executable(unitTests unitTests.cpp)

target_link_libraries (unitTests LINK_PUBLIC Core)
target_link_libraries(unitTests PRIVATE Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(unitTests)