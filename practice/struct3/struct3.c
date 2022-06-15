#include <stdio.h>
#include <stdlib.h>

struct Pokemon{
    char name[80];
    int LV;
    int HP;
};

int main(void){
    struct Pokemon P1;
    struct Pokemon *P2;

    scanf("%s", P1.name);
    scanf("%d", &P1.LV);
    scanf("%d", &P1.HP);
    printf("Name : %s\nLV : %d\nHP : %d", P1.name, P1.LV, P1.HP);

    P2 = &P1;
    printf("Name : %s\nLV : %d\nHP : %d", P2->name, P2->LV, P2->HP);

    return 0;
}