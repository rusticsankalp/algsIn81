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
