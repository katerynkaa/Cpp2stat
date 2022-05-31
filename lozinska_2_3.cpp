//task 1.8

#include <stdio.h>

int main() {
	double x, y;
	printf("x = \n");
	scanf_s("%lf", &x);

	printf("y = \n");
	scanf_s("%lf", &y);

	printf("x + y = %.3f", x + y);
	printf("x * y = %.3f", x * y);
}