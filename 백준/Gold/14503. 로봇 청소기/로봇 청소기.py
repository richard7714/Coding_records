"""
1. 아이디어
- 특정 조건 만족하는 한 계속 이동 => While
- 4방향 탐색 먼저 수행 > 빈칸 있을 경우 이동
- 4방향 탐색 안될 경우, 뒤로 한칸 가서 반복 => 못가면 종료

2. 시간복잡도
- While문 최대 : NxM
- 각 칸에서 4방향 연산 수행
- (NxMx4) => O(NxM) => 50^2 = 2500 < 2억

3. 자료구조
- 전체 지도 : int[][] => 0 : 청소 x, 1 : 벽, 2: 청소 o
- 내 위치, 방향 : int,int,int (y,x,d)
- 전체 cnt : int

"""

import sys
input = sys.stdin.readline

N,M = map(int,input().split())
y,x,d = map(int,input().split())
map = [list(map(int,input().split())) for _ in range(N)]
cnt = 0
dy = [-1,0,1,0]
dx = [0,1,0,-1]

while 1:
    if map[y][x] == 0:
        map[y][x] = 2
        cnt += 1
    sw = False
    for i in range(1,5):
        ny = y+dy[d-i]
        nx = x+dx[d-i]
        if 0<=ny<N and 0<=nx<M:
            if map[ny][nx] == 0:
                # 그 방향으로 회전한 다음 한 칸을 전진하고 1번부터 진행한다.
                d = (d-i+4) % 4
                y = ny
                x = nx
                sw = True
                break
    
    # 4방향 모두 있지 않은 경우
    if sw == False:
        # 뒤쪽 방향이 막혀있는 지 확인
        ny = y - dy[d]
        nx = x - dx[d]
        if 0 <= ny < N and 0 <= nx < M:
            if map[ny][nx] == 1:
                break
            else:
                y = ny
                x = nx
        else:
            break

print(cnt)