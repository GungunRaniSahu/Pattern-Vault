def print_palindrome_pattern(n):
    for i in range(1, n + 1):
        print("".join(str(j) for j in range(1, i + 1)) + "".join(str(j) for j in range(i - 1, 0, -1)))

n = int(input())
print_palindrome_pattern(n)
