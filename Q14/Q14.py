rows = 5
for i in range(rows):
    print(" " * (rows - i), end="")
    coef = 1
    for j in range(i + 1):
        print(coef, end=" ")
        coef = coef * (i - j) // (j + 1)
    print()
