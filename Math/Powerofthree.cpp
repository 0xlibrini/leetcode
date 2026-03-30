
/*
    Source : https://leetcode.com/problems/power-of-three/description
*/


#include <iostream>

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(!n)
            return false;
        if((n % 3) && n != 1 )
        {
            std::cout << n << std::endl;
            return false;
        }
        if(n == 1)
            return true;
        return (isPowerOfThree(n / 3));
    }
};
