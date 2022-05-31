#include <stdio.h>
#include <math.h>


void a(int k) {
	int counter = 0;
	int length, i = 0, x = 1;
	
	while (counter < k) {
		x *= 10;
		length = floor(log10(abs(x))) + 1;
		counter += length;

		i++;
	}
	if (counter == k) printf("the %d digit is 0", k);
	else if (counter - length == k - 1) printf("the %d digit is 1", k);
	else printf("the %d digit is 0", k);
}

void b(int k) {
	int counter = 0;
	int length, i = 0, x = 0, remember_last_digit;

	while (counter < k) {
		x += 1;
		length = floor(log10(abs(x))) + 1;
		counter += length;

		i++;
	}
	if (counter == k && length == 1) printf("the %d digit is %d", k, x);
	if (counter == k && length != 1) printf("the %d digit is %d", k, x % 10);
	if (counter > k) {
		while (counter > k) {
			remember_last_digit = x % 10;
			x /= 10;
			counter -= 1;
			//printf("last digit = %d\n", remember_last_digit);
			//printf("x = %d\n", x);
			if (counter == k) printf("the %d digit is %d", k, remember_last_digit);
		}
	}
}

void c(int k) {
	int counter = 0;
	int length, i = 1, x = 1, remember_last_digit;

	while (counter < k) {
		x = i*i;
		length = floor(log10(abs(x))) + 1;
		counter += length;

		//printf("x= %d\n", x);
		//printf("length of x = %d\n", length);
		//printf("counter = %d\n", counter);
		i++;
	}
	if (counter == k && length == 1) printf("the %d digit is %d", k, x);
	if (counter == k && length != 1) printf("the %d digit is %d", k, x % 10);
	if (counter > k) {
		while (counter > k) {
			remember_last_digit = x % 10;
			x /= 10;
			counter -= 1;
			//printf("last digit = %d\n", remember_last_digit);
			//printf("x = %d\n", x);
			if (counter == k) printf("the %d digit is %d", k, remember_last_digit);
		}
	}
}


void d(int k) {
	int counter = 0;
	int length, remember_last_digit;
	int f0 = 0, f1 = 1, f2 = 0;

	while (counter < k) {
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
		length = floor(log10(abs(f2))) + 1;
		counter += length;

	}
	if (counter == k && length == 1) printf("the %d digit is %d", k, f2);
	if (counter == k && length != 1) printf("the %d digit is %d", k, f2 % 10);
	if (counter > k) {
		while (counter > k) {
			remember_last_digit = f2 % 10;
			f2 /= 10;
			counter -= 1;
			
			if (counter == k) printf("the %d digit is %d", k, remember_last_digit);
		}
	}
}
int main() {
	c(13);
}