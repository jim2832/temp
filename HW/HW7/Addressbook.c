#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct Data{
    char name[80];
    char phone[11];
    char email[80];
};

int main(void){
    struct Data person[MAX];
    FILE *read;
    FILE *write;
    char input;
    char file_name[100];
    int number = 0; //count the total number

    while(1){
        if(number > MAX){
            printf("Exceed the maximum number");
            return 0;
        }

        puts("i: 插入");
        puts("l: 列出");
        puts("s: 存檔");
        puts("o: 讀檔");
        puts("q: 結束");

        scanf("%c", &input);
        
        switch(input){

        // case i
        case 'i':
            number += 1;
            printf("姓名: ");
            scanf("%s", person[number].name);
            printf("電話: ");
            scanf("%s", person[number].phone);
            printf("Email: ");
            scanf("%s", person[number].email);
            printf("插入完成！\n");
            break;

        // case l
        case 'l':
        for(int i=1; i<=number; i++){
            printf("No.%d\n", i);
            printf("姓名: %s\n", person[i].name);
            printf("電話: %s\n", person[i].phone);
            printf("Email: %s\n", person[i].email);
            puts("=================");
        }
            break;

        // case s
        case 's':
            printf("輸入檔名(.txt):");
            scanf("%s", file_name);

            write = fopen(file_name, "w");
            if(write == NULL){
                printf("failed to open file!\n");
                return 0;
            }

            fprintf(write, "%d\n", number);
            for(int i=1; i<=number; i++){
                fprintf(write, "%s\t%s\t%s\n", person[i].name, person[i].phone, person[i].email);
            }
            fclose(write);
            puts("存檔完成！");
            break;

        // case o
        case 'o':
            printf("輸入檔名(.txt):");
            scanf("%s", file_name);

            read = fopen(file_name, "r");
            if(read == NULL){
                printf("failed to open file!\n");
                return 0;
            }

            fscanf(read, "%d\n", &number);
            for(int i=1; i<=number; i++){
                fscanf(read, "%s\t%s\t%s\n", person[i].name, person[i].phone, person[i].email);
            }
            fclose(read);
            puts("讀檔完成！");
            break;

        // case q
        case 'q':
            return 0;
            break;

        default:
            printf("Please enter valid input\n");
            break;
        }
        puts("請按Enter鍵繼續...");
        getchar();
        fgetc(stdin);
        system("clear");
    }

    return 0;
}