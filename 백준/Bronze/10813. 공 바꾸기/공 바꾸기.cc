#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>

int main() {

    int N,M;

    scanf("%d %d", &N,&M);
    std::vector<int> basket(1);

    for(int idx=1;idx<=N;idx++)
    {
        basket.push_back(idx);
    }

    for(int idx=0;idx<M;idx++)
    {
        int i,j;

        scanf("%d %d", &i, &j);

        auto iter_i = basket.begin()+i;
        auto iter_j = basket.begin()+j;

        int temp = *iter_i;
        *iter_i = *iter_j;
        *iter_j = temp;

    }

    auto iter = basket.begin()+1;

    while(iter!=basket.end())
    {
        printf("%d ",(*iter));
        iter++;
    }

}