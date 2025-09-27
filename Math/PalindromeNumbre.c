
/*
  Source : https://leetcode.com/problems/palindrome-number/description/
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
static int	ft_len(int i)
{
	int	count;

	count = 0;
	if (i == 0)
		count++;
	if (i < 0)
		count++;
	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*p;
	long	m;
	int		i;

	m = (long)n;
	i = ft_len(m);
	p = malloc(sizeof(char) * i + 1);
	if (!p)
		return (NULL);
	p[i--] = '\0';
	if (m < 0)
	{
		m = m * (-1);
		p[0] = '-';
	}
	if (m == 0)
		p[0] = '0';
	while (m != 0)
	{
		p[i--] = (m % 10) + 48;
		m /= 10;
	}
	return (p);
}
bool isPalindrome(int x) {
    
     int i = 0;
  char *str;
  str = ft_itoa(x);
  int c = strlen(str);
  int len = c - 1;
  while( i < c / 2 )
  {
    if(str[i] == str[len])
    {
        i++;
        len--;
    }
    else
       return 0;
  }
  return 1;
}