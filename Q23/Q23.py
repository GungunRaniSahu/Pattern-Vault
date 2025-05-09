def print_binary_checkerboard(n):
    for i in range(n):
        for j in range(n):
            print((i + j) % 2, end=" ")
        print()

size = int(input("Enter the size of the checkerboard: "))
print_binary_checkerboard(size)
