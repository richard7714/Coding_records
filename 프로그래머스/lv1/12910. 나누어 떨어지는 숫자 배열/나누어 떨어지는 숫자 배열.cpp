#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(auto iter = arr.begin();iter<arr.end();iter++)
    {
        if(!(*iter % divisor))
            answer.push_back(*iter);
    }
    
    if(answer.begin() == answer.end())
        answer.push_back(-1);
    
    sort(answer.begin(),answer.end());
    
    return answer;
}