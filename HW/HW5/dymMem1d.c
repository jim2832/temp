#include <stdio.h>
#include <stdlib.h>

int main(void){
    int students;
    int *score;
    int sum = 0;
    double avg;

    printf("How many students?");
    scanf("%d", &students);
    score = (int*)malloc(sizeof(int) * students); //dynamic allocate

    for(int i=0; i<students; i++){
        printf("studnet %d=", i);
        scanf("%d", score+i); // &score[i]
        sum += *(score + i);
    }
 
    avg = (double)sum / students;
    printf("Avg=%.6f", avg);

    free(score);

    return 0;
}