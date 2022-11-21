import queue
f = open("input.txt", 'r')
ff = open("output.txt", 'w')
n, m = map(int, f.readline().split())

def createMaze():
    maze = []
    for i in range(n-1):
        a = list(f.readline())
        maze.append(list(a))
    return maze

def createMaze2():
    maze = []
    maze.append(['.', 'S', '.', '.'])
    maze.append(['#', '#', '#', '.'])
    maze.append(['T ', '.', '.', '.'])
    maze.append(['.', '#', '#', '.'])
    maze.append(['.', '.', '.', '.'])
    return maze


def printMaze(maze, path=""):
    for x, pos in enumerate(maze[0]):
        if pos == "S":
            start = x

    i = start
    j = 0
    pos = set()
    for move in path:
        if move == "L":
            i -= 1

        elif move == "R":
            i += 1

        elif move == "U":
            j -= 1

        elif move == "D":
            j += 1
        pos.add((j, i))

    for j, row in enumerate(maze):
        for i, col in enumerate(row):
            if (j, i) in pos:
                print("+ ", end="")
            else:
                print(col + " ", end="")
        print()


def valid(maze, moves):
    for x, pos in enumerate(maze[0]):
        if pos == "S":
            start = x

    i = start
    j = 0
    for move in moves:
        if move == "L":
            i -= 1

        elif move == "R":
            i += 1

        elif move == "U":
            j -= 1

        elif move == "D":
            j += 1

        if not (0 <= i < len(maze[0]) and 0 <= j < len(maze)):
            return False
        elif (maze[j][i] == "#"):
            return False
        elif (maze[j][i] == '\n'):
            return False
    return True


def findEnd(maze, moves):
    for x, pos in enumerate(maze[0]):
        if pos == "S":
            start = x
    i = start
    j = 0
    for move in moves:
        if move == "L":
            i -= 1

        elif move == "R":
            i += 1

        elif move == "U":
            j -= 1

        elif move == "D":
            j += 1

    if maze[j][i] == "T":
        list(moves)
        print(len(moves), file = ff)
        print(moves, file = ff)
        #printMaze(maze, moves)
        return True
    return False


nums = queue.Queue()
nums.put("")
add = ""
maze = createMaze()

while not findEnd(maze, add):
    add = nums.get()
    # print(add)
    for j in ["L", "R", "U", "D"]:
        put = add + j
        if valid(maze, put):
            nums.put(put)