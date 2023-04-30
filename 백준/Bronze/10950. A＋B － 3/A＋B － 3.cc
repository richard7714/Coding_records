#include <iostream>
#include <vector>

int main()
{
    int T;
    std::cin>>T;
    std::vector<int> answer;

    for(int i=0;i<T;i++)
    {
        int A=0;
        int B=0;
        std::cin>>A>>B;
        answer.push_back(A+B);
    }

    for(int i =0;i<T;i++)
        std::cout<<answer[i]<<std::endl;
}