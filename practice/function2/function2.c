#include <stdio.h>
#include <stdlib.h>

int sum(n){
    int sum =0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;

}

int main(){
    printf("The sum is %d", sum(10));
    return 0;
}