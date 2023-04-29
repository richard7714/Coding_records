#include <iostream>

int main()
{
    int hour, min,add;

    std::cin>>hour>>min;
    std::cin>>add;

    min += add;

    hour += min / 60;
    min = min%60;

    hour = hour>=24 ? hour-24 : hour;

    std::cout<<hour<<" "<<min;

}