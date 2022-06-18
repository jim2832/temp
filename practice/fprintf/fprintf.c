#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    int a[5] = {10, 20, 30, 40, 50};
    char file_name[80];
    int n = 5;

    //open the file
    printf("input the file name:");
    scanf("%s", file_name);
    file = fopen(file_name, "w");
    if(file == NULL){
        printf("failed to open file!\n");
        return 0;
    }

    //write the file
    fprintf(file, "%d\n", n);
    for(int i=0; i<n; i++){
        fprintf(file, "%d ", a[i]);
    }

    //close the file
    fclose(file);
    
    return 0;
}