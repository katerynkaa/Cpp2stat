// task 2.17c

#include <stdio.h>
#include <cmath>

double softSign(double x) {
	double y;
	y = x / (1 + fabs(x));
	return y;
}

double softSign_der(double x) {
	double y;
	y = 1 / (1 + fabs(x) * (1 + fabs(x)));
	return y;
}

int main() {

	printf("this function in x0 is %g, derivative in this x0 is %g\n", softSign(-1), softSign_der(-1));
	printf("this function in x0 is %g, derivative in this x0 is %g\n", softSign(1), softSign_der(1));
	printf("this function in x0 is %g, derivative in this x0 is %g\n", softSign(0), softSign_der(0));
}