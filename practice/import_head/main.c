#include "score.h"
#include "score.c"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    //int score[5] = {11,22,33,44,55};

    //dynamic array
    int *score, n;
    scanf("%d", &n);
    score = (int*)malloc(sizeof(int) * n);

    //input
    printf("Please enter the scores:");
    for(int i=0; i<n; i++){
        scanf("%d", &score[i]); //score + i
    }
    
    //output
    //printArr(n, score);
    printf("Average = %.2lf\n", average(n, score));
    int MaxPos = Maxscore(n, score);
    //printf("max pos:%d, score:%d\n", MaxPos, score[MaxPos]);

    free(score);

    return 0;
}