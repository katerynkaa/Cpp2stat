//task 1.9
//чомусь програма запускається тільки після того, як я ввожу щось у пустий рядок

#include <stdio.h>
#include <cmath>

int main() {

	double x, y;
	printf("x, y = ");
	scanf_s("%lf %lf\n", &x, &y); 

	printf("Arithmetical mean = %lf\n", (x + y) / 2);
	printf("Arithmetical mean = %e\n", (x + y) / 2);
	printf("Harmonic mean = %lf\n", (2 / ((1 / x) + (1 / y))));
	printf("Harmonic mean = %e\n", (2 / ((1 / x) + (1 / y))));
}