#include <stdio.h>
#include <algorithm>
#include <set>
#include <vector>

int main() {

    int N, M;
    std::vector<int> basket(1);

    scanf("%d %d",&N,&M);

    for(int idx=1;idx<=N;idx++)
    {
        basket.push_back(idx);
    }

    int i,j;

    for(int idx=0; idx<M;idx++) {
        scanf("%d %d", &i, &j);

        // 왼쪽은 닫힌, 오른쪽은 열린 경계로 입력해야 함
        reverse(basket.begin()+i,basket.begin()+j+1);

    }

    auto iter = basket.begin()+1;

    while(iter != basket.end())
    {
        printf("%d ",*iter);
        iter++;
    }

}