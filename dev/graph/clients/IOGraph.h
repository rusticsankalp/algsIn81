#include <iostream>
#include <fstream>

template <class Graph>
class IOGraph
{
  public:
  static void show (const Graph &);
  static void scanEZ(Graph &);
  static void scan(std::ifstream& inp, Graph& G);
};
