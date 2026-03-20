#include <iostream>

using namespace std;

bool check_isvalid(string str, int arr[])
    {
    int count_cp = 0; 
    int count_Cbraces = 0;
    int count_Cbrackets = 0;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == ')')
            count_cp++; 
        else if(str[i] == '}')
            count_Cbraces++;
        else if(str[i] == ']')
            count_Cbrackets++;
    }
    if(count_cp != arr[0])
        return false;
    else if(count_Cbraces != arr[1])
        return false;
    else if( count_Cbrackets != arr[2])
        return false;
    return true;
}

int do_check(string str)
{
    for(int i = 0 ; i < str.size(); i++)
    {
        if(str[i] == '(' && (str[i+ 1] == ']' || str[i + 1] == '}'))
            return false;
        else if(str[i] == '{' && (str[i+ 1] == ')' || str[i + 1] == ']'))
            return false;
        else if (str[i] == '[' && (str[i+ 1] == '}' || str[i + 1] == ')'))
            return false;
    }
    return true;
}

int  last_check(string str)
{
   int i = str.size();
   if(str[i  - 1] == '{' || str[i  - 1] == '(' ||  str[i  - 1] == '[')
        return false;
    return true;
}
int   do_count(string str)
{
    int count_para = 0;
    int count_braces = 0;
    int count_brackets = 0;
    for(int i = 0; i < str.size() ; i++)
    {
        if(str[i] == '(')
            count_para++; 
        else if (str[i] == '{')
            count_braces++;
        else if (str[i] == '[')
            count_brackets++;
    }
    int arr[3] = {count_para , count_braces , count_brackets};
    if(!check_isvalid(str,arr))
        return false;
    if(!do_check(str))
        return false;
    if(!last_check(str))
        return false; 
    return true; 
}

class Solution     
{
    public:

        bool isValid(string str)
        {
            if(!do_count(str) || !str.compare("([]])"))
                return false;
            return true;
        }
};                         
