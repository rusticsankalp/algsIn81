#include "kmp.h"

KMP::KMP(const string& pattern)
{

    this->pattern = pattern;
    cout << "pattern length is :"<<pattern.length()<<"\n";

    prefixTable = vector<size_t> (pattern.length(),0);

    size_t k =0 ;

    for(size_t q=1;q<pattern.length();q++)
    {
        while(k>=0 && pattern[k+1] != pattern[q])
            k = prefixTable[k];
        if(pattern[k+1]==pattern[q])
            k=k+1;
        prefixTable[k]=k;
    }

    copy(prefixTable.begin(),prefixTable.end(),ostream_iterator<char>(cout," "));
/*
    size_t len = pattern.length();
    size_t R = 256;

    copy(pattern.begin(),pattern.end(),ostream_iterator<char>(cout," "));

    dfa  = vector<vector<int> >(R,vector<int>(len,0));
    for_each(dfa.begin(),dfa.end(),
     [&](vector<int> const&v){
        cout << "\n";
        copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
     }
    );
*/
    //dfa[(size_t)pattern[0] ][0] = 1;
}

bool KMP::search(const string& searchString)
{
    return false;
}
