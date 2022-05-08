#include <stdio.h>
#include <math.h>

double eqn(double x) {
	return tan(x) - x;
}

double root(double eps, double a, double b) {
	double mid = (a + b) / 2;
	if (b - a < eps) {
		return mid;
	}

	if (eqn(mid) < eps) {
		return mid;
	}

	if (eqn(a) * eqn(mid) <= 0) {
		//look 4 root in (a, mid)
		return root(eps, a, mid);
	}
	else{
		//look 4 root in (mid, b)
		return root(eps, mid, b);
	}

}

int main() {
	double x, eps;
	printf("x=");
	scanf_s("%lf", &x);

	do {
		printf("eps=");
		scanf_s("%lf", &eps);
		if (eps > 0) break;
		printf("Input eps>0 once more");
	} while (1);

	x = root(eps, -0.001, 1.5);
	printf("tg(%lf)=%lf as tg(%lf)=%lf", x, x, x, tan(x));

}