#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

#pragma warning(disable : 4996)

int main()
{
    FILE* file;
    int number, m = 0;

    file = fopen("file.txt", "r");

    if (file == NULL)
    {
        printf("Can't open file for reading.\n");
    }
    else
    {
        while (fscanf(file, "%d", &number) == 1) {

            if (abs(number) > abs(m)) m = number;
            
        }
    }
    printf("Max is %d", m);
    fclose(file);
    return 0;
}