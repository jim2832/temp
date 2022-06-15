#include <stdio.h>
#include <stdlib.h>
#include "prime.c"
#include "prime.h"

int main(void){
    int n;
    printf("Please enter a number:");
    scanf("%d", &n);
    if(IsPrime(n) == 1){
        printf("%d is a prime number.\n", n);
    }
    else{
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}