#include "DenseGraphIterator.h"

DenseGraphIterator::DenseGraphIterator(const DenseGraph &G, int v) :
 G(G), v(v) , i( -1) 
{}

int DenseGraphIterator::Begin()
{
 i = -1; 
 return Next();
}

int DenseGraphIterator::Next()
{
  for (i++;i<G.V();i++)
  {
   // if(G.adj[v][i] == true) return i;
    if(G.IteratorTest(v,i)) return i;
  }
  return -1;

}

bool DenseGraphIterator::End()
{
 return i >= G.V();
}
