#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 3; i++) {
        // space
        for (j = 0; j < 2 - i; j++) {
            printf(" ");
        }
        // asterisk
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
