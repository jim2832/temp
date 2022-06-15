#include <stdio.h>
#include <stdlib.h>

void output(int n, int* p);

int main(void){
    int a[5] = {1,2,3,4,5};
    int b[7] = {1,2,3,4,5,6,7};

    output(5, a); //call by address
    output(7, b); //call by address

    return 0;
}

void output(int n, int* p){
    for(int i=0; i<n; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
}