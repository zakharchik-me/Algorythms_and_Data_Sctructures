f = open('pathbge1.in', 'r')
ff = open('pathbge1.out', 'w')
q = []
def bfs(v):
    used[v] = True
    dict[v] = 0;
    q.append(v)
    while len(q) != 0:
        E = q.pop(-1)
        for i in range(graph[E]):
            if used[graph[E][i]] == False