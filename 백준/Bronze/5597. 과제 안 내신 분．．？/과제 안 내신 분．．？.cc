#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>

int main() {

    int N=28;

    std::vector<int> basket;

    for(int idx=1;idx<=30;idx++)
    {
        basket.push_back(idx);
    }

    for(int idx=0;idx<28;idx++)
    {
        int toerase;
        scanf("%d", &toerase);
        basket.erase(find(basket.begin(),basket.end(),toerase));
    }

    sort(basket.begin(),basket.end());

    printf("%d\n",*basket.begin());
    printf("%d\n",*(basket.begin()+1));

}