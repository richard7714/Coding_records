#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long temp = 1;
    
    while(true)
    {
        // n / temp == temp로 설정하는 경우, 소숫점이 절삭되어 오류 발생 가능 ex) 5/2 == 2
        // long은 정수임!
        if(n == temp * temp)
        {
            answer = pow((temp+1),2);
            break;
        }
        
        if(temp>n/2+1)
        {
            answer = -1;
            break;
        }
        
        temp++;
    }
    
    return answer;
}