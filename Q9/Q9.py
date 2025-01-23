n = int(input("Enter the number of rows for the pyramid: "))

for i in range(n):
  
    print(" " * (n - i - 1), end="")

    for j in range(i + 1):
        print(chr(65 + j), end=" ")

    print()
