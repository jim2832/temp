#include <stdio.h>
#define STUDENT 5
#define SUBJECT 3

int main(void){
    int score[STUDENT][SUBJECT] = {76,73,85,88,84,76,92,82,92,82,91,85,72,74,73};
    int sum;
    double avg;
    int total = 0;
    double max_avg = 0;
    int max_index;

    //calculate the scores, sums and averages of resspective students
    for(int i=0; i<STUDENT; i++){
        printf("student %d\n", i+1);
        sum = 0;
        for(int j=0; j<SUBJECT; j++){
            printf(" %d: %d\n", j+1, score[i][j]);
            sum += score[i][j];
            total += score[i][j]; //calculate total score
        }
        avg = (double)sum / SUBJECT;
        if(max_avg < avg){
            max_avg = avg;
            max_index = i;
        }
        printf(" sum: %d\n", sum);
        printf(" avg: %.2f\n", avg);
    }

    //print out total score and total average
    avg = (double)total / (STUDENT*SUBJECT);
    printf("total: %d, avg: %.2f\n", total, avg);

    //print out the highest average score and its index
    printf("highest avg: student %d: %.2f\n", max_index+1, max_avg);

    return 0;
}