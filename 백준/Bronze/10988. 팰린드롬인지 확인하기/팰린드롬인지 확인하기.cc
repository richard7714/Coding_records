#include <bits/stdc++.h>
using namespace std;

string in;
string temp;

int main()
{
    cin >> in;
    temp = in;
    reverse(temp.begin(),temp.end());

    cout << (in == temp);
}