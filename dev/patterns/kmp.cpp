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
            cout <<"Crawl back k"<<k;
            k = pi[k-1];
            cout <<"Crawl back k"<<k <<endl;
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

bool KMP::search(const string& searchString)
{
    return false;
}

