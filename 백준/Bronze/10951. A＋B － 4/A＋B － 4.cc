#include <stdio.h>
#include <vector>

int main()
{
    int A,B;
    std::vector<int> out;

    while(scanf("%d %d", &A, &B) != EOF)
    {
        printf("%d\n", (A + B));
    }
}