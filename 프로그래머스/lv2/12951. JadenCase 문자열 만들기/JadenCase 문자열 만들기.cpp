#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    answer += toupper(s[0]);
    
    // toupper, tolower 함수는 공백 or 숫자가 입력으로 들어오면 그대로 return한다.
    // 맨앞은 upper로 만들고, 그뒤는 그전 공백 유무에 따라 대소 선택
    for (int i = 1; i < s.size();i++)
        s[i-1] == ' ' ? answer += toupper(s[i]) : answer += tolower(s[i]);
        
    return answer;
}