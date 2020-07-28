#include "DenseGraphIterator.h"

DenseGraphIterator::DenseGraphIterator(const DenseGraph &G, int v) :
 G(G), v(v) , i( -1) 
{}

int DenseGraphIterator::Begin()
{
 return 0;
}

int DenseGraphIterator::Next()
{
 return 0;
}

bool DenseGraphIterator::End()
{
 return false;
}
