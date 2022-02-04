#include <stdio.h>
#include <cmath>

double func(double x){
	return x * (x + 1) * (x * x + 1) + 1;
}

int main() {
	double x;
	printf("x0=");
	scanf_s("%lf", &x);

	double res = func(x);
	printf("Y for this x0 is %lf", res);
}