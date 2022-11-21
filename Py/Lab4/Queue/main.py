f = open("queue.in", "r")
ff = open("queue.out", "w")
n = int(f.readline())
import collections  #спец метод для очереди
q = collections.deque()
for i in range(n):
    a = []
    a = list(map(str, f.readline().split()))
    if a[0] == "+":
        q.append(a[1])
    else:
        print(q[0], file = ff)
        q.popleft()