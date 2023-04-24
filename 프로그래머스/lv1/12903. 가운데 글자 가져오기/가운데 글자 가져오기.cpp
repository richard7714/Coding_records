#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    // & : bitwise and 연산자. 1과 &을 수행할시 1이면 홀수, 0이면 짝수
    // substr(시작위치, 몇개 반환할지)
 return s.length()&1 ? s.substr(s.length()*0.5,1) : s.substr(s.length()*0.5-1,2);
}