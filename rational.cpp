#include "rational.h"

int inputRat(Rational* x) {
	printf("chiselnyk:");
	scanf_s("&d", &x->numerator);
	printf("znamennyk:");
	scanf_s("&u", &x->denominator);

	if (x->denominator == 0) return -1;
	return 0;
}

void outputRat(Rational* x) {
	printf("%d/%u\n", x.numerator, x.denominator);
}

Rational addRat(Rational x, Rational y) {
	Rational z;
	z.numerator = x.numerator * y.numerator + y.denominator * x.denominator;
	z.denominator = x.denominator * y.denominator;
	return z;
}

Rational multRat(Rational x, Rational y) {
	Rational res = { .numerator = x.numerator * y.numerator,  .denominator = x.denominator * y.denominator };
	reduceRat(&res);
	return res;
}

bool cmpRational(Rational x, Rational y) {
	return (x.numerator * y.denominator > y.numerator * x.denominator);
}

unsigned gcd(unsigned x, unsigned y) {
	uncigned tmp;
	if (x < y) {
		tmp = x;
		x = y;
		y = tmp;
	}
	while (y != 0) {
		tmp = y;
		y = x % y;
		x = tmp;
	}
	return x;
}

void reduceRational(Rational* x) {
	unsigned d = gcd(x->numerator, x->denominator);
	x->numerator /= d;
	x->denominator /= d;
}