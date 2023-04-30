#include <iostream>
#include <string>

int main()
{
    int x;

    std::cin>>x;

    std::string out;
    for(int i =0; i<(x/4);i++)
    {
        out+="long ";
    }

    out+="int";

    std::cout<<out;

}