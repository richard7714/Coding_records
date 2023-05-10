#include <bits/stdc++.h>
using namespace std;

string input;
vector<int> al(26,0);

int main()
{
    cin >> input;

    for (char i : input)
    {
        al[i-'a']++;
    }

    for (int t : al)
        cout << t << " ";
}