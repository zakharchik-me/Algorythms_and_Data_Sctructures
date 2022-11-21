f = open("cycle.in", 'r')
ff = open("cycle.out", 'w')
y = 0
def get_graph():
    (n, m) = (map(int, f.readline().split()))
    graph = []
    for _ in range(m):
        (a, b) = (map(int, f.readline().split()))
        graph.append((a, b))
    return graph


def dfs_loops(graph):
    y = 0
    stack = [1]
    chk = [1]

    while True:

        if len(stack) == 0 and y!=1:
            print("NO", file = ff)
            return

        v = stack[-1]

        for (a, b) in graph:

            if (a == v) and not (b in chk):
                stack.append(b)
                chk.append(b)
                # Проверка цикла
                sz = len(stack)
                for i in range(sz - 1):
                    if (b, stack[i]) in graph:
                        print("YES", file = ff)
                        y = 1
                        print(*reversed(stack), file = ff)
                        break
                    break
                break
        else:
            stack.pop()
if y!=1:
    g = get_graph()
    dfs_loops(g)
