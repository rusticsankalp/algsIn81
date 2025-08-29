#include <boost/log/trivial.hpp>
#include <boost/test/unit_test.hpp>

#include "selection_sort.h"

namespace sort
{
 
        BOOST_AUTO_TEST_CASE(selection_sort_1)
        {
            vector<int> a1 = {5,4,3,2,1}            ;
            SelectionSort ss{};
            
            auto result = ss.Sort(a1);

            //BOOST_CHECK_EQUAL(0, result);
        }


        BOOST_AUTO_TEST_CASE(selection_sort_2)
        {
            //BOOST_CHECK_EQUAL(190, result);
        }

}