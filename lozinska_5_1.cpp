#include <stdio.h>
#include <float.h> //DBL_EPSILON

int main() {
	double a, n = 1, res =1;

	printf("a=");
	scanf_s("%lf", &a);

	while (res < a) {
		n++;
		res += 1 / n;

	}
	res += 1 / (n + 1);

	printf("The first member of the sequence bigger then a = %lf is %lf is for n = %lf", a, res, n+1);


}