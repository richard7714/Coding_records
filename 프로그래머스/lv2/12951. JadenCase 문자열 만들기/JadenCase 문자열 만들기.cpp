#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    
    auto it = s.begin();
    
    while(it<s.end())
    {
        // 공백 넘기기
        while(*it==' ')
        {
            if(it>=s.end())
                return s;
            it++;
        }
        
        // 첫번째 단어가 숫자가 아닐시 대문자로 변경
        if(*it-'9')
        {
            *it=toupper(*it);
            it++;
        }
        
        // 나머지는 소문자로
        while(*it!=' ')
        {
            if(it>=s.end())
                return s;
            *it=tolower(*it);
            it++;
        }
        
    }
    
    return s;
}