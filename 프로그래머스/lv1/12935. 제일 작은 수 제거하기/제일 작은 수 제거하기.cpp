#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
        
    vector<int> temp = arr;
    
    sort(temp.begin(),temp.end());
    reverse(temp.begin(),temp.end());
    int poped = temp.back();
    
    auto it = find(arr.begin(),arr.end(),poped);
    
    arr.erase(it);
    answer.resize(arr.size());
    if(arr.size())
        answer=arr;    
    else
        answer.push_back(-1);
        
    return answer;
}