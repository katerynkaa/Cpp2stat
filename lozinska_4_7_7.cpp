#include <stdio.h>
#include <math.h>

double func(double x, int n) {
	double t = 1, y = 1;

	for (unsigned i = 1; i <= n; i++) {
		t *= (x / i);
		y += t;
	}
	return y;
}

int main() {
	int n;
	double x;

	scanf_s("%d", &n);
	scanf_s(" %lf", &x);

	printf("func(%lf) = %lf", x, func(x, n));
}