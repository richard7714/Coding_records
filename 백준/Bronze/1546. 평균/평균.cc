#include <stdio.h>
#include <algorithm>
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

    while(iter!=scores.end())
    {
        *iter = *iter/M * 100;
        iter++;
    }

    double mean = std::accumulate(scores.begin(),scores.end(),float(0));
    mean /= scores.size();
    printf("%f",mean);

}