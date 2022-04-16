#include<stdio.h> 
 
#define SIZE 5

int main() {

    int arr[] = { 1,2,3,4,5 };

    double number;
    printf("Enter number = ");
    scanf("%d", &number);
    int cnt = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < number) cnt++;
    }
    printf("Elements < number: %d \n", cnt);
}
