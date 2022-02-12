#This file should not be plagarised without the author's permission
info = [['.', '.', '.'],
        ['.', '.', '.'],
        ['.', '.', '.']]

def show():
    print('  0 1 2')
    for i in range(3):
        print(i, info[i][0], info[i][1], info[i][2])

def judge():
    if info[0][0] == info[1][1] and info[1][1] == info[2][2]:
        if info[0][0] != '.':
            return info[0][0]
    if info[0][2] == info[1][1] and info[1][1] == info[2][0]:
        if info[0][2] != '.':
            return info[0][2]
    for i in range(3):
        if info[i][0] == info[i][1] and info[i][1] == info[i][2]:
            if info[i][0] != '.':
                return info[i][0]
    for i in range(3):
        if info[0][i] == info[1][i] and info[1][i] == info[2][i]:
            if info[0][i] != '.':
                return info[0][i]

    return 'y'

show()
while True: 
    a = input('Row(Player x):')
    b = input('Column(Player x):')
    a = int(a)
    b = int(b)
    info[a][b] = 'x'
    show()
    flag = judge()
    if flag == 'x':
        print('Player x wins')
        break
    if flag == 'o':
        print('Player o wins')
        break
    a = input('Row(Player o):')
    b = input('Column(Player o):')
    a = int(a)
    b = int(b)
    info[a][b] = 'o'
    show()
    flag = judge()
    if flag == 'x':
        print('Player x wins')
        break
    if flag == 'o':
        print('Player o wins')
        break
