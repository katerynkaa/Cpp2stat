#include <stdio.h>
#include <math.h>

int main() {
	double y, x;
	unsigned n;

	printf("n=");
	scanf_s("%u", &n);

	printf("x = ");
	scanf_s("%lf", &x);

	y = x;
	for (unsigned i = 0; i < n; i++) {
		y = sin(y);
	}
	printf("y=%lf", y);
}
