"""
1. 아이디어
- 애너그램 : 순서를 뒤집었을때 같아지는 단어 쌍
- 입력받은 두 단어 중 하나를 뒤집고, 이중 for문으로 글자를 한개씩 빼보며 같아지는 경우가 생기는지 관찰

2. 시간복잡도
- 1000 x 1000 => 100만 < 2억. 문제 X

"""

import sys
input = sys.stdin.readline

A = list(input().strip())
B = list(input().strip())

cnt = 0

temp_A = A.copy()
temp_B = B.copy()

for a in A:
    if a in temp_B:
        temp_B.remove(a)
        
for b in B:
    if b in temp_A:
        temp_A.remove(b)
        
cnt = len(temp_A)+len(temp_B)
        
print(cnt)