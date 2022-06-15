#include <stdio.h>
#define N 5

int main(void){
    int sum = 0;
    int score[N];
    double avg;
    int max;
    int max_index;

    printf("Please enter your scores:");
    for(int i=0; i<N; i++){
        scanf("%d", &score[i]);
    }

    for(int i=0; i<N; i++){
        sum += score[i];
    }

    avg = (double)sum / N;

    printf("sum score= %d\n", sum);
    printf("average score = %.2f\n", avg);

    printf("\n");

    //the following is for printing the fail students
    printf("The following students are fail:\n");
    for(int i=0; i<N; i++){
        if(score[i] < 60){
            printf("Student %d: %d\n",i+1 ,score[i]);
        }
    }
    
    printf("\n");

    //the following is for finding the highest score
    printf("The highest student and his/her score is:\n");
    for(int i=0; i<N; i++){
        if(max < score[i]){
            max = score[i];
            max_index = i;
        }
    }
    printf("Student %d: %d\n", max_index+1, max);

    return 0;
}