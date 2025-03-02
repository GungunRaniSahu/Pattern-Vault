def print_alternating_pyramid(n):
    for i in range(1, n + 1):
        print(" " * (n - i), end="")
        symbol = '*' if i % 2 == 1 else '#'
        print((symbol + " ") * i)

n = int(input("Enter the number of rows: "))
print_alternating_pyramid(n)
