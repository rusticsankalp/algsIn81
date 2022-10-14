#include <boost/log/trivial.hpp>
#include "kmp.h"

KMP::KMP(const string& pat)
{

    this->pattern = pat;
    cout << "pattern,lenght :" <<pattern << " " <<pattern.length() <<endl;

    len = pattern.length();
    pi= new size_t [len+1];

    for(int i = 0 ;i <len;i++)
    {
        pi[i] =0;
    }

    size_t  k = 0;
    for (size_t i =1;i <len;i++)
    {
        cout <<"i :"<<i<<endl;
        while(k != 0  && (pattern[i] != pattern[k]))
        {
             BOOST_LOG_TRIVIAL(trace) <<"Crawl back k"<<k;
            k = pi[k-1];
            BOOST_LOG_TRIVIAL(trace)  <<"Crawl back k"<<k <<endl;
        }

        if(pattern[i] == pattern[k])
        {

            k++;
        }
        pi[i]= k;
        cout <<"pi[i], k "<<pi[i]<<","<<k;
    }


    cout <<" \n";
    for(size_t i = 0 ;i <len;i++)
    {
        cout <<" "<<pi[i];
    }
}

size_t KMP::singleSearch(const string& search)
{

    //size_t k = 0 ;
    size_t s = 0, sd =0 , q=0,j;
    for (j = 0; j<search.length()&& q<pattern.length();j++,q++)
    {
         cout <<"j :"<<j<<endl;
        while( q!=0 && search[j] != pattern[q])
        {
            cout <<"Crawl back q"<<q;
            q = pi[q-1];
            cout <<"Crawl back q"<<q <<endl;
        }

        //if(search[j]==pattern[q])
          //  q++;
    }
   cout <<"\n exit q "<<q;
    if (q== pattern.length())
    {
        cout <<"\n pattern found at "<<j-pattern.length();
    }
    return j-pattern.length();
}

