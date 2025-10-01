#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct index
{
	char	c;
	int		j;
}			t_num;
int	check_vowel(char s)
{
	if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A'
		|| s == 'E' || s == 'I' || s == 'O' || s == 'U')
		return (1);
	return (0);
}
int	count_vowel(char *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (check_vowel(*s))
		{
			count++;
			s++;
		}
		else
			s++;
	}
	return (count);
}
void	file_with_index(t_num *num, char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	count_vowel(s);
	while (s[i])
	{
		if (check_vowel(s[i]))
		{
			num[j].c = s[i];
			num[j].j = i;
			j++;
		}
		i++;
	}
}
void	reverse_place(t_num *arr, int j)
{
	int		i;
	int		e;
	char	c;

	i = 0;
	e = j - 1;
	while (i < j / 2)
	{
		c = arr[i].c;
		arr[i].c = arr[e].c;
		arr[e].c = c;
		i++;
		e--;
	}
}
char	*full_new(char *str, t_num *arr, char *s)
{
	int	i;
	int	flag;
	int	j;
	int	count;

	count = 0;
	i = 0;
	flag = 0;
	j = 0;
	count = count_vowel(s);
	while (s[i])
	{
		flag = 0;
		if (count)
		{
			while (1)
			{
				if (i == arr[j].j)
				{
					str[i] = arr[j].c;
					flag = 1;
					count--;
					j++;
				}
				break ;
			}
		}
		if (!flag)
			str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
char	*reverseVowels(char *s)
{
	int i = 0;
	char *str;

	i = count_vowel(s);
	if (i)
	{
		t_num arr[i];
		memset(arr, 0, sizeof(arr));
		file_with_index(arr, s);
		reverse_place(arr, i);
		str = malloc(strlen(s) + 1);
		str = full_new(str, arr, s);
		return (str);
	}
	return (s);
}