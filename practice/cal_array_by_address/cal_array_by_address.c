#include <stdio.h>
#include <stdlib.h>

void printArr(int n, int* P);
double average(int n, int* P);
int Maxscore(int n, int* P);

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