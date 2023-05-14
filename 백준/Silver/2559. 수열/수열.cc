#include <bits/stdc++.h>
using namespace std;

int N;
int K;
int sum;

int main()
{
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    cin >> K;

    int temp[N];

    for(int i = 0; i<N;i++){
        cin >> temp[i];
    }

    auto idx = temp;
    int sum_temp = 0;

    while(idx != temp+N-K+1)
    {
        if(idx == temp) {
            sum = accumulate(idx, idx + K, 0);
            sum_temp = sum;
        }

        else
        {
            sum_temp = sum_temp - *(idx-1) + *(idx+K-1);
            if(sum < sum_temp)
                sum = sum_temp;
        }
        idx++;
//        cout<<"sum : "<<sum<<" sum_temp : "<< sum_temp <<"\n";
    }


    cout << sum;

}