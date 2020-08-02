#include "EdgeIterationClient.h"
using namespace std;

template<class Graph>
vector<Edge> EdgeIterationClient<Graph>::Edges(Graph &G)
{
  vector<Edge> g(G.E());

  return g;
}
