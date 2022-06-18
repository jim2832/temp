#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    int a[100];
    char file_name[80];
    int n; //save the size of array

    //open the file
    scanf("%s", file_name);
    file = fopen(file_name, "r");
    if(file == NULL){
        printf("failed to open file!\n");
        return 0;
    }

    //read the file
    fscanf(file, "%d", &n);
    for(int i=0; i<n; i++){
        fscanf(file, "%d ", &a[i]);
    }

    //output the file
    printf("%d\n", n);
    fprintf(file, "%d\n", n);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
        fprintf(file, "%d ", a[i]);
    }
    printf("\n");

    //close the file
    fclose(file);
    
    return 0;
}