#ifndef KMP_H
#define KMP_H

#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class KMP
{
private:
    string pattern;
    size_t len;
    size_t *pi;
public:
    KMP(const string& pattern);
    size_t singleSearch(const string& search);
};
#endif
