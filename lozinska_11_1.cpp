#include <stdio.h>
#include <stdlib.h>


int write_array_to_file(float* arr, int n, const char* fname) {
	FILE* fp;
	fopen_s(&fp, fname, "wb");
	if (fp == NULL) {
		scanf_s(" ");
		printf("Error in file %s for writing", fname, stderr);
		return -1;
	}
	int res = fwrite(arr, sizeof(*arr), n, fp);
	fclose(fp);
	return res;

}

int read_array_to_file(const char* fname) {
	FILE* fp;
	fopen_s(&fp, fname, "rb");
	if (fp == NULL) {
		scanf_s(" ");
		printf("Error in file %s for reading", fname, stderr);
		return -1;
	}
	float x;
	int count = 0;
	while (!feof(fp)) {
		fread(&x, sizeof(float), 1, fp);
		count++;
		printf("%f", x);
	}
	fclose(fp);
	return count;

}

int main() {
	float* mas;
	int n;
	printf("n=");
	scanf_s("%d", &n);
	mas = (float*) malloc(n * sizeof(float));
	for (int i = 0; i < n; i++) {
		printf("a[%d]=", i);
		scanf_s("%f", &mas[i]);
	}

	char fname[20];
	printf("file:");
	scanf_s("%s", fname);
	write_array_to_file(mas, n, fname);
	read_array_to_file(fname);

	free(mas);

}