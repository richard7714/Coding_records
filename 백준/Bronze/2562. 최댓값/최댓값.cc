#include <stdio.h>
#include <vector>
#include <algorithm>

int main() {

    int N;

    std::vector<int> candid;

    for(int i=0; i<9; i++)
    {
        scanf("%d",&N);
        candid.push_back(N);
    }

    int max_idx = int(max_element(candid.begin(),candid.end()) - candid.begin());
    int max = *max_element(candid.begin(),candid.end());

    printf("%d\n",max);
    printf("%d",max_idx+1);

}