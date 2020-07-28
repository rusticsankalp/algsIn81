project(lib.algsin81)


add_library(
  lib.algsin81 
 # graph/Edge/Edge.h
 # graph/DenseGraph/DenseGraph.h
  graph/DenseGraph/DenseGraph.cpp
  graph/DenseGraph/DenseGraphIterator.cpp
 # patterns/kmp.h
  patterns/kmp.cpp
 # sorts/keyindexcountsort.h
  sorts/keyindexcountsort.cpp
)


target_include_directories(
  lib.algsin81
  PUBLIC
 # graph/Edge
 # graph/DenseGraph
)

target_link_libraries (lib.algsin81)
