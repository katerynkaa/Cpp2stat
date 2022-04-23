#include <stdio.h>

#define N1 20
#define M1 20

int main() {
    int n, m;
    double mas[N1][M1];

    printf("n = ");
    scanf_s("%d", &n);
    printf("m = ");
    scanf_s("%d", &m);
    

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf_s("%lf", &mas[i][j]);
        }
    }
    for (int i = 1; i <= m; i++) {
        printf("\n");
        for (int j = 1; j <= n; j++) {
            printf("%lf ", mas[i][j]);
        }
    }
}
