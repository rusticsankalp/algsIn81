#include <iostream>
#include "kmp.h"
using namespace std;

char index(string s,int i)
{
    return s[static_cast<size_t>(i -1)];
}
int main()
{
    cout << "Hello World!" << endl;

    string pattern = "ababababca";
    cout << "pattern,lenght :" <<pattern << " " <<pattern.length() <<endl;

    size_t len = pattern.length();




    size_t  pi [10]; pi[0] =0;

    for(int i = 0 ;i <10;i++)
    {
        pi[i] =0;
    }


    size_t  k = 0;

    for (size_t i =1;i <10;i++)
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

    //string search = "aababababcabb";
    string search = "aababababcabb";

    cout <<" \n";
    for(int i = 0 ;i <10;i++)
    {
        cout <<" "<<pi[i];
    }


    k = 0 ;
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

    /*




    for(int q=2;q<=len;q++)
    {


        while(k > 0 && index(pattern,k+1) != -index(pattern,q) )
        {

            //if(k==0) break;
            k = pi[index(k)];
            cout <<" Potential crawl : "<<k <<" ,q: "<<q <<endl;
        }

        if(pattern[index(k+1)] == pattern[index(q)])
        {
            cout <<" --- increment k";
            k++;
        }

        cout <<"K : "<<k<<" ,q: "<<q <<endl;
        pi[index(q)] = k ;
    }
    */



    //copy(pi[0],pi[10],ostream_iterator<char>(cout," "));


    //KMP kmp = KMP("ababababac");
    return 0;
}
