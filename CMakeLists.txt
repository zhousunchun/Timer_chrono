cmake_minimum_required(VERSION 2.6)
project(timer)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -march=native -O3")
set(CMAKE_BUILD_TYPE Release)
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin )
SET( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib )
SET( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib )
include_directories(src)
add_subdirectory(src)

add_executable(demo main.cpp)
target_link_libraries(demo timer)

