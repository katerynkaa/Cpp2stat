// task 3.2

#include <stdio.h>

int main() {

	int n = 345;
	int od, de, sot;


	sot = n / 100;
	od = n % 10;
	de = (n / 10) % 10;

	if (sot != od && od != de && sot != de) {
		printf("%i%i%i\n", sot, od, de);
		printf("%i%i%i\n", od, sot, de);
		printf("%i%i%i\n", de, od, sot);
		printf("%i%i%i\n", sot, de, od);
		printf("%i%i%i\n", od, de, sot);
		printf("%i%i%i\n", de, sot, od);
	
	}
	

}