#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    map <int, int> win_table;
    map <int, int> rank;
    int win=0;
    int possibilty=0;
    
    for (auto idx = 0; idx < 6+1;idx++)
    {
        if(idx>5)
            rank[6-idx] = 6;
        else
            rank[6-idx] = (idx+1);
    }    
    
    for (auto idx = 0; idx < 6;idx++)
    {
        win_table[win_nums[idx]] = idx;
    }
    
    for (auto idx =0; idx <6; idx++)
    {
        if(win_table.find(lottos[idx])!=win_table.end())
        {
            win++;
        }
        else if(lottos[idx] == 0)
        {
            possibilty++;
        }
    }
    
    answer.push_back(rank[win+possibilty]);
    answer.push_back(rank[win]);
    
    return answer;
}