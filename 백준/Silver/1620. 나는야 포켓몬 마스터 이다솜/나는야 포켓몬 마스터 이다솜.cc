#include <bits/stdc++.h>
using namespace std;

int N,M;
map <string,string> pok_num;
map <string,string> pok_name;

int main()
{
    cin >> N >> M;
    string pok_query[M];
    string temp;
    for(int i = 0; i<N; i++){
        cin>>temp;
        pok_num.insert({to_string(i+1),temp});
        pok_name.insert({temp,to_string(i+1)});
    }

    for(int i = 0; i<M; i++){
        cin>>pok_query[i];
    }
    for(string q : pok_query)
    {
        if(pok_num.find(q)!= pok_num.end())
            cout << pok_num[q] << "\n";
        else if(pok_name.find(q) != pok_name.end())
            cout << pok_name[q] << "\n";
    }

}