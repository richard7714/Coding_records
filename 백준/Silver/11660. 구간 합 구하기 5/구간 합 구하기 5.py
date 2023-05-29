"""
1. 아이디어
- 유효 연산 영역을 의미하는 행렬 선언. 크기는 원 행렬과 동일하고, 1이면 유효를 의미
- 시작 노드부터 BFS를 통해 탐색하며 누적합 계산 => 시간초과 by 시간복잡도 계산
- 누적합을 미리 계산해서 넣어놓기

2. 시간 복잡도
- N * M * M => 1,000 * 100,000 * 100,000 < 2억 초과 => BFS 불가
- N * M 이 가능해야.. 어떻게? => 누적합을 미리 계산하여 행렬에 넣어놓는다!

"""

import sys
input = sys.stdin.readline
from collections import deque

N, M = map(int, input().strip().split())

mp = [[] * N for _ in range(N)]

for i in range(N):
    temp = list((map(int, input().strip().split())))
    temp_sum = 0
    for idx in temp:
        temp_sum += idx
        mp[i].append(temp_sum)

ret = []

for _ in range(M):
    tot = 0
    y1,x1,y2,x2 = map(int,input().strip().split())
    x1 -= 1
    x2 -= 1
    y1 -= 1
    y2 -= 1
    
    out = []
    
    for y in range(y1,y2+1):
        if x1 != 0:
            out.append(mp[y][x2]-mp[y][x1-1])
        else:
            out.append(mp[y][x2])
    
    tot = sum(out)
    
    ret.append(tot)

for r in ret:
    print(r)