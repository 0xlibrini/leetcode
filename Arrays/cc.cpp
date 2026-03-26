#include <iostream>

using namespace std;

int main()
{
    std::string res = "lib";
    string str  = "re";
    for(int i = res.size() - 1 ;  i >= 0 ; i--)
    {
        for( int y  = str.size() - 1; y >= 0; y--)
        {
            printf("index = %d\n" , y);
            std::cout << str[y] << std::endl;
        }

    }
} 