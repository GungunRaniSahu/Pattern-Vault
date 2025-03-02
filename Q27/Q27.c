#include <stdio.h>

void printAlternatingPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

+
        char symbol = (i % 2 == 1) ? '*' : '#';
        for (int j = 1; j <= i; j++) {
            printf("%c ", symbol);
        }
        
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printAlternatingPyramid(n);
    return 0;
}
