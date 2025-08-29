#include <boost/log/trivial.hpp>
#include <boost/test/unit_test.hpp>

#include "kattis_sidewayssorting.h"

namespace cp
{
    namespace kattis
    {

        BOOST_AUTO_TEST_CASE(kattis_sideways_sorting_1)
        {
            vector<string> a1 = 
            {   "oTs",
                "nwi",
                "eox"
            };

            KattisSidewaysSorting kss{};
            auto result = kss.SidewaySort(a1);

            //BOOST_CHECK_EQUAL(0, result);
        }


        BOOST_AUTO_TEST_CASE(kattis_sideways_sorting_2)
        {
            vector<string> a1 =
            { "xAxa","yByb","zCyc"      };

            KattisSidewaysSorting kss{};
            auto result = kss.SidewaySort(a1); //BOOST_CHECK_EQUAL(190, result);
        }
    }
}