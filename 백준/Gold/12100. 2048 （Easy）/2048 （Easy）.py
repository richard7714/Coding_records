# 2048
# 1. 같은 블록끼리 충돌하면 합쳐짐
# 2. 한번의 이동에서 합쳐지는건 한번
# 3. 똑같은 수가 세개가 있으면 이동하려고 하는 쪽이 먼저 합쳐짐

N = int(input())
table = [[0 for row in range(N)] for col in range(N)]

for i in range(N):
    table[i][0:N] = map(int, str(input()).split())


def move1d(a):
    length = len(a)
    for i in range(length):
        if 0 in a:
            a.remove(0)
        else:
            break
    new = []
    j = 0
    while j < len(a):
        if j + 1 == len(a):
            new.append(a[j])
        elif a[j] == a[j + 1]:
            new.append(a[j] * 2)
            j += 1
        else:
            new.append(a[j])
        j += 1

    while len(new) != length:
        new.append(0)

    return new


def move(table, direction):
    row = len(table)
    col = len(table[0])
    zeros = [[0 for x in range(N)] for y in range(N)]
    # 위쪽
    if direction == 1:
        answer = [[] for i in range(col)]
        for i in range(col):
            answer[i] = [table[x][i] for x in range(row)]
            answer[i] = move1d(answer[i])
        for j in range(row):
            for i in range(col):
                zeros[j][i] = answer[i][j]
    # 아래쪽
    elif direction == 2:
        answer = [[] for i in range(col)]
        for i in range(col):
            answer[i] = [table[x][i] for x in range(row)]
            answer[i].reverse()
            answer[i] = move1d(answer[i])
            answer[i].reverse()
        for j in range(row):
            for i in range(col):
                zeros[j][i] = answer[i][j]
    # 왼쪽
    elif direction == 3:
        answer = [[] for i in range(row)]
        for i in range(row):
            answer[i] = [table[i][x] for x in range(col)]
            answer[i] = move1d(answer[i])
            zeros = answer
    # 오른쪽
    elif direction == 4:
        answer = [[] for i in range(row)]
        for i in range(row):
            answer[i] = [table[i][x] for x in range(col)]
            answer[i].reverse()
            answer[i] = move1d(answer[i])
            answer[i].reverse()
            zeros = answer

    return zeros


def flatten(lst):
    result = []
    for item in lst:
        result.extend(item)
    return result



case = [x for x in range(11111, 44445)]

j = 0
for i in range(len(case)):
    a, b, c, d, e = map(int, str(case[j]))
    if a >= 5 or b >= 5 or c >= 5 or d >= 5 or e >= 5:
        case.remove(case[j])
        j -= 1
    elif a == 0 or b == 0 or c == 0 or d == 0 or e == 0:
        case.remove(case[j])
        j -= 1
    j += 1

max_result = []

for j in range(len(case)):
    t = table
    a, b, c, d, e = map(int, str(case[j]))
    ans = move(t, a)
    ans = move(ans, b)
    ans = move(ans, c)
    ans = move(ans, d)
    ans = move(ans, e)
    max_result.append(max(flatten(ans)))
print(max(max_result))
