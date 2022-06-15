#include <stdio.h>
#include <stdlib.h>

int main(void){
    int k = 5;
    int *ptr2 = &k;
    int **ptr1 = &ptr2;

    /*
    Another method

    int k = 5;
    int *ptr2 = NULL;
    int **ptr1 = NULL;
    ptr2 = &k;
    ptr1 = &ptr2

    */

    printf("%d\n", **ptr1);

    return 0;
}