//task 3.23ye

#include <stdio.h>
#include <math.h>

double softExponential(float x, double a) {
	double res;
	if (a < 0) {
		res = -(log(1 - a * (x + a)) / a);
	}
	if (a > 0) {
		res = (exp(a * x) - 1) / a;
	}
	if (a == 0) {
		res = x;
	}
	return res;
}

double derivative_softExponential(float x, double a) {
	double res;
	if (a < 0) {
		res = 1 / (1 - a * x + a * a);
	}
	if (a > 0) {
		res = exp(a * x);
	}
	if (a == 0) {
		res = 1;
	}
	return res;
}

int main() {
	float x = 2;
	double a = -2;
	double func, deriv;

	func = softExponential(x, a);
	deriv = derivative_softExponential(x, a);
	printf("Function value is %lf and derivative value is %lf", func, deriv);

}
