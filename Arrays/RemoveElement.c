
/*
    Source : https://leetcode.com/problems/remove-element/
*/

#include <stdio.h>

int do_count(int *nums, int numsSize , int val)
{
    int count = 0;
    for(int i = 0; i < numsSize ; i++)
    {
        if(nums[i] != val)
            count++;
    }
    return count;
}
int removeElement(int* nums, int numsSize, int val)
{
    if(!numsSize)
        return 0;
    int j = 0;
    int newSize = do_count(nums,numsSize, val);
    if(newSize)
    {
       int newarr[newSize];
        for(int i = 0; i < numsSize; i++)
        {
            if(nums[i] != val)
            {
                newarr[j] = nums[i];
                j++;
            }
        }
        for(int i = 0 ; i < newSize ; i++)
            nums[i] = newarr[i];
        return sizeof(newarr) / sizeof(newarr[0]);
    }
    return 0;
}