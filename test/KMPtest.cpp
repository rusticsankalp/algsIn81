#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN  // in only one cpp file

#define BOOST_TEST_MODULE KMPTests
#include <boost/log/trivial.hpp>
#include <boost/test/unit_test.hpp>

#include "kmp.h"

BOOST_AUTO_TEST_CASE(PassTest2)
{
    KMP kmp("ababababca");
    size_t k =kmp.singleSearch("aacababababca");
    BOOST_TEST_MESSAGE( "Testing initialization :" );
    BOOST_CHECK_EQUAL(3, k);
    //BOOST_LOG_TRIVIAL(debug) << "A debug severity message";

}
