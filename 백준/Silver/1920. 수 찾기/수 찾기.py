"""
1. 아이디어
- M개를 확인해야하는데, 연속하다는 특징 활용 가능? => 불가
- 정렬해서 이진탐색 가능?
    - N개의 수 먼저 정렬
    - M개의 수 하나씩 이진탐색으로 확인

2. 시간복잡도
- N개의 수 정렬 : O(N * logN)
- M개의 수 이진탐색 : O(M * logN)
- O((N+M)logN) = 2e5 * 20 = 4e6 => 가능
- log_2(N) = log_2(10^6) => log_2(2^20) = 20
    2^10 ~= 10^3
- 왜 logN? => 이진탐색은 계속 반절로 자르므로 계산해보면 logN이 됨

3. 자료구조

"""

import sys
input = sys.stdin.readline

N = int(input())
nums = list(map(int,input().split()))
M = int(input())
target_list = list(map(int,input().split()))

nums.sort() # 이진탐색 가능

def search(st, en, target):
    if st == en:
        if nums[st] == target:
            print(1)
        else:
            print(0)
        return 
    mid = (st+en) // 2
    if nums[mid] < target:
        search(mid+1, en, target)
    else :
        search(st, mid, target)

for each_target in target_list:
    search(0,N-1,each_target)