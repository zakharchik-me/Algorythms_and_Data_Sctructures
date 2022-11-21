f = open("input.txt", 'r')
ff = open("output.txt", 'w')

n, m = map(int, f.readline().split())
a = [[0] * n for i in range(n)]
puti = []
flag2 = 0
v1, w1 = 0, 0

for i in range(m):
    v, w = map(int, f.readline().split())
    a[v-1][w-1] = 1
    if (v1 == v and w1 == w):
        flag2 += 1
    v1, w1 = v, w

flag = 0

for i in range(n):
    for j in range(n):
        if a[i][j] == a[j][i] and a[i][j] == 1:
            flag += 1
if flag > 0 or flag2 > 0:
    print('YES', file=ff)
else:
    print('NO', file=ff)
