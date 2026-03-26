

/*
    Source : https://leetcode.com/problems/plus-one/
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool check_nine(int *arr , int Size)
{
    int count = 0;
    int i = 0;
    while(i < Size)
    {
        if(arr[i] == 9)
        {
            
            count++;
        }
        i++;
    }
    if(count == Size)
        return true;
    return false;
}

int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
    int i  = digitsSize - 1;
    if(check_nine(digits,digitsSize))
    {
        int *arr = malloc((digitsSize + 1) * sizeof(int));
        for( int i = 0 ; i < digitsSize + 1 ; i++)
        {
            if(i == 0)
                arr[i] = 1;
            else
                arr[i] = 0;
        }
        *returnSize = digitsSize + 1;
        return arr;
    }
    if(digits[i] == 9)
    {
        while(i > 0 && digits[i] == 9)
        {
            digits[i] = 0;
            i--;
        }
        digits[i]++;
    }    
    else if(digits[i] < 9)
        digits[i]++;
    *returnSize = digitsSize;
    return digits;
}