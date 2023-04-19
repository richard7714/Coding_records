#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    auto it2 = find(seoul.begin(),seoul.end(),"Kim");
    
    // iterator를 index로 바꾸려면 begin()을 빼주어야 한다.
    answer = "김서방은 " + to_string(it2-seoul.begin()) + "에 있다";
    
    return answer;
}