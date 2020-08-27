#include "DenseGraph.h"

DenseGraph::DenseGraph(int v, bool digraph = false) : 
    adj(v), nV(v) ,nE(0),bDigraph(digraph)
{
    for(int i=0;i < nV;i++)
    {
        adj[i].assign(nV,false);

    }
}

void DenseGraph::Insert (Edge e)
{
  int v = e.w, w = e.w;
  if(false == adj[e.v][e.w])  
    nE++;
  adj[e.v][e.w] = true;
  if(!bDigraph) 
    adj[e.w][e.v] = true;
}


bool DenseGraph::Directed() const
{
  return bDigraph;
}

void DenseGraph::Remove(Edge e)
{
  if(true == adj[e.v][e.w])
    nE--;
  adj[e.v][e.w] = false;
  if(!bDigraph)
    adj[e.w][e.v] = false;
    
}

bool DenseGraph::IfEdgeExists(int v, int w) const
{
 return adj[v][w];
}

DenseGraph::Iterator::Iterator(const DenseGraph &G, int v) :
 G(G), v(v),i(-1)
{}

int DenseGraph::Iterator::Begin()
{
  i = -1;
  return Next();
}

int DenseGraph::Iterator::Next()
{
  for (i++;i <G.V();i++)
  {
    G.adj[v][i] == true;
  } 

  return -1;
}

bool DenseGraph::Iterator::End()
{
  return i > G.V();
}






