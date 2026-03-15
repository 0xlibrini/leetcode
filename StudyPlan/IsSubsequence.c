/*
	Source :  https://leetcode.com/problems/is-subsequence/
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool	isSubsequence(char *s, char *t)
{
	int		s_index;
	int		i;
	int		len_s;
	int		j;
    
	s_index = 0;
	i = 0;
	len_s = strlen(s);
	char	arr[len_s + 1];
	j = 0;
	while (t[i])
	{
		if (s[s_index] == t[i])
		{
			arr[j] = s[s_index];
			s_index++;
			j++;
		}
		i++;
		if (s_index == len_s)
			break ;
	}
	arr[j] = '\0';
	if (strlen(arr) != len_s)
		return (false);
	return (true);
}
