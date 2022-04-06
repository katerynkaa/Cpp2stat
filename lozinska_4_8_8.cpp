#include <stdio.h>
#include <math.h>

int func(int k, int m) {
	double x;
	if (m <= pow(4, k)) {
		k++;
		x = func(k, m);
	}
	else return x;
}

int main() {
	int k=0, m=256;

	//scanf_s("%d", &m);

	printf("%i < %i", func(k, m), m);
}