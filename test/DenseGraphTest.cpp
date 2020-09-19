//#define BOOST_TEST_MODULE DenseGraphTests
#include <boost/log/trivial.hpp>
#include <boost/test/unit_test.hpp>

#include "graph/DenseGraph/DenseGraph.h"
#include "graph/clients/IOGraph.h"

using namespace std;
BOOST_AUTO_TEST_CASE(DenseGraphCreationTest)
{
 DenseGraph dg(2,false);
 IOGraph<DenseGraph> iograph;
 std::ifstream ifs("twoNodeGraph.txt");

 //iograph.scan(ifs , dg);

  int size,v,w;
  ifs >>size;

  for(int i = 0; i<size;i++)
  {
    ifs >> v >> w;
    dg.Insert(Edge(v,w));
  }
 
  cout << "\nsize of the graph " << dg.V() << "," <<dg.E();
  BOOST_CHECK_EQUAL(dg.V() , 2);
  BOOST_CHECK_EQUAL(dg.E() , 1);
   
 //BOOST_CHECK_EQUAL(3,0);
}
