#include <iostream>

int main()
{
    int hour, min;

    std::cin>>hour>>min;

    if((min-45)>=0)
    {
        min -= 45;
    }
    else
    {
        hour-=1;
        min = (60-45+min);
    }

    hour = hour<0 ? 23 : hour;

    std::cout<<hour<<" "<<min;

}