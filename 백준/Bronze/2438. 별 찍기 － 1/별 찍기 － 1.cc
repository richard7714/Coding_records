#include <stdio.h>
#include <string>

int main()
{
    int T;

    scanf("%d",&T);

    std::string out;

    for(int i =0;i<T;i++)
    {
        out+='*';

        // c에는 string이 없으므로 c_str()을 통해 변경
        printf("%s\n",out.c_str());
    }

}