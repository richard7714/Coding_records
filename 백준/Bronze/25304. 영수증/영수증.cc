#include <iostream>

int main()
{
    int X;
    int N;
    std::cin>>X;
    std::cin>>N;
    int sum=0;

    for(int i =0; i<N;i++)
    {
        int a=0;
        int b= 0;
        std::cin>>a>>b;
        sum += a*b;
    }

    if(sum == X)
        std::cout<<"Yes";
    else
        std::cout<<"No";

}