#include <stdio.h>

int main() {
	double b, bk;
	int n;

	printf("b n=");
	scanf_s("%lf", &b);
	printf("n=\n");
	scanf_s("%i", &n);

	bk = b;
	for (int i = 0; i < n; i++) {
		bk = b + 1 / bk;
	}
	printf("b_n for n = %i is %lf", n, bk);

}