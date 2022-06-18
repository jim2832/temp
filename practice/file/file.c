#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *in, *out;
    char str[80];

    in = fopen("input.txt", "r"); //open input.txt
    if(in == NULL){
        printf("failed to open file!\n");
        return 0;
    }
    fscanf(in, "%s", str); // read
    fclose(in); //close input.txt
    puts(str); //print out

    out = fopen("output.txt", "w"); //open output.txt
    fprintf(out, "text = %s\n", str); //write
    fprintf(out, "The number is %d\n", 10);
    fclose(out); //close output.txt
    
    return 0;
}