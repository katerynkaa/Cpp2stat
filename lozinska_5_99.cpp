#include <stdio.h>
double seq1(int n) {
	double v0 = 1, v1 = 0.3, vk;
	for (int k = 2; k <= n; k++) {
		vk = (k + 2) * v0;
		//printf("The %d member of the seq is %lf\n", k, vk);

		v0 = v1;
		v1 = vk;
			
	}
	return vk;
}

double seq2(int n) {
	double v0 = 1, v1 = 1, v2 = 1, vk;
	for (int k = 3; k <= n; k++) {
		vk = (k + 4) * (v2 - 1) + (k + 5) * v0;
		//printf("The %d member of the seq is %lf\n", k, vk);

		v0 = v1;
		v1 = v2;
		v2 = vk;

	}
	return vk;
}

double seq3(int n) {
	double v0 = 0, v1 = 0, v2 = 1.5, vk;
	for (int k = 3; k <= n; k++) {
		vk = ((k - 2) / ((k - 3) * (k - 3) + 1)) * v2 - v1 * v0 + 1;
		printf("The %d member of the seq is %lf\n", k, vk);

		v0 = v1;
		v1 = v2;
		v2 = vk;

	}
	return vk;
}

int main() {
	int n=10;
	printf("The %d member of the seq is %lf", n, seq3(n));
}