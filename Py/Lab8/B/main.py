f = open('input.txt', 'r')
ff = open('output.txt', 'w')

n = int(f.readline())
a = [[0] * n for i in range(n)]
b = []
flag = 0
flag2 = 0

for i in range(n):
    b = (list(map(int, f.readline().split())))
    for j in range(n):
        a[i][j] = int(b[j])
    b.clear()
"print(a)"
for i in range(n):
    for j in range(n):
        if a[i][j] == a[j][i] and a[i][j] == 1:
            flag += 1
        if a[i][j] != a[j][i] and (a[i][j] == 1 or a[j][i] == 1):
            flag2 += 1
        if a[i][i]==1:
            flag2+=1

if flag > 0 and flag2 == 0:
    print('YES', file=ff)
else:
    print('NO', file=ff)

