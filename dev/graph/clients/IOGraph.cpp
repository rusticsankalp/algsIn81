#ifndef IOGRAPH_CPP
#define IOGRAPH_CPP

#include "IOGraph.h"
#include "Edge.h"
using namespace std;

template<class Graph>
void  IOGraph<Graph>::scan(std::ifstream& inp, Graph& G)
{
  int size,v,w;
  inp >>size;
  //Graph G2(size);

  for(int i = 0; i<size;i++)
  {
    inp >> v >> w;

    cout << "\n Inserting edge" <<v << "," <<w;
    G.Insert(Edge(v,w));
  }
}

template<class Graph>
void IOGraph<Graph>::show(const Graph&G)
{
 for(int s =0 ;s <G.V();s++)
 {
   cout.width(2);
   cout << s << ":";
   typename Graph::Iterator A(G,s);

   for(int t= A.Begin(); !A.End();t = A.Next())
   {
     cout << t << " ";
   }
  cout << endl;

 }
}

#endif
