n = int(input("Enter the size of the checkerboard: "))

for i in range(n):
    for j in range(n):

        if (i + j) % 2 == 0:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()  
