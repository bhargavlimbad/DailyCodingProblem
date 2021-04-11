#include <iostream>
#include <string>
#include <vector>
#include<bits/stdc++.h>
using namespace std ;

std::vector<char> run_length(std::string str)
{
    std::vector<char> result;
    if (str.empty() || str.size() == 1)
    {
        const char *ch = str.c_str();
        result.push_back(*ch);
        return result;
    }

    int count = 1;
    for (int i = 1; i < str.size(); ++i)
    {
        if (str[i] == str[i - 1])
            count++;
        else
        {
            if (count > 1)
            {
                char ch = count+48 ;
                result.push_back(ch);
            }
            result.push_back(str[i - 1]);
            count = 1;
        }
    }
    if (count > 1)
    {
        char ch = count+48 ;
        result.push_back(ch);
    }
    result.push_back(str[str.size() - 1]);

    return result;
}

int main()
{
    std::string str = "AAAABBBCCAA";
    vector<char> result = run_length(str);

    for (int i=0;i<result.size();i++)
        std::cout << result[i] << " ";

    std::cin.get();
}
