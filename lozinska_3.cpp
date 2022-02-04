// task 2.9

#include <stdio.h>
#include <cmath>
#define pi 3.142857

double square(double a1, double a2, double a3, double r) {
	double a, b, s;
	a = sin(a1) * 2 * r;
	b = sin(a2) * 2 * r;
	s = 0.5 * a * b * sin(a3);
	printf("%lf %lf\n", a, b);
	return s;
}

int main() {

	double a1, a2, a3, r, res;
	printf("a1, a2, a3, r  = ");
	scanf_s("%lf %lf %lf %lf\n", &a1, &a2, &a3, &r);
	printf("%lf %lf %lf %lf\n", a1, a2, a3, r);

	a1 *= pi;
	a2 *= pi;
	a3 *= pi;

	res = square(a1, a2, a3, r);
	printf("Square of this triangle is %g", res);

}