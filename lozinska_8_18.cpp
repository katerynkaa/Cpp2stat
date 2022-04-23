#include <stdio.h>

#define N 50
#define M 50


void rotate(int mat[N][M], int new_m[N][M], int m, int n) {


    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
             if (mat[1][j] > 0 || mat[n][j] > 0) {
                printf("not all numbers are negative");
                break;
             }
             else {
                 if (i == 0) new_m[n][j] = mat[1][j];
                 else if (i == n) new_m[1][j] = mat[n][j];
                 else new_m[i][j] = mat[i][j];
             }
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("\n");
        for (int j = 1; j <= m; j++) {
            printf("mat[%d][%d] = %d ", i, j, new_m[i][j]);
        }
    }
}

int main() {
    int n, m;
    int mat[N][M], new_mat[N][M];

    printf("n = ");
    scanf_s("%d", &n);
    printf("m = ");
    scanf_s("%d", &m);


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf_s("%d", &mat[i][j]);
            new_mat[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("\n");
        for (int j = 1; j <= m; j++) {
            printf("mat[%d][%d] = %d ", i, j, mat[i][j]);
        }
    }
    printf("\n");

    rotate(mat, new_mat, m, n);

}