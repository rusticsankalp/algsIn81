#ifndef DENSEGRAPH_H
#define DENSEGRAPH_H

#include <vector>
#include "Edge.h"
/*
 * Matrix representation
 */

class DenseGraph
{

  int nV, nE;
  bool bDigraph;

  std::vector <std::vector<bool > > adj;

public:
  DenseGraph(int v, bool digraph);
  int V() const;
  int E() const;
  bool Directed() const;
  void Insert (Edge);
  void Remove (Edge);
  bool IteratorTest(int,int) const;
  //bool Edge(int v, int w);

 // class DenseGraphIterator;
  //friend class DenseGraphIterator;  
};

#endif
