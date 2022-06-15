#include "score.h"
#include <stdio.h>
#include <stdlib.h>

void printArr(int n, int* P){
    for(int i=0; i<n; i++){
        printf("%d ", P[i]);
    }
    printf("\n");
}

double average(int n, int* P){
    int sum = 0;
    double avg;

    for(int i=0; i<n; i++){
        sum += P[i];
    }
    avg = (double)sum / n;

    return avg;
}

int Maxscore(int n, int* P){
    int max;
    int max_index;
    for(int i=0; i<n; i++){
        if(max < P[i]){
            max = P[i];
            max_index = i;
        }
    }

    return max_index;
}