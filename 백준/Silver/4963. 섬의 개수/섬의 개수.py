"""
1. 아이디어
- 2중 for문을 통해 map을 탐색하면서, 각 위치에 대해 DFS 수행
- DFS는 현 블록 기준으로 8방향으로 진행

2. 시간복잡도
- DFS의 최악 시간복잡도 : O(wxh) => 2500 < 2억보다 작음, 가능.

3. 변수설정
- 지도 : int[][]
    0은 바다, 1은 섬, 2는 방문
- 섬의 개수 : int

"""

import sys
input = sys.stdin.readline

dy = [0,0,1,1,1,-1,-1,-1]
dx = [1,-1,1,0,-1,1,0,-1]

cnt = 0

def dfs(y,x):
    
    global m
    
    for k in range(8):
        ny = y + dy[k]
        nx = x + dx[k]
        if 0<=nx<w and 0<=ny<h and m[ny][nx] == 1:
            m[ny][nx] = 2
            dfs(ny,nx)

    return
    
ret = []
m = []

while True:
    w,h = map(int, input().split())
    if w == 0 and h==0:
        break
    m = [list(map(int,input().split())) for _ in range(h)]
        
    cnt = 0
    for y in range(h):
        for x in range(w):
            if m[y][x] == 1:
                cnt += 1
                m[y][x] = 2
                for k in range(8):
                    ny = y+dy[k]
                    nx = x+dx[k]
                    if 0<=nx<w and 0<=ny<h and m[ny][nx] == 1:
                        # 접근 시 바로 기록하기
                        m[ny][nx] = 2
                        dfs(ny,nx)
    ret.append(cnt)
    
for i in ret:
    print(i)