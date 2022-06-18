#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *output = fopen("test.txt", "w");
    for(int i=0; i<10; i++){
        fprintf(output, "%d ", i);
        // fflush(output);
    }
    fclose(output);
    
    return 0;
}