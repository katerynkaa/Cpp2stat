//task 4.18d
#include <stdio.h>

int main() {
	double x=2, res = 1, fact=1, xx=1;
	int n = 7;
	
	for (int k = 1; k < n; k++) {
		fact *= k;
		xx *= x;
		res += xx / fact;
	}
	printf("the sequence of n = %d, x = %lf for the function x^k/k! is %lf", n, x, res);
}