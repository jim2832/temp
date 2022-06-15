#include <stdio.h>
#include <stdlib.h>
#define STUDENT 5
 
int main(void) {
    int score[STUDENT];
    
    printf("Please enter your scores:");

    for(int i=0; i<STUDENT; i++){
        scanf("%d", &score[i]);
        printf("The score of student%d is: %d\n", i+1, score[i]);
    }

    return 0;
}