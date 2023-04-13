#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    
    // 정답을 받을 vector를 미리 초기화 해놓기
    vector<int> answer(2,0);
    
    // 예외 케이스인 길이가 0인 부분 수열은 미리 골라내기
    for(auto i = 0; i<sequence.size();i++)
    {
        if(!(k - sequence[i]))
        {
            answer[0] = i;
            answer[1] = i;
            return answer;
        }
        
    }
    
    // 하나의 부분 수열만 얻으면 된다 => 수열이므로 시작과 끝만 알면 된다 => 부분 수열의 시작과 끝 위치를 변수로 두고 문제를 해결한다.
    int l = 0;
    int r = 0;
    int temp = 0;
    
    // Sequence의 길이. 최대가 1,000,000이므로 해당 값으로 초기화
    int s = 1e7;
    
    // right가 sequence 끝에 도달할때까지 순환한다.
    while (r < sequence.size())
    {
        // right 위치의 값을 temp에 누적
        temp += sequence[r];
        r++;
        
        // 누적값이 target k를 넘겼을 경우, 왼쪽의 값을 누적값에서 빼본다.
        if (temp > k)
        {
            // 누적값이 target보다 큰 상황이 해결될때까지 계속 뺀다.
            while (temp > k)
            {
                temp -= sequence[l];
                l++;
            }
        }
        
        // 누적값과 target이 같아진 경우 sequence의 길이를 체크한다.
        if (temp == k)
        {
            // 이전에 기록해놓은 sequence의 길이보다 현재가 짧을 경우, answer의 값을 바꿔준다.
            // 0부터 시작하므로 sequence 길이가 같은 부분수열이 여러개일 경우 left가 가장 왼쪽인 것이 선택
            // r이 sequence 끝에 닿을때 까지 계속 순환하므로 합이 k인 모든 부분수열을 파악 가능
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