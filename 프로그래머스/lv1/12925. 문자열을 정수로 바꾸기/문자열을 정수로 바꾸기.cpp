#include <string>
#include <vector>
#include <unordered_map>
#include <math.h>

using namespace std;

int solution(string s) {
    
    // c++11 이상부터는 string to int가 이미 정의되어 있다. 그대로 사용
    int answer = stoi(s);
    
    // c++11 미만은 string을 char*로 바꾸고 char*를 int로 바꿔야함
    // ch = s.c_str() => string -> char*
    // n = atoi(ch) => char* -> int 
    return answer;
}