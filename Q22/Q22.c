#include <stdio.h>

void printPalindromePattern(int n) 
{
    for (int i = 1; i <= n; i++) 
    {    
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }

        for (int j = i - 1; j >= 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() 
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPalindromePattern(n);
    return 0;
}
