#include "Edge.h"
#include <vector>

template<class Graph>
class EdgeIterationClient
{
public:
  std::vector<Edge> Edges(Graph &G);
};
