#include <stdio.h>
#include <math.h>

#define N 20

int fib_counter(int mas[N], int n) {
    int counter = 0;
    
    for (int i = 0; i < n; i++) {
        int n1 = sqrt(5 * mas[i] * mas[i] + 4);
        int n2 = sqrt(5 * mas[i] * mas[i] - 4);

        if (n1 * n1 == 5 * mas[i] * mas[i] + 4 || n2 * n2 == 5 * mas[i] * mas[i] - 4) counter += 1;
    }
    return counter;
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
    printf("There are %d fib numbers in this array", fib_counter(mas, n));
}