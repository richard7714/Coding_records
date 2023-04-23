#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer=arr;
    
    // arr내 최소값 찾기
    int nMin = *min_element(arr.begin(),arr.end());
    int pos = find(answer.begin(), answer.end(),nMin) - answer.begin();
    
    // 해당 위치의 element 제거
    answer.erase(answer.begin() + pos);
    
    return answer.empty() ? vector<int>(1,-1) : answer;
}