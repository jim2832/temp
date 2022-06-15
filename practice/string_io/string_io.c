#include <stdio.h>
#include <stdlib.h>

int main(void){
    char str1[100];
    char str2[100];

    puts("字串可以直接用puts來輸出"); //會自動換行

    //gets表輸入、puts表輸出
    gets(str1);
    gets(str2);

    puts(str1);
    puts(str2);

    return 0;
}