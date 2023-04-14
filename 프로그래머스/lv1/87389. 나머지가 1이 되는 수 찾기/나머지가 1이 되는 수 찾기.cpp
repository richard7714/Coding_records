#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

// (n-1) = A x B;
// A가 최소 => B가 최대
// 

int solution(int n) {
    int answer = 0;
    unordered_set <int> record;
    
    for (int idx = 2; idx<n+1;idx++)
    {
        if(!((n-1) % idx))
        {   
            answer = idx;
            return answer;
        }
    }
        
}