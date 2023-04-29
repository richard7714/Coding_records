#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main()
{
    int A,B,C;
    std::cin>>A>>B>>C;

    std::vector<int> input = {A,B,C};
    sort(input.begin(),input.end());

    if(A==B) {
        if (A == C) {
            std::cout << (10000 + A * 1000);
            return 0;
        } else {
            std::cout << (1000+A*100);
        }
    }
    else if(A==C){
            std::cout << (1000+A*100);
        }
    else if(B==C)
    {
        std::cout<<(1000+B*100);
    }
    else
    {
        std::cout<<*(input.end()-1) * 100;
    }
}