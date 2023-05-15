// 제공된 정답
#include <bits/stdc++.h>
using namespace std;
int n,m;
string s;

// 이름을 key로 하는 map 생성
map<string, int> mp;
string a[1000004];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;

    // 입력받은 이름을 각 map에 기록
    // 번호에 해당하는 이름 기록
    for(int i = 0; i<n; i++){
        cin >> s;
        mp[s] = i + 1;
        a[i+1]  = s;
    }

    // atoi(s)가 0이다 == s는 숫자가 아니다
    for(int i = 0; i< m; i++){
        cin >> s;
        if(atoi(s.c_str()) == 0){
            cout << mp[s] << "\n";
        }else{
            cout << a[atoi(s.c_str())] << "\n";
        }
    }
}