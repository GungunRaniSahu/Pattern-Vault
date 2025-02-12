#include <stdio.h>

void printBinaryCheckerboard(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the checkerboard: ");
    scanf("%d", &size);

    printBinaryCheckerboard(size);

    return 0;
}
