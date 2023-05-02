#include <stdio.h>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>

int main() {

    int N;
    float score;
    std::vector<float> scores;

    scanf("%d",&N);

    for(int i=0; i<N;i++)
    {
        scanf("%f",&score);
        scores.push_back(score);
    }

    auto iter = scores.begin();
    float M = *std::max_element(scores.begin(),scores.end());
    float mean=0;

    while(iter!=scores.end())
    {
        *iter = *iter/M * 100;
        mean+= *iter;
        iter++;
    }

//    double mean = std::accumulate(scores.begin(),scores.end(),double(0));
//    mean /= scores.size();
    mean/= scores.size();
    printf("%f",mean);

}