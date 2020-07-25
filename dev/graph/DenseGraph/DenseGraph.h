#ifndef DENSEGRAPH_H
#define DENSEGRAPH_H

#include <vector>
#include "Edge.h"
class DenseGraph
{
  int nV, nE;
  bool bDigraph;

  vector <vector<bool > > adj;

public:
  DenseGraph(int v, bool digraph = false) :
      adj(V), nV= v, nE =0, bDigraph (digraph))
	{
	    for (int i =0 ; i <v , i++)
		     adj[i].assign(v, false);
	}
  
};

#endif
