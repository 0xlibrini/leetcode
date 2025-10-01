#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	max(int *candies, int candiesSize)
{
	int	i;
	int	max;

	i = 0;
	max = candies[0];
	while (i < candiesSize)
	{
		if (max < candies[i])
			max = candies[i];
		i++;
	}
	return (max);
}
bool	*kidsWithCandies(int *candies, int candiesSize, int extraCandies,
		int *returnSize)
{
	int i = 0;
	int j = 0;
	int m = max(candies, candiesSize);
	bool *arr = malloc(candiesSize * sizeof(bool));
	while (i < candiesSize)
	{
		j = 0;
		j = candies[i];
		j += extraCandies;
		if (j >= m)
		{
			arr[i] = true;
			(*returnSize)++;
		}
		else
		{
			arr[i] = false;
			(*returnSize)++;
		}
		i++;
	}
	return (arr);
}