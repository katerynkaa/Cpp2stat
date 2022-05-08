#include <stdio.h>
#include <math.h>

void task7() {
	int n;
	double b0 = 1, b1 = 0, bk;
	double a0 = 0, a1 = 1, ak;

	double s = 2 / (a0 + b0);
	if (n == 1) {
		printf("%lf", s);
		return;
	}
	s += 4 / (a1 + b1);
	if (n == 2) {
		printf("%lf", s);
		return;
	}

	for (int k = 3; k < n; ++k) {
		bk = b1 + a1;
		ak = a1 / k + a0 * bk;

		s += pow(2, k) / (ak + bk);

		b0 = b1;
		b1 = bk;

		a0 = a1;
		a1 = ak;
	}
	printf("s= %lf", s);

}

int main() {
	task7();

}