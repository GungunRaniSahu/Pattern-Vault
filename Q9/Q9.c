#include <stdio.h>

int main() 
{
    int n, i, j, space;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        for (space = 0; space < n - i - 1; space++) 
        {
            printf(" ");
        }

        
        for (j = 0; j <= i; j++) 
        {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
