#include <stdio.h>

#define N 50

int main() {

	int n, res = 0;
	unsigned a[N];

	for (int i = 0; i < N; i++) {
		printf("a[%d] =", i);
		scanf_s("%d", &a[i]);
		res += a[i];
		if (a[i] == 0) {
			n = i;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("a[%d]=%u\n", i, a[i]);
	}
	printf("Summ of all numbers given is %d", res);
}