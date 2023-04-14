#include <string>
#include <vector>
#include <unordered_map>
#include <math.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    unordered_map <char,int> s2n = {{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9}};
    
    int index = s.size();
    bool isMinus;
    
    for (char c : s)
    {   
        if(s2n.find(c) != s2n.end())
        {
            answer += s2n[c] * pow(10,(index-1));
        }
        else
        {
            if(c=='-')
                isMinus = true;
            else
                isMinus = false;
        }
        
        index--;
    }
    
    if(isMinus)
        answer = -answer;
    
    return answer;
}