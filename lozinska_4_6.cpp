// task 3_6

#include <stdio.h>
#include <math.h>

int main() {

    float a = 12, b = -23.78, c = -5.6;

    a = fabs(a);
    b = fabs(b);
    c = fabs(c);

    float min=a, max=b ;

    if (b < a) {
        min = b;
        max = a;
    }

    if (min > c)
        min = c;

    if (max < c) 
        max = c;
    
    printf("max = %f, min = %f", max, min);
}