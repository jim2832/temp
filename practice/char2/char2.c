#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch;
    scanf(" %c", &ch);

    if(ch >= 48 && ch <= 57){
        printf("輸入的是數字\n");
    }
    else if(ch >= 97 && ch <= 122){
        printf("輸入的是小寫字母\n");
        ch -= 32;
        printf("轉換成大寫是：%c\n", ch);
    }
    else if(ch >= 65 && ch <= 90){
        printf("輸入的是大寫字母\n");
    }
    else{
        printf("輸入的是其他符號");
    }

    return 0;
}