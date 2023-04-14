#include <iostream>
#include <math.h>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int temp = 0;
    
    for (auto i = 9;i > -1;i--)
    {
        temp = n / pow(10,i);
        answer += temp;
        n -= (temp*pow(10,i));
    }

    return answer;
}