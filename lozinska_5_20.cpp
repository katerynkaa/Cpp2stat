#include <stdio.h>
#include <math.h>

double fun(int x) {
	return x * x * x + 4 * x * x + x - 6;
}

double root(double eps, double a, double b) {
	double u1, un, u0 = (a + b) / 2;
	un = u0 + 2 * eps;
	u1 = un;

	while (fabs(un - u0) > eps) {
		u0 - fun(u0) * (u1 - u0) / (fun(u1) - fun(u0));
		u0 = u1;
		u1 = un;
	}
	return un;
}

int main() {
	double eps, x;
	do {
		printf("eps=");
		scanf_s("%lf", &eps);
		if (eps > 0) break;
	} while (1);

	x = root(eps, 0, 2);
	printf("f(&lf) = %lf, f(%lf) = %lf", x, x, x, fun(x));

}