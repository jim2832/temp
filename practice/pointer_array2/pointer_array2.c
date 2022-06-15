#include <stdio.h>

int main(void){
    int A[5];
    int *P;
    int max;

    P = A;
    for(int i=0; i<5; i++){
        scanf("%d", &*(P+i));
    }

    for(int i=0; i<5; i++){
        if(max < *(P+i)){
            max = *(P+i);
        }
    }

    printf("The maximal value is %d", max);

    return 0;
}