#project(lib.algsin81)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Boost with the "log" component
find_package(Boost REQUIRED COMPONENTS log)

file(GLOB_RECURSE PROJECT_SOURCES
    ${CMAKE_SOURCE_DIR}/dev/**/*.cpp
    ${CMAKE_SOURCE_DIR}/dev/**/*.h
)

add_library(
  lib.algsin81 
  ${PROJECT_SOURCES})
target_link_libraries (
  lib.algsin81
  ${Boost_LOG_LIBRARY}
  )
