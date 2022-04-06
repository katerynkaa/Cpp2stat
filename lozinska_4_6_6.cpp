#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double x=sqrt(2), xn;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		xn = sqrt(2 + x);
		x = xn;
	}
	printf("n = %lf, y = %lf", n, x);
}