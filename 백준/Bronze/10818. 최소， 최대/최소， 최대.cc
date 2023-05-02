#include <stdio.h>
#include <vector>
#include <algorithm>

int main() {

    int N;

    std::vector<int> candid;
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        int temp;
        scanf("%d",&temp);
        candid.push_back(temp);
    }

    int min = *min_element(candid.begin(),candid.end());
    int max = *max_element(candid.begin(),candid.end());

    printf("%d %d",min,max);

}