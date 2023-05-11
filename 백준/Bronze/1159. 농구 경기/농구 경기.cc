#include <bits/stdc++.h>
using namespace std;

int N;
string n;
int name[26];
int cnt;

int main(){
    cin >> N;

    for(int i = 0; i<N; i++)
    {
        cin >> n;
        name[n[0]-'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(name[i]>=5)
        {
            cout<<(char)(i+'a');
            cnt++;
        }


    }

    if(cnt == 0)
        cout<<"PREDAJA";

}