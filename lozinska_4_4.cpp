//task 3_4

#include <stdio.h>
#include <inttypes.h>
#include <inttypes.h>


uint16_t dobutok(uint8_t a, uint8_t b) {
	return (uint16_t)a * b;
}

int main() {
	unsigned char a, b;
	scanf_s("%hhu", &a);
	scanf_s("%hhu", &b);
	printf("%hu", dobutok(a, b));
}