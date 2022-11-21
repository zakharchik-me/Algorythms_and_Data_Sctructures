f = open("stack.in", "r")
ff = open("stack.out", "w")
n = int(f.readline())
b = []
for i in range(n):
#    a =[]
    a = (list(map(str, f.readline().split())))
    if a[0] == "+":
        b.append(a[1])
    else:
        print(b[-1], file = ff)
        #print(b[-1])
        b.pop(-1)