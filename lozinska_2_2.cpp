// task 1.7

#include <stdio.h>
#include <math.h>

int main() {
	double x;
	printf("x=");
	scanf_s("%lf", &x);

	printf("Integral part of x is %d\n", int(x));
	printf("Fractional part of x is %g\n", x - int(x));
	printf("Minimum integer bound is %d\n", int(x));
	printf("Maximum integer bound is %d\n", int(x + 1));
	printf("Rounded x is %.0f\n", x);

	double i, f;

	f = modf(x, &i);
	printf("The Integral and Fractional parts of %g using math.h function are %g and %g\n", x, i, f);


}