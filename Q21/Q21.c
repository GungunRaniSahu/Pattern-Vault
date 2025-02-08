#include <stdio.h>

int main() 
{
    int n, a = 1, b = 1, next;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
        }
        printf("\n");
    }

    return 0;
}
