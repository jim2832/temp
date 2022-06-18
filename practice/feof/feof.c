#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *file;
	char file_name[128];
	scanf("%s", file_name); //input file name
	file = fopen(file_name, "r"); //load the file
	char ch;

	while(1){
		fscanf(file, "%c", &ch);//use char can copy the whole file
		
		if(feof(file)){ //detect the end of file
			break;
		}

		putchar(ch);
		
	}

	fclose(file);

	return 0;
}
