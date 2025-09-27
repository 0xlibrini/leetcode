/*
	Source : https://leetcode.com/problems/reverse-words-in-a-string/description/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*reverseWords(char *str)
{
	int		i;
	int		j;
	int		m;
	int		e;
	char	*s;

	i = 0;
	j = 0;
	m = 0;
	while (*str && *str == 32)
		str++;
	e = strlen(str);
	e--;
	while (e >= 0 && str[e] == 32)
		e--;
	s = malloc(&str[e] - &str[0] + 2);
	j = e;
	while (j >= 0)
	{
		if (str[j] == 32)
		{
			m = j;
			j++;
			while (j <= e)
				s[i++] = str[j++];
			j = m;
			s[i++] = str[j--];
			while (str[j] == 32 && j != 0)
				j--;
			e = j;
		}
		j--;
	}
	memcpy(s + i, str, e - j);
	i += e - j;
	s[i] = '\0';
	return (s);
}
