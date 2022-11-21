f = open("input.txt")
ff = open("output.txt", 'w')
n, m = map(int, f.readline().split())
a = [[0] * n for i in range(n)]

for i in range(m):
    v, w = map(int, f.readline().split())
    a[v-1][w-1] = 1
    v, w = 0, 0
"a = [str(i) for i in a]"
for i in a:
    for i2 in i:
        print(i2, end=" ", file = ff)
    print(" ", file = ff)
