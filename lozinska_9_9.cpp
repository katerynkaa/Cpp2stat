#include <stdio.h>
#include <stdlib.h>
#include <cmath>


//a
double** input_mat(int n, int m) {
	double** a = (double**)calloc(n, sizeof(*a)); // sizeof(*a)) has double* type
	for (int i = 0; i < n; i++) {
		a[i] = (double*)calloc(m, sizeof(*a[i]));
		for (int j = 0; j < m; j++) {
			printf("a[%d][%d]", i, j);
			scanf_s("%lf", &a[i][j]);
		}
	}
	return a;
}


void free_matr(double** v1, int n) {
	for (int i = 0; i < n; i++) {
		free(v1[i]);
	}
	free(v1);
}

double** add(double** v1, double** v2, int n, int m) {
	int maxx = 0;
	int num = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {

			sum += v1[i][j];

		}
		if (sum > maxx) {
			maxx = sum;
			num = i+1;
		}
		sum = 0;
	}


	double** v3 = (double**)calloc(n+1, sizeof(double*)); // sizeof(*a)) has double* type
	for (int i = 0; i < n + 1; i++) {
		v3[i] = (double*)calloc(m, sizeof(*v3[i]));
		for (int j = 0; j < m; j++) {
			
			if (i<num)v3[i][j] = v1[i][j];
			if (i == num)v3[i][j] = v2[0][j];
			if (i > num)v3[i][j] = v1[i-1][j];
		}
	}
	return v3;
}

void mat_out(double** v, unsigned n, unsigned m) {
	unsigned i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%g  ", v[i][j]);
		}
		printf("\n");
	}
}


int main() {
	
	//ch

	int n;
	printf("n=");
	scanf_s("%d", &n);
	int m;
	printf("m=");
	scanf_s("%d", &m);


	double** v1 = input_mat(n, m);
	double** v2 = input_mat(1, m);

	double** v3 = add(v1, v2, n, m);

	mat_out(v3, n+1, m);

	free_matr(v1, m);
	free_matr(v2, m);
	free_matr(v3, n);
	
}