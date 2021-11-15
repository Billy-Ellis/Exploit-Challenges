#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char string[] = "date";

void change(){
	
    strcpy(string,"ls");
	printf("string changed.\n");

}

void secret(){

    printf("executing string...\n");
	
	system(string);
}

int main(){

	printf("Welcome to ROPLevel1 for ARM! Created by Billy Ellis (@bellis1000)\n");

	char buff[12];
	gets(buff);

	return 0;
}