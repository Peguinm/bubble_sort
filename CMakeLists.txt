cmake_minimum_required(
  VERSION 3.30
)
set(CMAKE_EXPORT_COMPILE_COMMANDS on)

project(
  bubbleSort
  DESCRIPTION "simple graphic visualization of a bubble sort algorithm"
  LANGUAGES CXX
)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED true)

set(SFML_STATIC_LIBRARIES true)
set(SFML_DIR "C:/Libs/SFML-2.6.1/lib/cmake/SFML")

include_directories("C:/Libs/SFML-2.6.1/include")

find_package(SFML 2.6.1 COMPONENTS system graphics window REQUIRED)

add_subdirectory(src)

