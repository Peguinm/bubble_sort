cmake_minimum_required(
  VERSION 3.20
)
set(CMAKE_EXPORT_COMPILE_COMMANDS on)

project(
  bubbleSort
  DESCRIPTION "simple graphic visualization of a bubble sort algorithm"
  LANGUAGES CXX
)

set(SFML_STATIC_LIBRARIES TRUE)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED true)

find_package(SFML 2.6.1 COMPONENTS system graphics window REQUIRED)

add_subdirectory(src)

