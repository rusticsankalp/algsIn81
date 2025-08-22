#project(lib.algsin81)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Boost with the "log" component
find_package(Boost REQUIRED COMPONENTS log)

add_library(
  lib.algsin81 
  graphs/Edge.h
  graphs/DenseGraph.h
  graphs/DenseGraph.cpp
  patterns/kmp.h
  patterns/kmp.cpp
  sorts/keyindexcountsort.h
  sorts/keyindexcountsort.cpp
 "CP/kattis_2048.cpp")
target_link_libraries (
  lib.algsin81
  ${Boost_LOG_LIBRARY}
  )
