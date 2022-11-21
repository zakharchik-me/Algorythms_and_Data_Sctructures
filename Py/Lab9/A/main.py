f = open('topsort.in', 'r')
ff = open('topsort.out', 'w')
graph = {"1": [2],
         "2": [5],
         "3": [2],
         "4": [2, 6],
         "5": [],
         "6": [5]}
from collections import deque

GRAY, BLACK = 0, 1

def topological(graph):
    order, enter, state = deque(), set(graph), {}

    def dfs(node):
        state[node] = GRAY
        for k in graph.get(node, ()):
            sk = state.get(k, None)
            if sk == BLACK: continue
            enter.discard(k)
            dfs(k)
        order.appendleft(node)
        state[node] = BLACK

    while enter: dfs(enter.pop())
    return order

# check how it works
print( topological(graph))
