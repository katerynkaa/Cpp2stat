#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>

#define LEN_NAME 225
#define MAX_MAS 100

typedef struct {
	char name[LEN_NAME];
	int height;
}Mount;

bool inputMount(Mount* x) {
	printf("Mount name:");
	scanf_s("%s", x->name);
	printf("Mount height:");
	scanf_s("%d", &x->height);
	return true;
}

void outputMount(const Mount* x) {
	printf("Mount %s of height %d\n", x->name, x->height);
}

const char* maxHeight(const Mount* arr, size_t n) {
	if (n == 0) return "No mountains";

	int maxh = arr[0].height;
	int indexMax = 0;

	for (int i = 1; i < n; i++) {
		if (arr[i].height > maxh) {
			maxh = arr[i].height;
			indexMax = i;
		}
	}
	return arr[indexMax].name;
}

void heightByName(const Mount* arr, size_t n, const char* mountname) {
	bool isFound = false;
	for (int i = 0; i < n; i++) {
		if (strcmp(arr[i].name, mountname) == 0) {
			printf("\nMount %s has height %d\n", mountname, arr[i].height);
			isFound = true;
			break;
		}
	}
	if (!isFound) {
		printf("Thereis no mountain %s!\n", mountname);
	}
}

int main() {
	Mount test[MAX_MAS] = { {"K2", 8689}, {"Everest", 8848}, {"Hill", 1234} };
	printf("%s\n", maxHeight(test, 3));

	heightByName(test, 3, "Goverla");

	Mount mnt[MAX_MAS];
	size_t n;
	printf("Input n=");
	scanf_s("%zu", &n);

	for (size_t i = 0; i < n; i++) {
		inputMount(&mnt[i]);
	}
	printf("%s\n", maxHeight(mnt, n));
	printf("name:");
	char mname[LEN_NAME];
	scanf_s(" ");
	fgets(mname, LEN_NAME, stdin);
	heightByName(mnt, n, mname);
}