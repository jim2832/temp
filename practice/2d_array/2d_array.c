#include <stdio.h>
#define ROW 5
#define COLUMN 6

int main(void){
    int arr[ROW][COLUMN];
    int value = 0;
    
    //initialize the matrix
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COLUMN; j++){
            value += 1;
            arr[i][j] = value;
        }
    }

    //print out the matrix
    for(int i=0; i<ROW; i++){
        for(int j=0; j<COLUMN; j++){
            printf("%2d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}