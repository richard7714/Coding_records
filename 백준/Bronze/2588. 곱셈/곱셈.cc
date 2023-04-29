#include <iostream>
#include <string>

int main()
{
    int A;
    std::string B;

    std::cin>>A>>B;

    int three = A*(B[2]-'0');
    int four = A*(B[1]-'0');
    int five = A*(B[0]-'0');
    int six = three+four*1e1+five*1e2;

    std::cout<<three<<std::endl;
    std::cout<<four<<std::endl;
    std::cout<<five<<std::endl;
    std::cout<<six<<std::endl;

    return 0;

}