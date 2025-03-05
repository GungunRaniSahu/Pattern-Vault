#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == 0 || i == 4)
                printf("%d", i + 1);
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}
