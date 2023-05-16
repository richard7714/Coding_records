#include <bits/stdc++.h>
using namespace std;

int T,N;
string wear,wear_class;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    int ret[T];

    for (int i =0; i<T; i++)
    {
        cin >> N;
        ret[i] = 0;
        map<string,int> wear_list;

        if(N == 0) {
            continue;
        }

        for (int j = 0; j<N; j++)
        {
            cin >> wear >> wear_class;
            if(wear_list.find(wear_class) == wear_list.end())
                wear_list.insert({wear_class, 1});
            else
                wear_list[wear_class]++;
        }

        for(auto it = wear_list.begin(); it!=wear_list.end();it++)
        {
            if(it==wear_list.begin())
                ret[i] = (*it).second + 1;
            else
                ret[i] *= ((*it).second+1);

        }

        ret[i] -= 1;

    }

    for(int out : ret)
        cout << out << "\n";

}