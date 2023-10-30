cmake_minimum_required(VERSION 3.12)

project(benchmark)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(${CMAKE_PROJECT_NAME} src/source.cpp)

if (UNIX)
    find_package(Threads REQUIRED)
    target_link_libraries(benchmark PRIVATE Threads::Threads)
endif()

set_property(DIRECTORY ${CMAKE_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${CMAKE_PROJECT_NAME})

