#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 3; i++) {
        // 공백 출력
        for (j = 0; j < 2 - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}