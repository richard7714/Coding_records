#include <stdio.h>
#include <algorithm>
#include <set>

int main() {

    int N=28;
    std::set<int> rest;

    for(int idx=0;idx<10;idx++)
    {
        int candid;
        scanf("%d",&candid);
        rest.insert(candid%42);
    }

    printf("%d",rest.size());

}