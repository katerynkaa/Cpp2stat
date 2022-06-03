//k

#include <stdio.h>
#include<stdlib.h>

#define N 50

typedef struct {
	int x;
	int y;
}point;

void input_poly(point poly[N], int n) {
	for (int i = 0; i < n; i++) {
		printf("Enter coord x ");
		scanf_s("%d", &poly[i].x);
		printf("Enter coord y ");
		scanf_s("%d", &poly[i].y);
	}
}

void output_poly(const point poly[N], int n) {
	for (int i = 0; i < n; i++) {
		printf("Point %d : (%d, %d)", i, poly[i].x, poly[i].y);
	}
}


int main() {

	point poly[N];
	int n;
	printf("How many points does the polygon have n=");
	scanf_s("%d", &n);
	input_poly(&poly[N], n);

	output_poly(&poly[N], n);

	free(poly);
}
