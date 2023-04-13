#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;

    int zeros = count(lottos.begin(),lottos.end(), 0);
    
    unordered_set<int> win_nums_set;
    for (int num : win_nums)
    {
        win_nums_set.insert(num);
    }
    
    int win = 0;
    for (int num : lottos)
    {
        if (win_nums_set.find(num) != win_nums_set.end())
        {
            win++;
        }
    }
    
    unordered_map <int,int> scores = {{0,6},{1,6},{2,5},{3,4},{4,3},{5,2}, {6,1}};
    
    answer.push_back(scores[win+zeros]);
    answer.push_back(scores[win]);
    
    return answer;
}