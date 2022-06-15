#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    strcpy(str1, str2);

    puts(str1); //str2
    puts(str2); //str2

    return 0;
}