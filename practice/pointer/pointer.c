#include <stdio.h>

int main(void){
    int i, k, *ptr;

    printf("Name\tAddress\tValue\n");
    printf(" i\t%p\t%d\n", &i, i);
    printf(" k\t%p\t%d\n", &k, k);
    printf("ptr\t%p\t%p\n", &ptr, ptr);
    printf("*ptr\t%p\t%p\n", &*ptr, *ptr);

    return 0;
}