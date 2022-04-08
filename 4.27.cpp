#include <stdio.h>
#include <math.h>

int main() {
	double res = 2, u = 2, d = 0, eps = 0.001, res1 = 0;
	int i = 1;

	while (fabs(res - res1) > eps) {
		i++;
		if (i % 2 != 0) {
			u = u + 2;
			d = u - 1;

			printf("%lf %lf %lf\n", u, d, res);
		}
		else {
			d = u + 1;
			printf("%lf %lf %lf\n", u, d, res);
		}
		res1 = res;
		res *= u / d;

	}
		printf("Approximation to eps = %lf is %lf", eps, res);
}