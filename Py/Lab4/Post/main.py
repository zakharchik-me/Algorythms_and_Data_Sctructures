class Stack(object):
    def __init__(self):
        self.array= []
    def res(self, el):
        self.array.append(el)
    def pop(self):
        self.array.pop()
    def str(self):
        return f"{self.array    }"
    def __getitem__(self, index):
        return int(self.array[index])

f = open("postfix.in.txt", "r")
ff = open("postfix.out.txt", "w")

#print(a)
b = []

array = Stack()
for el in f.readline().split():
    if el in '+-*': # если операция
        aa = b[-2]
        bb = b[-1]
        b.pop()
        b.pop()
        if el == '+':
            array.res(aa + bb)
        elif el == '-':
            array.res(aa - bb)
        else:
            array.res(aa * bb)
    else:
        array.res(int(el))
         # если число
print(array[0], file = ff)

