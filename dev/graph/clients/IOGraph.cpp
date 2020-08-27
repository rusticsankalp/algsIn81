#include "IOGraph.h"
#include "Edge.h"
using namespace std;

template<class Graph>
void  IOGraph<Graph>::scan(ifstream& inp, Graph& G)
{
  int size,v,w;
  inp >>size;
  Graph G2(size);

  for(int i = 0; i<size;i++)
  {
    inp >> v >> w;
    G2.Insert(Edge(v,w));
  }

  G = G2;
}
