#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    int num = 1;

    while (left <= right && top <= bottom) 
    {
      
        for (int i = left; i <= right; i++) 
        {
            matrix[top][i] = num++;
        }
        top++;

        
        for (int i = top; i <= bottom; i++) 
        {
            matrix[i][right] = num++;
        }
        right--;

        if (top <= bottom) 
        {
            for (int i = right; i >= left; i--) 
            {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        
        if (left <= right) 
        {
            for (int i = bottom; i >= top; i--) 
            {
                matrix[i][left] = num++;
            }
            left++;
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
