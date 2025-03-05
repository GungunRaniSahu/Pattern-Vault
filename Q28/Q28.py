for i in range(5):
    for j in range(5):
        print(i + 1 if j == 0 or j == 4 or i == 0 or i == 4 else 0, end="")
    print()
