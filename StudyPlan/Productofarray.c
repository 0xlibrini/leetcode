/*
	Source : https://leetcode.com/problems/product-of-array-except-self/description/
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	do_product(int *nums, int i, int numsSize)
{
	int	j;
	int	m;

	j = 1;
	m = 0;
	// while (i < numsSize)
	// {
		while (m < numsSize)
		{
			if (m == numsSize - 1 && m == i)
				break ;
			else if (m == i)
				m++;
			j *= nums[m];
			m++;
		}
	return (j);
}

int	*productExceptSelf(int *nums, int numsSize, int *returnSize)
{
	 int	i;
	 int	*arr;
     int m = 0;
     int j = 1;

	 i = 0;
	 *returnSize = numsSize;
	arr = malloc(numsSize * sizeof(int));
    while (i < numsSize)
	{
        m = 0;
        j = 1; 
		while (m < numsSize)
		{
			if (m == numsSize - 1 && m == i)
				break ;
			else if (m == i)
				m++;
			j *= nums[m];
			m++;
		}
        arr[i] = j;
        i++;    
	}
    return arr;
}
int	main(void)
{
	int tab[] = {1, 2, 3, 4};
	int size;
	int *arr = productExceptSelf(tab, sizeof(tab) / sizeof(tab[0]), &size);
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", arr[i]);
	}
}