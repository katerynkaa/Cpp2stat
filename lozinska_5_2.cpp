#include <stdio.h>

void a() {
	int n = 10;
	int f0 = 0, f1 = 1, f2 = 0;

	for (int k = 1; k < n; k++) {
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
	}
	printf("%d member of Fibonacci sequence is %d\n", n, f2);
}

void b() {
	int a = 80, k = 1;
	int f0 = 0, f1 = 1, f2 = 0;

	while (f2 < a) {
		k++;
		f2 = f1 + f0;

		if (f2 > a) {
			f2 -= f0;
			k -= 1;
			break;
		}
		f0 = f1;
		f1 = f2;
		
		
	}
	printf("%d member of Fibonacci sequence %d < %d \n", k, f2, a);
}

void c() {
	int a = 80, k = 1;
	int f0 = 0, f1 = 1, f2 = 0;

	while(f2 < a) {
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
		k++;
	}
	printf("%d member of Fibonacci sequence %d > %d \n", k, f2, a);
}

void d() {
	int res=0, k = 1;
	int f0 = 0, f1 = 1, f2 = 0;

	while (res < 1000) {
		
		
		res += f2;
		f2 = f1 + f0;

		if (res > 1000) {
			res = res - f1;
			k -= 1;
			break;
		}

		f0 = f1;
		f1 = f2;
		k++;
	}
	printf(" summ of %d members of sequence, %d, is less than 1000\n", k, res);
}


int main() {
	//a();
	//b();
	//c();
	d();

}