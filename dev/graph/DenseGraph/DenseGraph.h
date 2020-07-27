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
  int V();
  int E();
  bool Directed();
  void Insert (Edge);
  void Remove (Edge);
  //bool Edge(int v, int w);


  
};

#endif
