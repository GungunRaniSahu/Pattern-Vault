rows = int(input())
for i in range(1, rows + 1):
    letter = 'A'
    for j in range(i):
        print(letter, end=" ")
        letter = chr(ord(letter) + 1)
    print()
