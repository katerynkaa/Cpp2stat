#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N1 25
#define M1 25

int main() {
    int mas[N1][M1];
    int n, m;

    printf("n= ");
    scanf_s("%d", &n);
    printf("m= ");
    scanf_s("%d", &m);

    for (int i = 1; i <= n; i++) {
        printf("string %d:", i);
        for (int j = 1; j <= m; j++) {
            scanf_s(" %d", &mas[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("\n");
        for (int j = 1; j <= m; j++) {
            printf("%d ", mas[i][j]);
        }
    }
}