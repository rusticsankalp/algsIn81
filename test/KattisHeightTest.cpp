
#include <boost/log/trivial.hpp>
#include <boost/test/unit_test.hpp>

#include "kattis_height.h"

namespace cp
{
    namespace kattis
    {

        BOOST_AUTO_TEST_CASE(kattis_height_Test_1)
        {
            vector<int> a1 = { 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919 };

            Kattis_height kh{};
            auto result = kh.OrderByHeight(a1);

            BOOST_CHECK_EQUAL(0, result);
        }


        BOOST_AUTO_TEST_CASE(kattis_height_Test_2)
        {
            vector<int> a1 = {919, 918, 917, 916, 915, 914, 913, 912, 911, 910, 909, 908, 907, 906, 905, 904, 903, 902, 901, 900 };

            Kattis_height kh{};
            auto result = kh.OrderByHeight(a1);

            BOOST_CHECK_EQUAL(190, result);
        }
    }
}