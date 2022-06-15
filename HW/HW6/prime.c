#include <stdio.h>
#include <stdlib.h>
#include "prime.h"

int IsPrime(int num){
    int count = 0;
    for(int i=1; i<=num; i++){ //跳過0避免divide by zero
        if(num % i == 0){
            count++;
        }
    }
    if(count == 2){
        return 1;
    }
    else{
        return 0;
    }
}