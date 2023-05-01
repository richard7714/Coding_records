#include <stdio.h>
#include <vector>

int main() {

    int N,X;
    scanf("%d %d",&N,&X);

    std::vector<int> candid;

    for(int i=0;i<N;i++)
    {
        int temp;
        scanf("%d",&temp);

        if(temp<X)
            candid.push_back(temp);
    }

    auto iter = candid.begin();

    while(iter!=candid.end()-1) {
       printf("%d ", *iter);
       iter++;
    }

    printf("%d",*iter);

}