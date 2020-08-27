project(lib.algsin81)


add_library(
  lib.algsin81 
  graph/clients/EdgeIterationClient.cpp
  graph/clients/IOGraph.cpp
  graph/DenseGraph/DenseGraph.cpp
  #graph/DenseGraph/DenseGraphIterator.cpp
  patterns/kmp.cpp
  sorts/keyindexcountsort.cpp
)


target_include_directories(
  lib.algsin81
  PUBLIC
  graph/DenseGraph
 # graph/DenseGraph
)

target_link_libraries (lib.algsin81)
