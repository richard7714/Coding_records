#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    map <int, int> win_table;
    map <int, int> rank;
    int win=0;
    int lose=0;
    
    for (auto idx = 0; idx < win_nums.size();idx++)
    {
        rank[6-idx] = (idx+1);
    }    
    rank[0] = 6;
    
    for (auto idx = 0; idx < win_nums.size();idx++)
    {
        win_table[win_nums[idx]] = idx;
    }
    
    for (auto idx =0; idx <lottos.size(); idx++)
    {
        if(win_table.find(lottos[idx])!=win_table.end())
        {
            win++;
        }
        else if(lottos[idx] == 0)
        {
        lose++;
        }
    }
    
    answer.push_back(rank[win+lose]);
    answer.push_back(rank[win]);
    
    return answer;
}