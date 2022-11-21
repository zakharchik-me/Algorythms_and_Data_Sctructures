f = open('test_import_file_2_1.txt', 'r')
ff = open('test_import_file_2_2.txt', 'r')
fff = open('test_output_file_1.txt.txt', 'w')
mega = []
while True:
    for i in ff:
        a, b = map(int, ff.readline().split())
        st = str(f.readline())
        for i in range(len(st)):
            if i >= a and i <= b:
                mega.append(st[i])
            if i == b+1:
                mega.append(st[i])
    print(*mega)
