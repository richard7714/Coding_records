#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int temp = 0;
    
    // 자리수를 계속 아래로 밀기
    while(true)
    {
        temp = n % 10;
        n /= 10;
        answer.push_back(temp);
        if(n<1)
            break;
    }
    
    return answer;
}