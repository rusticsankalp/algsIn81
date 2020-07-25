project(lib.algsin81)

add_library(
  lib.algsin81 
  graph/Edge/Edge.h
  graph/DenseGraph/DenseGraph.h
  patterns/kmp.h
  patterns/kmp.cpp
  sorts/keyindexcountsort.h
  sorts/keyindexcountsort.cpp
)
target_link_libraries (lib.algsin81)
