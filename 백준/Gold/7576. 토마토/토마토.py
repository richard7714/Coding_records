"""
1. 아이디어
- 토마토의 왼쪽,오른쪽,앞,뒤 네 방향에 있는 토마토가 익는다 => BFS가 4방향으로 뻗어나간다
- 가장 깊게 가는 BFS를 찾는다 => Layer를 전역변수로 두고 가장 깊게 간 Layer를 기록한다.
- 토마토가 들어있지 않은 칸도 있다 => 익지않음, 익음, 없음 의 세가지로 변수를 표현해야 한다.

2. 시간 복잡도
- 

"""

import sys
from collections import deque

input = sys.stdin.readline

W, H = map(int, input().strip().split())
tom = [list(map(int,input().strip().split())) for _ in range(H)]
candid = []

for h in range(H):
    for w in range(W):
        if tom[h][w] == 1:
            candid.append([h,w])

dy = [0,-1,0,1]
dx = [1,0,-1,0]
max_d = 0
queue = deque()

for h,w in candid:
    queue.append([h,w,0])

while len(queue):
    cy,cx,d = queue.popleft()
    for i in range(4):
        ny = cy+dy[i]
        nx = cx+dx[i]
        if 0<=ny<H and 0<=nx<W:
            if tom[ny][nx] == 0:
                tom[ny][nx] = 1
                queue.append([ny,nx,d+1])
                if d+1 > max_d:
                    max_d = d+1

for h in range(H):
    for w in range(W):
        if tom[h][w] == 0:
            print(-1)
            exit()


if max_d == 0:
    if len(candid) > 0:
        print(0)
    else:
        print(-1)
else:
    print(max_d)

