// task 3.1

#include <stdio.h>

int main() {

	int n = 345;
	int od, de, sot;

	//a)
	sot = n / 100;
	od = n % 10;
	de = (n / 10) % 10;
	printf("%i: %i, %i, %i\n", n, od, de, sot);

	//b)
	printf("%i\n", od + de + sot);

	//c)
	printf("%i%i%i\n", od, de, sot);

}