#project(lib.algsin81)
find_package(Boost COMPONENTS log REQUIRED)

add_library(
  lib.algsin81 
  graphs/Edge.h
  graphs/DenseGraph.h
  graphs/DenseGraph.cpp
  patterns/kmp.h
  patterns/kmp.cpp
  sorts/keyindexcountsort.h
  sorts/keyindexcountsort.cpp
)
target_link_libraries (
  lib.algsin81
  ${Boost_LOG_LIBRARY}
  )
