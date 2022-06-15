#include <stdio.h>
#include <stdlib.h>

int main(void){
    int students;
    int *score;

    printf("How many students?");
    scanf("%d", &students);
    score = (int*)malloc(sizeof(int) * students); //dynamic allocate

    for(int i=0; i<students; i++){
        printf("studnet %d: ", i+1);
        scanf("%d", score+i); // &score[i]
    }
    free(score);


    return 0;
}