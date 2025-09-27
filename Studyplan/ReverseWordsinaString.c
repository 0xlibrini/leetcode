/*
    Source : https://leetcode.com/problems/reverse-words-in-a-string/description/
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *reverseWords(char *str)
{
    int i = 0;
    int j = 0;
    int m = 0;
    int flag = 0;
    while(*str && *str == 32 )
    {
        str++;
        flag = 1;
    }
    int e =  strlen(str);
    e--;
    while(e >= 0  && str[e] == 32)
        e--; 
    char *s = malloc(&str[e] - &str[0] + 1);
    j = e;
    while(j >= 0)
    {
        if(str[j] == 32)
        {
            m = j;
            j++;
            while(j <= e)
                s[i++] = str[j++];
            j = m;
            s[i++] = str[j--];
            while(str[j] == 32 && j != 0)
                j--;
            e = j;
        }
        j--;
    }
   memcpy(s + i,str , e - j);
   i += e - j;
   s[i] = '\0';
    return s;
}
