"""
1. 아이디어
- 1부터 N중에 하나를 선택
- 다음 1부터 N까지 선택 시, 이미 선택한 값이 아닌 경우에만 선택 => 방문 여부 확인 필요
- M개를 선택했을 경우 프린트

2. 시간복잡도
- N^N : 중복이 가능, N=8까지 가능 (N) x (N) x ... x (N)
- N! : 중복이 불가, N=10까지 가능 (N) x (N-1) x ... x 1
=> 구한 시간 복잡도가 2억이 넘지 않아야 한다!
- 백트래킹은 10언저리에서 끝내야 한다.

3. 변수 설정
- 방문 여부 확인 배열 : bool[]
- 선택한 값 입력 배열 : int[]

백트래킹 => N이 작다
재귀함수 => 종료시점 잊지 말기

"""

import sys
input = sys.stdin.readline

N, M = map(int, input().split())
rs = []
# 인덱스와 실제 숫자를 맞춰준다
chk = [False] * (N+1)

def recur(num):
    if num == M:
        print(' '.join(map(str,rs)))
        return
    for i in range(1,N+1):
        if chk[i] == False:
            chk[i] = True
            rs.append(i)
            recur(num+1)
            # 방문 완료시 입력한 것을 다시 빼준다.
            chk[i] = False
            rs.pop()
recur(0)

