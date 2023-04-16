#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long temp = 0;
    temp = num;
    
    if(num==1)
        return 0;
    
    while (temp != 1)
    {
        if(!(temp%2))
            temp /=2;
        else
        {
            temp = (temp * 3) + 1;
        }
        answer++;
        if(answer == 500)
            return -1;
    }
    
    return answer;
}