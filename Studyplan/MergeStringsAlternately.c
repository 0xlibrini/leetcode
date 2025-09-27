/*
  Source: https://leetcode.com/problems/merge-strings-alternately/description/
*/

char * mergeAlternately(char * word1, char * word2)
{
     int i = 0;
    int s = strlen(word1)+ strlen(word2);
    char *p = malloc(s + 1);
    memset(p, 1, s-1);
    p[s] = '\0';
    while (p[i])
    {
        if(*word1)
        {
            p[i] = *word1;
            i++;
            word1++;
        }
        if(*word2)
        {
            p[i] = *word2;
            i++;
            word2++;
        }
    }
    return p;
}