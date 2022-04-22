#include <stdio.h>
#include "lozinska_11_2.cpp"

void read_file(const char* fname) {
	FILE* fp = fopen(fname, "rb");
	if (fp == NULL) {
		printf("file %s cannot be opened for reading", fname);
		return;
	}

	double x;
	do {
		int r = fread(&x, sizeof(x), 1, fp);
		if (r != 1) break;
		printf("%f", x);
	} while (1);

	fclose(fp);
}

int main(int argk, char** argv) {

	char fnameF[] = "task2f.dat";
	char fnameG[] = "task2g.dat";

	double a;
	printf("a=");
	scanf_s("%lf", &a);

	write_reals_to_file(fnameF);
	write_limit_reals_to_file(fnameF, fnameG, a);
	read_file(fnameG);
	return 0;
}

