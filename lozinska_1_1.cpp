//task 1.4

#include <stdio.h>
#include <math.h>

int main() {
	double m1, m2, r, f;

	printf("m1, m2, r = ");
	scanf_s("%lf %lf %lf", &m1, &m2, &r);
	double y = 6.673 * pow(10, -11);

	f = (y * m1 * m2) / r * r;
	printf("F= %e", f);

}