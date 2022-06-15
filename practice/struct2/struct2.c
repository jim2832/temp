#include <stdio.h>
#include <stdlib.h>

struct Person{
        char name[80];
        int height;
        int weight;
    };


int main(void){
    struct Person P1;
    struct Person *P2;

    P2 = &P1;

    gets(P2 -> name);
    scanf("%d", P2 -> height);
    scanf("%d", P2 -> weight);

    return 0;
}