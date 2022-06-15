#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sum = 0;
    double avg;
    int **student;
    int m, n;

    printf("請輸入班級數目：");
    scanf("%d", &m);
    printf("請輸入每班人數：");
    scanf("%d", &n);

    //動態配置m個班的n個人之記憶體
    student = (int**)malloc(sizeof(int*) * m);
    for(int i=0; i<m; i++){
        student[i] = (int*)malloc(sizeof(int) * n);
    }

    //分別讀入m個班，n個學生之成績
    for(int i=0; i<m; i++){
        printf("班級%d:\n", i+1);
        for(int j=0; j<n; j++){
            printf(" 學生%d:", j+1);
            scanf("%d", &student[i][j]);
        }
    }

    //計算總和
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum += student[i][j];
        }
    }

    //求平均值
    avg = (double)sum /(m*n);
    printf("全校平均為：%lf", avg);

    //釋放記憶體空間
    for(int i=0; i<m; i++){
        free(student[i]);
    }
    free(student);

    return 0;
}