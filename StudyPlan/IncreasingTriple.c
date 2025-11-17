#include <stdio.h>
#include <stdbool.h>
int mark = 0;

int find_last_min(int *nums, int num1, int num , int i,  int j)
{
    int save = j;
   while( j < i)
   {
        if(nums[j] < num1 && nums[j] > num)
            return j;
        j++;
   }
   return save;
}
int find_max(int  *nums,int num ,int numsSize, int j)
{
    while(j <  numsSize)
    {
        if(nums[j] >  num)
        {
            j = find_last_min(nums ,nums[j],num,numsSize,j);
            return j;
        }
        j++;
    }
    mark = 1;
    return j;
}

int find_min(int  *nums, int num, int i, int m)
{
    
    while( m  < i )
    {
        if(nums[m] <  num)
        {
            return m ;
        }
        m++;
    }
    mark = 1;
    return m;
}
int   light_cheak(int *nums, int size ,int i)
{
    int j  = 0; 
    int m = 0;
    mark = 0;
    m = find_min(nums, nums[i], i, m);
    printo
    if(!mark)
    { 
        if(find_min(nums, nums[m], i , m))
                return 1;
            else
                return 0;
    }
    return 0;
}
bool increasingTriplet(int* nums, int numsSize)
{
    int j = 0; 
    int i = 0;
    int flag = 0;
    while(i + 2  < numsSize)
    {
        mark = 0;
        if(j == numsSize)
            j = i;
        j = find_max(nums, nums[i] , numsSize,  j);
        if(!mark)
        {
            if(find_max(nums,nums[j],numsSize, j) && !mark)
            {
                flag = 1 ;
                return true;
            }
        }
        i++;
    }
   // printf("%d\n", i);
    if(!light_cheak(nums, numsSize , i))
    {
         i++;
    }
         if(!light_cheak(nums, numsSize, i))
            return false;
    
    return true;
}
int main()
{
    int arr[] = {5,1,6};
    int k = increasingTriplet(arr,3);
   printf("%d\n", k);
}