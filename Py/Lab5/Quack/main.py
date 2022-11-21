with open("quack.in", "r") as fin:
    program = fin.read().split()

    registers = {chr(letter): 0 for letter in range(ord('a'), ord('z') + 1)}
    labels = {declaration[1:]: line for line, declaration in enumerate(program) if declaration[0] == ':'}
    ip = 0 #

    queue = []
    fout = open("quack.out", "w")
    while ip < len(program):
        command = program[ip]
        if (command in "+-*/%"):
            arg1 = queue.pop(0)
            arg2 = queue.pop(0)
            if (command in "/%" and arg2 == 0):
                queue.append(0)
            else:
                queue.append(int(eval(str(arg1) + command + str(arg2))) & 65535)
        elif command[0] == ">":
            registers[command[1]] = queue.pop(0)
        elif command[0] == "<":
            queue.append(registers[command[1]])
        elif command[0] == "P":
            print(registers[command[1]] if len(command) > 1 else queue.pop(0), file=fout)
        elif command[0] == "C":
            print(chr(registers[command[1]] if len(command) > 1 else queue.pop(0)), file=fout, end="")
        elif command[0] == "J":
            ip = labels[command[1:]]
        elif command[0] == "Z":
            ip = labels[command[2:]] if registers[command[1]] == 0 else ip
        elif command[0] == "E":
            ip = labels[command[3:]] if registers[command[1]] ==  registers[command[2]] else ip
        elif command[0] == "G":
            ip = labels[command[3:]] if registers[command[1]] > registers[command[2]] else ip
        elif command == "Q":
            break
        elif command[0] != ":":
            queue.append(int(command))
        ip += 1
    fout.close()
