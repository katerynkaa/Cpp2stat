#include <stdio.h>

#define N 1000

int arr(int mas[N], int n) {
    int min = 0;
    for (int i = 0; i < n; i++) {
        int minn = (i + 1) * mas[i];
        if (minn < min) {
            min = minn;
        }
    }
    return min;
}


int main() {
    int mas[N], n;

    for (int i = 0; i < N; i++) {
        printf("mas[%d] = ", i);
        scanf_s("%d", &mas[i]);
        if (mas[i] == 0) {
            n = i;
            break;
        }
    }
    printf("Minimun is %d", arr(mas, n));
}