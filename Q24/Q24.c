#include <stdio.h>

void printHollowPyramid(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= (2 * n - 1); j++) 
        {
            if (j == n - i + 1 || j == n + i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() 
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printHollowPyramid(n);
    return 0;
}
