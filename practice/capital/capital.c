#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main(void){
    char str[SIZE];
    gets(str);

    for(int i=0; i<SIZE; i++){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] -= 32; //轉小寫;
        }
    }

    return 0;
}