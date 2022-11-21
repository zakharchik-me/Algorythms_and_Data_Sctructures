class Stack(object):
    def init(self):
        self.ar = []
    def push(self, el):
        self.arr.append(el)
    def pop(self):
        self.arr.pop()
    def str(self):
        return f"{self.arr}"
    def getitem(self, i):
        return int(self.arr[i])

f = open("postfix.in", "r")
ff = open("postfix.out", "w")

arr = Stack()

for el in f.readline().split():
    if el in "-+*":
        a = arr[-1]
        b = arr[-2]
        arr.pop()
        arr.pop()
        if el == "-":
            arr.push(b - a)
        elif el == "+":
            arr.push(b + a)
        elif el == '*':
            arr.push(b * a)
    else:
        arr.push(int(el))

print(arr[0], file=ff)