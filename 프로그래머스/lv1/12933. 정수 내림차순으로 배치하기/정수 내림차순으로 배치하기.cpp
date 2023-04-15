#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    string str = to_string(n);
    vector<int> buffer;
    
    for(int idx =0 ;idx<str.length();idx++)
    {
        buffer.push_back(int(str[idx])-'0');
    }
    
    sort(buffer.begin(),buffer.end());
    reverse(buffer.begin(),buffer.end());
    
    for (int idx=0;idx<str.length();idx++)
    {
        int num = buffer.back();
        answer += (num * pow(10,idx));
        buffer.pop_back();
    }
    
    return answer;
}