#include <stdio.h>
#include <stdlib.h>

int main(void){
    char ch1;
    char ch2;

    /*
    ch1 = getchar();
    ch2 = getchar();

    scanf(" %c", &ch1);
    scanf(" %c", &ch2);
    */

    /*
    putchar(ch1);
    putchar(ch2);
    putchar(65); //print "A"
    putchar(165 -100); //print "A"
    putchar(65+32); //print "a"
    */

    for(int i=0; i<128; i++){
        printf("%3d: %c\n", i, i);
    }

    return 0;
}