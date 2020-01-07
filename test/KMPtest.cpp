#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN  // in only one cpp file

#define BOOST_TEST_MODULE KMPTests
#include <boost/log/trivial.hpp>
#include <boost/test/unit_test.hpp>

#include "kmp.h"

BOOST_AUTO_TEST_CASE(PassTest2)
{
    KMP kmp("ababababca");
    BOOST_TEST_MESSAGE( "Testing initialization :" );
    //BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
    //BOOST_CHECK_EQUAL(4, sqr(2));
}
/*
BOOST_AUTO_TEST_CASE(PassTest)
{
    BOOST_CHECK_EQUAL(4, sqr(2));
}

BOOST_AUTO_TEST_CASE(PassTest3)
{
    BOOST_CHECK_EQUAL(9, sqr(3));
}
*/
