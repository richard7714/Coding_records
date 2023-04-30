#include <stdio.h>
#include <vector>

int main()
{
    int A,B;
    std::vector<int> out;

    while(true)
    {
        scanf("%d %d",&A,&B);
        if(A==0 && B==0)
            break;
        out.push_back((A+B));
    }

    for (auto iter = out.begin();iter!=out.end();iter++)
    {
        printf("%d\n",*iter);
    }

}