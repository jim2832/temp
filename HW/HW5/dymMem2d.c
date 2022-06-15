#include <stdio.h>
#include <stdlib.h>

int main(void){
    int **score;
    int sum;
    int total = 0;
    int class, student;
    double avg;

    //input
    printf("請輸入班級數目：");
    scanf("%d", &class);
    printf("請輸入每班人數：");
    scanf("%d", &student);

    //動態記憶體配置
    score = (int**)malloc(sizeof(int*) * class);
    for(int i=0; i<class; i++){
        score[i] = (int*)malloc(sizeof(int) * student);
    }

    //讀入各個學生成績
    for(int i=0; i<class; i++){
        sum = 0;
        printf("班級%d:\n", i+1);
        for(int j=0; j<student; j++){
            printf(" 學生%d: ", j+1);
            scanf("%d", &score[i][j]);
            sum += score[i][j];
            total += score[i][j];
        }
        avg = (double)sum / student;
        printf("班平均為%.6lf\n", avg);
    }

    //計算全校平均
    avg = (double)total / (class * student);
    printf("全校平均為：%.6lf\n", avg);

    //回收記憶體
    for(int i=0; i<class; i++){
        free(score[i]);
    }
    free(score);
    
    return 0;
}