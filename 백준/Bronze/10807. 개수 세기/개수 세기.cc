#include <stdio.h>
#include <vector>

int main() {

    int N;
    scanf("%d",&N);

    std::vector<int> candid;

    for(int i=0;i<N;i++)
    {
        int temp;
        scanf("%d",&temp);
        candid.push_back(temp);
    }

    int tofind;
    int howmany=0;
    scanf("%d",&tofind);

    for(auto it = candid.begin();it!=candid.end();it++)
    {
        if(*it==tofind)
            howmany++;
    }

    printf("%d",howmany);

}