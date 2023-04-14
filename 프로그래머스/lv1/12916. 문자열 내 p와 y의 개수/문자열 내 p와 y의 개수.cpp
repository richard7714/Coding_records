#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_count = 0;
    int y_count = 0;
    
    for(auto i=0; i<s.length();i++)
    {
        if(tolower(s[i]) == 'p')
            p_count++;
        else if(tolower(s[i]) == 'y')
            y_count++;
    }
    
    if(p_count != y_count)
        answer = false;
    
    return answer;
}