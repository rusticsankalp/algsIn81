#ifndef DENSE_GRAPH_ITERATOR_H
#define DENSE_GRAPH_ITERATOR_H
#include "DenseGraph.h"

class DenseGraphIterator 
{
  const DenseGraph &G;
  int i, v;
  
public: 
  DenseGraphIterator(const DenseGraph &G, int v);
  int Begin();
  int Next();  
  bool End();
};

#endif
