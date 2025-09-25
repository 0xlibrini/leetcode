
/**
 * Source: https://leetcode.com/problems/power-of-two/description/
 */

#include <stdbool.h>

bool	isPowerOfTwo(int n)
{
	if (n == 0)
		return (false);
	if (n > 1 && n % 2 != 0)
		return (false);
	if (n == 1)
		return (true);
	if (n < 1)
		return (false);
	return (isPowerOfTwo(n / 2));
}