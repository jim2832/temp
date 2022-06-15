#include <stdio.h>
#define CLASS 2
#define STUDENT 3

int main(void){
    int arr[CLASS][STUDENT];
    int sum;
    double avg;
    int total = 0;

    //input
    for(int i=0; i<CLASS; i++){
        for(int j=0; j<STUDENT; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    //calculate sum and average of all student in the class
    for(int i=0; i<CLASS; i++){
        sum = 0;
        printf("class %d\n",i+1);
        for(int j=0; j<STUDENT; j++){
            printf(" %d: %d\n", j+1, arr[i][j]);
            sum += arr[i][j];
        }
        avg = (double)sum /STUDENT;
        printf(" sum: %d\n", sum);
        printf(" avg: %.2f\n", avg);
    }

    //calculate total score and total average
    for(int i=0; i<CLASS; i++){
        for(int j=0; j<STUDENT; j++){
            total += arr[i][j];
        }
    }
    avg = (double)total / (CLASS*STUDENT);
    printf("total: %d ", total);
    printf("avg: %.2f",avg);

    return 0;
}