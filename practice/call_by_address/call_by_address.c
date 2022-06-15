#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main(void){
    int num1 = 15;
    int num2 = 20;

    printf("Before thr swap:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    puts("");
    printf("After thr swap:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swap(int* x, int* y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}