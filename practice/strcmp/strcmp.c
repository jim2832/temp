#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    if(strcmp(str1, str2) == 0){
        printf("兩字串是相等的");
    }
    else{
        printf("兩字串是不相等的");
    }

    return 0;
}