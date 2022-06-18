#include <stdio.h>

int main(void){
	FILE *file;
	file = fopen("abc.txt", "r");
	char str[128];
	char ch;

	while(1){
		fscanf(file, "%c", &ch);
		putchar(ch);
		if(feof(file)){
			break;
		}
	}

	fclose(file);

	return 0;
}
