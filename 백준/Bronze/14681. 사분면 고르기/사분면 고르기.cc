#include <iostream>

int main()
{
    int x,y;

    std::cin>>x>>y;

    int where = x>0 ? (y>0 ? 1 : 4 ): (y>0 ? 2 : 3);

    std::cout<<where;

}