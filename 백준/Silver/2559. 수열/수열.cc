// 제공된 정답
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k,temp,psum[100001], ret = -1e9;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        // 누적합을 기록하여 더하는 과정 생략
        cin >> temp; psum[i] = psum[i-1] + temp;
    }
    for(int i = k; i<=n; i++){
        // 누적합사이의 차를 구해 원하는 범위의 누적합을 획득
        // max함수를 통해 대소 비교
        ret = max(ret, psum[i]-psum[i-k]);
    }
    cout << ret << "\n";
    return 0;
}