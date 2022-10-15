#include "DenseGraph.h"

DenseGraph::DenseGraph(int v, bool digraph) : 
    vertices(v), isDigraph(digraph), edges(0)
    {
        adj.resize(v,vector<bool>(v,0)); 
    }

int DenseGraph::V(){ return vertices;}
int DenseGraph::E(){return edges;}
bool DenseGraph::Directed(){return isDigraph;}
void DenseGraph::Insert(Edge e)
{
    if(!adj[e.v][e.w]) 
    {
        edges++;
        adj[e.v][e.w] = true;
    }
    if(!Directed())
       adj[e.w][e.v] = true;
}
