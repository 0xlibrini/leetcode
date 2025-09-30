
/*
   Source :https://leetcode.com/problems/can-place-flowers/description/
*/

#include <stdbool.h>

bool	canPlaceFlowers(int *flowerbed, int flowerbedSize, int n)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < flowerbedSize && flowerbedSize > 1)
	{
		if ((i == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0 && n != 0))
		{
			n--;
			flowerbed[i] = 1;
		}
		else if (i > 1 && i + 1 < flowerbedSize && flowerbed[i] == 0
			&& flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0 && n != 0)
		{
			n--;
			flowerbed[i] = 1;
		}
		if (i == flowerbedSize - 1 && flowerbed[i - 1] == 0 && flowerbed[i] == 0
			&& n != 0)
		{
			n--;
			flowerbed[i] = 1;
		}
		i++;
	}
	if (n == 0 || (flowerbedSize == 1 && flowerbed[0] == 0))
		return (true);
	else
		return (false);
}