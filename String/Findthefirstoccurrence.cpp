
/*
    Source : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
*/

#include <iostream>

class Solution {
public:
    int strStr(string haystack, string needle)
    {
        size_t pos = haystack.find(needle);
        if(pos == std::string::npos)
            return -1;
        return pos;
    }
};

