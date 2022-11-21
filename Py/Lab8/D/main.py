f = open('components.in', 'r')
ff = open('components.out', 'w')

n, m = map(int, f.readline().split())

graph = [[] for zifra in range(n)]
for i in range(m):
    u, v = [int(i) - 1 for i in f.readline().split()]
    graph[u].append(v)
    graph[v].append(u)


visited = [False] * n
count = [0] * n
answer = 0

j=1

for i in range(n):
    if visited[i]:
        continue
    answer += 1
    count[i] += j
    visited[i] = True
    queue = [i]
    while queue:
        v = queue.pop()
        for inn in graph[v]:
            if not visited[inn]:
                visited[inn] = True
                count[inn] = count[i]
                queue.append(inn)
    j+=1

print(answer, file=ff)
print(*count, file = ff)