/**
 * Source: https://leetcode.com/problems/longest-common-prefix/description/
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	calcul_len(char **strs, int sizeSize)
{
	int	i;
	int	z;
	int	flag;
	int	j;

	i = 0;
	z = 0;
	flag = 0;
	while (i < sizeSize)
	{
		j = strlen(strs[i]);
		if (!flag)
		{
			z = j;
			flag = 1;
		}
		if (j < z)
			z = j;
		i++;
	}
	return (z);
}
char	*longestCommonPrefix(char **strs, int strsSize)
{
	int i;
	int m;
	int k;
	int flag;
	char j;

	i = 0;
	m = 0;
	k = 0;
	flag = 0;
	while (m < calcul_len(strs, strsSize))
	{
		i = 0;
		j = strs[i][k];
		while (i < strsSize)
		{
			if (strs[i][k] == j)
				i++;
			else if (m != 0)
			{
				flag = 1;
				break ;
			}
			else if (m == 0)
				return (strdup(""));
		}
		if (flag)
			break ;
		if (i == strsSize)
		{
			i = 0;
			k++;
		}
		m++;
	}
	char *str = malloc(m + 1);
	strncpy(str, strs[0], m);
	str[m] = '\0';
	return (str);
}