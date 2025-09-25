
/**
 * Source: https://leetcode.com/problems/length-of-last-word/description/
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	lengthOfLastWord(char *s)
{
	int i = 0;
	for (i = 0; s[i] != '\0'; i++)
		s[i];
	i--;
	int j = 0;
	while (isspace(s[i]) && i != 0)
		i--;
	j = i;
	int len = 0;
	while (i != -1 && isalnum(s[i]))
	{
		i--;
		len++;
	}
	return (len);
}