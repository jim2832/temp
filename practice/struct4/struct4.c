#include <stdio.h>
#include <stdlib.h>
#define PEOPLE 4

struct Person{
        char name[80];
        int height;
        int weight;
    };

typedef struct Person Person;

int main(void){
    Person p[PEOPLE]; //原本是struct Person，但因為typedef可以改成這樣

    for(int i=0; i<PEOPLE; i++){
        scanf("%s", p[i].name);
        scanf("%d", &p[i].height);
        scanf("%d", &p[i].weight);
        printf("Name : %s\nHeight : %d\nWeight : %d", p[i].name, p[i].height, p[i].weight);
    }

    return 0;
}