#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int temp = 0;
    
    for(int i = 0; i<10;i++)
    {
        temp = n % 10;
        n /= 10;
        answer.push_back(temp);
        if(n<1)
            break;
    }
    
    return answer;
}