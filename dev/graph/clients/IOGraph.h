#ifndef IOGRAPH_H
#define IOGRAPH_H
#include <iostream>
#include <fstream>

template <class Graph>
class IOGraph
{
  public:
  void show (const Graph &);
  void scanEZ(Graph &);
  void scan(std::ifstream& inp, Graph& G);
};


#include "IOGraph.cpp"

#endif
