"""
1. 아이디어
- 투포인터 활용
- for문으로, 처음에 K개 값을 저장
- 다음 인덱스 더해주고, 이전 인덱스 빼줌
- 이때마다 최대값 갱신

2. 시간복잡도
- O(N) = 1e5 

처음부터 생각하기 어려움. 쉬운 방법부터 생각
- O(N^2) 시간복잡도가 초과한다면
- 연속하다는 특징을 활용할 수 있는 지 확인

투포인터 문제 종류
- 두개 다 왼쪽에서 / 각각 왼쪽, 오른쪽 시작 / 다른 배열
- 일반 O(N) / 정렬 후 투포인터: O(NlgN)

"""

import sys
input = sys.stdin.readline

N,K = map(int ,input().split())
nums = list(map(int, input().split()))
each = 0

# K개 더하기
for i in range(K):
    each += nums[i]
maxv = each

# 다음 인덱스 더해주고, 이전 인덱스 빼주기
for i in range(K, N):
    # 추가로 포함된
    each += nums[i]
    # 추가로 빠지는
    each -= nums[i-K]
    maxv = max(maxv,each)
    
print(maxv)