#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer(2,0);

//     int best_head = 0;
//     int best_tail = sequence.size()-1;
//     int best_residual = best_tail;    
        
//     for (auto i=0;i<sequence.size();i++)
//     {
//         int tail = i;
//         int residual = k - sequence[i];
        
//         while(tail < sequence.size())
//         {
//             if(i != tail)
//             {
//                 residual -= sequence[tail];
//             }
//             else
//             {
//                 if(residual)
//                 {
//                     break;
//                 }
//             }
//             if(!residual)
//             {
//                 if(best_residual > tail - i)
//                 {
//                     best_residual = tail - i;
//                     best_head = i;
//                     best_tail = tail;
//                 }   
//                 break;
//             }
//             if(residual<0)
//                 break;
//             tail++;
//         }
//     }
        
//     answer.push_back(best_head);
//     answer.push_back(best_tail);
    
    for(auto i = 0; i<sequence.size();i++)
    {
        if(!(k - sequence[i]))
        {
            answer[0] = i;
            answer[1] = i;
            return answer;
        }
        
    }
    
    int l = 0;
    int r = 0;
    int temp = 0;
    int s = 1e9;
    while (r < sequence.size())
    {
        temp += sequence[r];
        r++;
        if (temp > k)
        {
            while (temp > k)
            {
                temp -= sequence[l];
                l++;
            }
        }
        if (temp == k)
        {
            if (s > (r - l))
            {
                s = (r-l);
                answer[0] = l;
                answer[1] = r-1;
            }
        }
    }
    return answer;
}