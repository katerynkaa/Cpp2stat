// task 3_3
#include <stdio.h>
#include <inttypes.h>
#include <inttypes.h>
#include <math.h>

int main() {

	int32_t a, b, c; 
	printf("a b c =");
	scanf_s("%i %i %i", &a, &b, &c);

	// a)
	int32_t d1 = a * b * c; 
	printf("p=%i\n", d1);

	// b)
	int64_t d2 = (int64_t)a * b * c;
	printf("p=%" PRId64"\n",d2);
}