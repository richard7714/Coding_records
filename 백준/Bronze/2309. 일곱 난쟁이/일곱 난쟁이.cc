#include <bits/stdc++.h>
using namespace std;

vector <int> dw;
int height, sum;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 9; i++) {
        cin >> height;
        dw.push_back(height);
    }

    sort(dw.begin(), dw.end());

    vector<int> idx(7, 1);
    idx.push_back(0);
    idx.push_back(0);
    sort(idx.begin(), idx.end());

    for (int i = 0; i < 36; i++) {
        auto it = idx.begin();
        while (it != idx.end()) {
            if (*it)
                sum += dw[it - idx.begin()];
            it++;
        }
        
        if (sum != 100) {
            sum = 0;
            next_permutation(idx.begin(), idx.end());
            continue;
        }
        else {
            auto it2 = dw.begin();
            for (int idx2: idx) {
                if (idx2)
                    cout << *it2 << '\n';
                it2++;
            }
            exit(0);
        }
    }
}