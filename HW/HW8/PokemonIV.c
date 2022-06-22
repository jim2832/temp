#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pokemon{
    char Name[100];
    int Lv;
    int Hp;
};

void InputData(struct Pokemon *); //call by address
void ShowInfo(struct Pokemon);

int main(void){
    struct Pokemon p1, p2;

    InputData(&p1);
    InputData(&p2);

    ShowInfo(p1);
    puts("");
    ShowInfo(p2);

    return 0;
}

void InputData(struct Pokemon *p){
    scanf("%s", p -> Name);
    scanf("%d", &(*p).Lv);
    scanf("%d", &(*p).Hp);
}

void ShowInfo(struct Pokemon p){
    printf("Name: %s\n", p.Name);
    printf("Lv: %d\n", p.Lv);
    printf("HP: %d\n", p.Hp);
}