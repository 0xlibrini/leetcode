
/* 
    Source : https://leetcode.com/problems/add-binary/description/
*/

#include <iostream>

using namespace std;

string     equal_size(string &a, string &b)
{
    int carry = 0;
    int num = 0;
    std::string res;
    for(int i = a.size() - 1 ; i >= 0 ; i--)
    {
        num =  a[i] - '0' + b[i] - '0' + carry;
        if(num == 0)
        {
            res.insert(0,1, '0');
            carry = 0;
        }
        else if(num == 1)
        {
            res.insert(0,1, '1');
            carry = 0;
        }
        else if(num == 2)
        {
            res.insert(0,1, '0');
            carry = 1; 
        }
        else
        {
            res.insert(0,1, '1');
            carry = 1;
        }
    }
    if(carry)
        res.insert(0,1, '1');
    return res;
}

string   diff_size(string big, string small)
{
    int carry = 0;
    std::string res;
    int num = 0;
    int i = big.size() - 1;
    int z = small.size() - 1;
    for(; i >= 0 ; i--)
    {
        for(; z >= 0 ; z--)
        {
            int num  = big[i] - '0' + small[z] - '0' + carry;
            if(num == 0)
            {
                res.insert(0,1, '0');
                carry = 0;
                i--;
            }
            else if(num == 1)
            {
                res.insert(0,1, '1');
                carry = 0;
                i--;
            }
            else if(num == 2)
              {
                res.insert(0,1, '0');
                carry = 1;
                i--; 
            }
            else
            {
                res.insert(0,1, '1');
                carry = 1;
                i--;
            }
        }
        if(carry)
        {
            num = big[i] - '0' + carry;
            if(num == 1)
            {
                res.insert(0, 1 ,'1');
                carry = 0;
            }
            else if(num == 2)
            {
                res.insert(0, 1 , '0');
                carry = 1;
            }
            if(!i)
                res.insert(0, 1, '1');
        }
        else
        {
            num  = big[i] - '0';
            if(!num)
                res.insert(0, 1, '0');
            else
                res.insert(0, 1, '1');
        }
    }
    return res;
}

class Solution {
public:
  
    string addBinary(string a, string b)    
    {
        if(a.size() == b.size())
            return equal_size(a,b);
        else if(a.size() > b.size())
            return diff_size(a,b);
        return diff_size(b,a);
    }
};