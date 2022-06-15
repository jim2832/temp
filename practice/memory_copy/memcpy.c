#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

int main(void) {
    int a[N] = {1,5,7,2,3};
    int b[N] = {0};

    printf("Before memory copy:\n");
    for(int i=0; i<sizeof(b)/sizeof(b[0]); i++){
        printf("b[%d] = %d\n", i, b[i]);
    }

    printf("\n");
    memcpy(b, a, sizeof(int) * N);

    printf("After memory copy:\n");
    for(int i=0; i<sizeof(b)/sizeof(b[0]); i++){
        printf("b[%d] = %d\n", i, b[i]);
    }

    return 0;
}