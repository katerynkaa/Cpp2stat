#include <stdio.h>


void output(int mas[3][3], int N, int M) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mas[i][j] == M) {
                mas[i][j] = N;
            }
            printf("\ta[%d][%d]=%d", i, j, mas[i][j]);
        }
    }
}
int main() {
    int mas[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int n, m;

    printf("n m:");
    scanf_s("%d %d", &n, &m);
    output(mas, n, m);
}