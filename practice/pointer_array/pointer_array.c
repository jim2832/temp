#include <stdio.h>

int main(void){
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int *P;

    P = A;
    for(int i=0; i<10; i++){
        printf("P[%d]=%d, Addr=%p\n",i ,P[i], &P[i]);
    }

    printf("\n");

    for(int i=0; i<10; i++){
        printf("*(P+%d)=%d, Addr=%p\n",i ,*(P+i), P+i);
    }

    printf("\n");

    for(int i=0; i<10; i++){
        printf("%d\n", *P);
        P++;
    }

    return 0;
}