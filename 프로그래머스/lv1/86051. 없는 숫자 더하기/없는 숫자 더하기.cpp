// 알고리즘 구현 관련 라이브러리 모두 include하는 header파일
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> numbers) {
    
    // vector내 요소들의 합 구하기 => accumulate
    // accumulate(start, end, initial value of sum)
    return 45 - accumulate(numbers.begin(),numbers.end(),0);
}