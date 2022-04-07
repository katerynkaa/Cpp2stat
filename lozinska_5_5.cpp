#include <stdio.h>


int main() {
	size_t n = 3;
	int x, x1, x2, x3;

	x1 = x2 = x3 = -99;
	while (x3 < 0) {
		x = x1 + x3 + 100;
		printf("x[%d]: %d = %d + %d + 100\n", n + 1, x, x1, x3);

		x1 = x2;
		x2 = x3;
		x3 = x;
		n++;
	}
	printf("%zu", n);
}