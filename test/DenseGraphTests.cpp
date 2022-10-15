#include <boost/log/trivial.hpp>
#include <boost/test/unit_test.hpp>
#include "DenseGraph.h"

BOOST_AUTO_TEST_CASE(DenseGraphCreateTest)
{
    DenseGraph dense(2,false);
    BOOST_CHECK_EQUAL(2, dense.V());

    dense.Insert(Edge(0,1));
    BOOST_CHECK_EQUAL(1, dense.E());
}

BOOST_AUTO_TEST_CASE(DenseGraphCIteratorTest)
{
    DenseGraph dense(5,false);

    dense.Insert(Edge(0,1));
    BOOST_CHECK_EQUAL(1, dense.E());

    dense.Insert(Edge(1,2));
    dense.Insert(Edge(2,3));
    dense.Insert(Edge(3,4));
    dense.Insert(Edge(4,0));

    BOOST_CHECK_EQUAL(5, dense.E());
    
}
