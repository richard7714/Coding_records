#include <bits/stdc++.h>
using namespace std;

string in;


int main()
{
    getline(cin,in);
        auto it = in.begin();

        int cap[26];
        int lit[26];

        for (int i = 0; i < 26; i++) {
            cap[i] = i + 'A';
            lit[i] = i + 'a';
        }
        rotate(cap, cap + 13, cap + 26);
        rotate(lit, lit + 13, lit + 26);
        while (it != in.end()) {

            if ('A' <= *it && *it <= 'Z') {
                *it = cap[(*it - 'A')];
            } else if ('a' <= *it && *it <= 'z') {
                *it = lit[(*it - 'a')];
            }

            it++;
        }

        for (char c: in) cout << c;
        cout << " ";
}