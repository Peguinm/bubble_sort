set(
  SOURCES
  main.cpp
  display/entity.cpp
  display/entity_manager.cpp
  display/my_window.cpp
  display/colum.cpp
  bubble_sort/bubble_sort.cpp
)

set(
  HEADERS
  display/entity.h
  display/entity_manager.h
  display/my_window.h
  display/colum.h
  bubble_sort/bubble_sort.h
  bubble_sort/sort_enum.h
)

include_directories(${HEADER})
add_executable(bubbleSort ${SOURCES})

target_link_libraries(
  bubbleSort
  sfml-system
  sfml-window
  sfml-graphics
)

