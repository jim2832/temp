#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char ans[4];
    char input[5];

    printf("Please enter the answer:\n");
    scanf(" %s", ans);

    while(1){
        printf("Please enter guess:\n");
        scanf(" %s", input);
        int A = 0, B = 0;

        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                if(input[i] == ans[j]){
                    if(i == j){
                        A++;
                    }
                    else{
                        B++;
                    }
                }
            }
        }
        printf("%dA%dB\n", A, B);

        if(A == 4){
            break;
        }
    }

    printf("You win!");

    return 0;
}