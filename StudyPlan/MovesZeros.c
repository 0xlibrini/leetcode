
/*
	Source : https://leetcode.com/problems/move-zeroes/
*/
#include <stdio.h>
int count_zero(int *nums, int numsSize)
{
    int i = 0;
    int count = 0;
    while(i < numsSize)
    {
        if(*nums == 0)
            count++;
        nums++;
        i++;
    }
    return count;
}
void moveZeroes(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
	int flag = 0; 
	int *save = nums;  
    int  tab[numsSize];
	int *arr = tab;
	int *save2 = arr; 
    int x = count_zero(nums, numsSize);
    if(*nums == 0 && numsSize == 1)
    {
        printf("%d\n", *nums);
        return  ;
    }
    while(j < numsSize)
    {
		flag = 0;
        if(*nums != 0)
		{
         	*arr = *nums;
			arr++;
			nums++;
			flag =1;
		}
        j++;
		if(!flag)
			nums++;
    }
    j = 0;
	while( j < x)
	{
		*arr = 0;
		arr++;
		j++;
	}
	nums = save;
	i = 0;
	while(i < numsSize)
	{
		nums[i] =  tab[i];
		printf("%d\n" , nums[i]);
		i++;
	}
}