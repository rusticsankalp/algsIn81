
#include "DenseGraph.h"

Edge::Edge (int v =-1 , int w= -1) : v(v) , w(w){}

DenseGraph::DenseGraph(int v, bool digraph = false) : 
    adj(v), nV(v) ,nE(0),bDigraph(digraph)
{
    for(int i=0;i < nV;i++)
    {
        adj[i].assign(nV,false);

    }
}
/*
void DenseGraph::Insert (Edge e)
{
  int v = e.w, w = e.w;
  if(false == adj[e.v][e.w])
    {
      adj[e.v][e.w] = true;
      if(!digraph) adj[e.w][e.v] = true;
    }
}
*/

bool DenseGraph::Directed()
{
  return bDigraph;
}

void Remove(Edge e)
{
    int v = e.v;
}





