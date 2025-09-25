/**
 * Source: https://leetcode.com/problems/two-sum/description/
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include "stdlib.h"

int	*twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int	i;
	int	j;
	int	m;
	int	*result;

	i = 0;
	j = 0;
	m = 0;
	*returnSize = 2;
	while (i < numsSize - 1)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				result = malloc(2 * sizeof(int));
				result[0] = i;
				result[1] = j;
				return (result);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
