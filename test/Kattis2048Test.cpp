
#include <boost/log/trivial.hpp>
#include <boost/test/unit_test.hpp>

#include "kattis_2048.h"

namespace cp
{
    namespace kattis
    {

        BOOST_AUTO_TEST_CASE(kattis_2048_Test)
        {
            Kattis2048 q2048;

            int arr[4][4] = {
                2,0,0,2,
                4,4,8,8,
                2,64,32,4,
                1024,1024,64,0
            };

            q2048.run2048(arr, 1);


            //KMP kmp("ababababca");
            //size_t k = kmp.singleSearch("aacababababca");
            //BOOST_TEST_MESSAGE("Testing initialization :");
            //BOOST_CHECK_EQUAL(3, k);
            //BOOST_LOG_TRIVIAL(debug) << "A debug severity message";

        }
    }
}