#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *file;
    int a[5] = {10, 20, 30, 40, 50};
    char str[80];
    int n = 5;

    //open the file
    printf("input the file name:");
    scanf("%s", &str);
    file = fopen(str, "w");
    if(file == NULL){
        printf("failed to open file!\n");
        return 0;
    }

    //read the file
    fscanf(file, "%d", &n);
    for(int i=0; i<n; i++){
        fscanf(file, "%d", &a[i]);
    }

    //output the file
    printf("%d\n", n);
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
    printf("\n");

    //close the file
    fclose(file);
    
    return 0;
}