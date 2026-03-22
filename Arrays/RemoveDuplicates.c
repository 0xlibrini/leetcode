
/*
    Source:https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/ 
*/

#include <stdio.h>
#include <stdbool.h>

bool check_dup(int nums , int *newarr , int new_count)
{
    for(int i = 0 ; i < new_count ; i++ )
    {
        if(newarr[i] == nums)
            return false;
    }
    return true;
}

int removeDuplicates(int* nums, int numsSize) 
{
    if(numsSize)
    {
        int new_count  = 0;
        int j = 0;
        if(numsSize == 1)
            return 1;
        int newarr[numsSize];
        for(int  i = 0 ; i < numsSize ; i++)
        {
            if(!check_dup(nums[i], newarr, new_count))
                continue;
            newarr[j] = nums[i];
            j++;
            new_count++;
        }
        for(int i = 0;  i < new_count; i++)
            nums[i] = newarr[i];
        return new_count;
    }
    return 0;
}
