#define BOOST_TEST_MODULE SqrTests
#include <boost/test/unit_test.hpp>

#include "sqr.h"

BOOST_AUTO_TEST_CASE(PassTest2)
{
    BOOST_CHECK_EQUAL(4, sqr(2));
}

BOOST_AUTO_TEST_CASE(PassTest)
{
    BOOST_CHECK_EQUAL(4, sqr(2));
}

BOOST_AUTO_TEST_CASE(PassTest3)
{
    BOOST_CHECK_EQUAL(9, sqr(3));
}
