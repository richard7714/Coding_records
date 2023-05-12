#include <bits/stdc++.h>
using namespace std;

int N;
string pat;

int main()
{
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    string bufferflush;
    getline(cin,bufferflush);

    getline(cin,pat);

    auto ast = find(pat.begin(),pat.end(),'*');

    auto left = pat.begin();
    auto right = pat.end()-1;
    string left_key;
    string right_key;

    while(left != ast)
    {
        left_key +=(*left);
        left++;
    }
    while(right != ast)
    {
        right_key += *right;
        right--;
    }

//    cout<<left_key<<'\n';
//    cout<<right_key<<'\n';

    for(int i = 0; i<N; i++)
    {
        string input;
        bool isNE = false;
        getline(cin,input);

        auto it = input.begin();

        if(left_key.size()+right_key.size()>input.size())
            isNE=true;

        for(char l : left_key)
        {
            if(*it != l)
            {
                isNE = true;
            }
            it++;
        }

        it = input.end()-1;

        for(char r : right_key)
        {
            if(*it != r)
            {
                isNE = true;
//                cout<<"HI"<<'\n';
//                cout<<"*it : " << *it << '\n';
//                cout << "r : " << r << '\n';
            }

            it--;
        }

        if(isNE)
            cout << "NE" << '\n';
        else
            cout << "DA" << '\n';

    }

}