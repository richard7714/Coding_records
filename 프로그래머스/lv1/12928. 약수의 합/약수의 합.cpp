#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(int n) {
    int answer = 0;
    unordered_set <int> candid;
    
    for (auto idx = 1; idx < n+1;idx++)
    {
        if(!(n%idx))
        {
            if(candid.find(idx) == candid.end())
            {
                candid.insert(idx);
                candid.insert(n / idx);
            }
        }
    }
    
    for (auto idx = candid.begin();idx != candid.end();idx++)
    {
        answer += *idx;
    }
    
    return answer;
}