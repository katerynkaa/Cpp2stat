//task 5.4
#include <stdio.h>


int fact(int n) {
	int i=1, res=1;

	while (i != n) {
		i++;
		res *= i;
	}
	return res;
}

double ress(int n) {
	double res=1;
	int i=1;
	while (i != n) {
		res *= (1 + 1.0 / fact(i));
		i++;
	}
	return res;
}

int main() {
	int x;
	printf("n=");
	scanf_s("%d", &x);

	printf("%lf\n", ress(x));

}