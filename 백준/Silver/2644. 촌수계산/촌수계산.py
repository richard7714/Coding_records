"""
1. 아이디어
- DFS를 이용해 탐색하다가 end를 만나면 정지
- DFS는 시작, 끝을 인자로 받음
- 거쳐간 노드의 개수를 기록
- 촌수를 계산할 수 없는지 어떻게 알까? => global을 두개 놓고 실제 성공했을 때만 대입시키기

2. 시간 복잡도
- DFS => 최대 O(n) => 100

3. 자료구조
- 부모자식 관계 : m[n+1]
- 거쳐간 노드 수 : int
- 방문 여부 : chk[n+1]

"""

import sys
input = sys.stdin.readline

def dfs(start,end,ret):
    
    global sw
    
    if start == end:
        sw = ret -1
        
        return 
    
    for child in rel[start]:
        if chk[child] == 0:
            chk[child] = 1
            ret += 1
            dfs(child,end,ret)
            ret -= 1
    else:
        return 
        

n = int(input())
s,t = map(int,input().strip().split())
m = int(input())
rel = [[] for _ in range(n+1)]
ret = 1
sw = -1

for _ in range(m):
    p,c = map(int,input().split())
    rel[p].append(c)
    rel[c].append(p)
chk = [0] * (n+1)

dfs(s,t,ret)

print(sw)