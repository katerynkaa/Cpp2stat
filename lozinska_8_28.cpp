#include <stdio.h>

#define N 50
#define M 50


void rotate(int mat[N][M], int new_m[N][M], int m, int n, int k) {

    if (k > n) k = k % n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i + k > n) new_m[i][j] = mat[i + k - n][j];
            else new_m[i][j] = mat[i + k][j];
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
    int n, m, k;
    int mat[N][M], new_mat[N][M];

    printf("n = ");
    scanf_s("%d", &n);
    printf("m = ");
    scanf_s("%d", &m);
    printf("k = ");
    scanf_s("%d", &k);


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("a[%d][%d]= ", i, j);
            scanf_s("%d", &mat[i][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("\n");
        for (int j = 1; j <= m; j++) {
            printf("mat[%d][%d] = %d ", i, j, mat[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("\n");
        for (int j = 1; j <= m; j++) {
            new_mat[i][j] = 0;
        }
    }

    rotate(mat,new_mat, m, n, k);

}