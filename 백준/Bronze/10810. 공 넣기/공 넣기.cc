#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>

int main() {

    int N,M;

    scanf("%d %d", &N,&M);
    std::map<int,int> basket;

    for(int idx=0;idx<N;idx++)
    {
        basket.insert({idx,0});
    }

    for(int idx=0;idx<M;idx++)
    {
        int i=0;
        int j=0;
        int k=0;

        scanf("%d %d %d", &i, &j,&k);

        for(int idx_2=i-1;idx_2<j;idx_2++) {
            basket.erase(basket.find(idx_2));
            basket.insert({idx_2,k});
        }
    }

    auto iter = basket.begin();

    while(iter!=basket.end())
    {
        printf("%d ",(*iter).second);
        iter++;
    }

}