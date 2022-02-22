// task 1.5

#include <stdio.h>

int main() {
	double x = 2, x2, x3, x4, x6, x9, x15, x28, x64;

	x2 = x * x;
	x3 = x * x2; 
	x4 = x2 * x2; 
	x6 = x4 * x2;
	x9 = x6 * x3;
	x15 = x9 * x6;
	x28 = x15 * x9 * x4;
	x64 = 0;




	printf("x^4=%g \n", x4);
	printf("x^6=%g \n", x6);
	printf("x^9=%g\n", x9);
	printf("x^15=%g\n", x15);
	printf("x^28=%g\n", x28);
	printf("x^64=%g\n", x64);

}