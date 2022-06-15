#include <stdio.h>
#include <stdlib.h>

struct Person{
        char name[80];
        int height;
        int weight;
    };


int main(void){
    struct Person P1;
    struct Person P2;
    
    scanf("%s", P1.name);
    scanf("%d", &P1.height);
    scanf("%d", &P1.weight);
    printf("Name : %s\nHeight : %d\nWeight : %d", P1.name, P1.height, P1.weight);

    scanf("%s", P2.name);
    scanf("%d", &P2.height);
    scanf("%d", &P2.weight);
    printf("Name : %s\nHeight : %d\nWeight : %d", P2.name, P2.height, P2.weight);

    return 0;
}