#include <iostream>

int main()
{
    int year;

    std::cin>>year;

    bool isleap = (year % 400) == 0 ? 1 : (year % 4 ) == 0 && (year % 100) ? 1 : 0;

    std::cout<<isleap;

}