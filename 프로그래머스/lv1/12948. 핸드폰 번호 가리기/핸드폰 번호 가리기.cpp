#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    string::iterator iter;
    for (iter = phone_number.begin();iter<phone_number.end()-4;iter++)
        answer.push_back('*');
    for(auto iter2 = iter; iter2<phone_number.end();iter2++)
        answer.push_back(*iter2);
    return answer;
}