"""
1. 아이디어
- 진행방향에 대한 정보가 필요. 동,남,서,북을 각각 0,1,2,3에 할당하여 방향 표시
- 선이 꺾이는 상황은 앞으로 나아갈 수 없을 때 => 표보다 하나 더 큰 장애물 표를 만들고, 장애물을 만나면 다음 방향으로 돌도록
- 더이상 방향 전환이 안될 경우 끝
- 방향 전환을 할때마다 값 누적

2. 시간 복잡도
- M x N => 100 x 100

"""

import sys
input = sys.stdin.readline

M, N = map(int, input().strip().split())
obst = [[1] * (N+2) for _ in range(M+2)]

for y in range(1,M+1):
    for x in range(1,N+1):
        obst[y][x] = 0

dy = [0,1,0,-1]
dx = [1,0,-1,0]

cy = cx = 1
obst[cy][cx] = 1
d = 0
cnt = 0

while True:
    sw = 0
    # 똑바로 가고있는 경우 ==> i가 0일때 실행되는 경우
    # i == 0을 넘긴다면 방향 전환이 발생하는것
    for i in range(4):
        ny = cy + dy[(i+d) % 4]
        nx = cx + dx[(i+d) % 4]
        if obst[ny][nx] == 0:
            obst[ny][nx] = 1
            cy = ny
            cx = nx
            sw = 1
            if i != 0:
                d = (d+i) % 4
                cnt +=1
            break
    
    if sw == 0:
        break    
    
print(cnt)        
