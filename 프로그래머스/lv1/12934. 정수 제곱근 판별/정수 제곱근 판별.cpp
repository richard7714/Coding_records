#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long temp = 1;
    
    while(true)
    {
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