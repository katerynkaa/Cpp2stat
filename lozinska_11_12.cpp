#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#pragma warning(disable : 4996)

typedef struct {
	char name[30];
	int price;
	char age[5];
}Toy;

void outToy(const Toy* x) {
	printf("Name of toy - %s, Price - %d, for kids of age - %s\n", x->name, x->price, x->age);
}

int main() {
    Toy toy;
    double m = 0;
    Toy tm;

    FILE* pFile;
    pFile = fopen("toys.dat", "r");

    if (pFile == NULL)
    {
        printf("Can't open file for reading.\n");
    }
    else {
        while (!feof(pFile)) {
            fscanf(pFile, "%s %d %s", &toy.name, &toy.price, &toy.age);
            if (m < toy.price) {
                m = toy.price;
                tm = toy;
            }

        }
        fclose(pFile);
        printf("The priciest toy is\n");
        outToy(&tm);
    }
}