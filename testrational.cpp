#include "rational.h"

int main() {
	Rational r1 = { 1, 2 };
	Rational r2 = { 2,3 };

	Rational r3 = addRat(r1, r2);
	outputRat(r3);

	outputRat(multRat(r1, r2));

	if (cmpRat(r1, r2)) {
		printf("r2>r1");
	}

	Rational r4;
	if (inputRat(&r4) == 0) {
		outputRat(r4);
		reduceRat(&r4);
		outputRat(r4);
	}
}