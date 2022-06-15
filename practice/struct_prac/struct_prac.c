#include <stdio.h>
#include <stdlib.h>
#define N 3

struct Employee{
    char Name[20];
    char Phone[11];
    int ID;
};

int main(void){
    struct Employee p[N];
    int qid;

    for(int i=0; i<N; i++){
        scanf("%s", p[i].Name);
        scanf("%s", p[i].Phone);
        scanf("%d", &p[i].ID);
    }

    scanf("%d", &qid);
    int flag = 0; //紀錄是否找到的狀態

    for(int i=0; i<N; i++){
        if(qid == p[i].ID){
            puts("found");
            printf("Name= %s\n", p[i].Name);
            printf("Phone= %s\n", p[i].Phone);
            printf("ID= %d\n", p[i].ID);
            flag = 1; //改flag的值
        }
    }

    if(flag == 0){
        puts("not found");
    }
    
    return 0;
}
