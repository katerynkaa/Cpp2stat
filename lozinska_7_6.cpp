#include <stdio.h>

#define N 20

int input_array(double* mas, int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d]= ", i);
		int r = scanf_s("%lf", &mas[i]);
		if (r != 1) return i;
	}
	return n;
}


void output_array(double* mas, int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d]= %lf\n", i, mas[i]);
		
	}
}


int sum_arrays(double* mas1, double* mas2, double* res, int n) {
	for (int i = 0; i < n; i++) {
		res[i] = mas1[i] + mas2[i];

	}
	return 0;
}


double scalar(double* mas1, double* mas2, int n) {
	double r =0;
	for (int i = 0; i < n; i++) {
		r += mas1[i] * mas2[i];

	}
	return r;
}

int main() {
	int n;
	printf("n=");
	scanf_s("%d", &n);

	double a1[N], a2[N], a3[N];

	input_array(a1, n);
	input_array(a2, n);

	printf("scakar mlt = %lf\n", scalar(a1, a2, n));

	sum_arrays(a1, a2, a3, n);
	output_array(a3, n);

}
