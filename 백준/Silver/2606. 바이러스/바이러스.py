"""
1. 아이디어
- 연결관계를 입력받고, BFS를 하며 방문여부 기록
- 방문여부가 기록된 것의 개수가 감염된 컴퓨터의 개수가 된다

2. 시간복잡도
- 컴퓨터의 개수 100개 BFS 

3. 자료구조
- Queue : int[]
- 방문 기록 : int[]

"""

import sys
from collections import deque

input = sys.stdin.readline

N = int(input())
M = int(input())
queue = deque([1])

link = [[] for _ in range(N+1)]
visited = [0] * (N+1)
visited[1] = 1

for _ in range(M):
    s,t = map(int,input().split())
    link[s].append(t)
    link[t].append(s)

while len(queue):
    v = queue.popleft()
    
    for child in link[v]:
        if visited[child] == 0:
            visited[child] = 1
            queue.append(child)
    
print(sum(visited)-1)