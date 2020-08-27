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
  //bool Edge(int v, int w);

  class Iterator 
  {
    const DenseGraph&G; 
    int i, v;
  public: 
    Iterator(const DenseGraph &G, int v);
    int Begin();
    int Next();  
    bool End();
  };

  friend class Iterator;  
};

#endif
