//task 5 16 l

#include <stdio.h>
#include <math.h>


int main() {
	double res = 1, x = 0.5, eps = 0.0001, res1 = 0, nom = 1, den = 1, xx = 1;
	int i = 1;

	while (fabs(res - res1) > eps) {
		nom *= 2 * i - 1;
		den *= 2 * i;
		xx *= x;

		res1 = res;
		printf("%d\n", i);

		if (i % 2 == 0) { 
			res += (nom / den) * xx;
			printf("n/d = %lf\n", nom / den);
		}
		else if(i % 2 != 0) { 
			res -= (nom / den) * xx;
			printf("n/d = %lf\n", nom / den);
		}
		printf("res = %lf\n", res);
		printf("res1 = %lf\n", res1);
		i++;
	}
	printf("Approximation to eps = %lf is %lf", eps, res);
}