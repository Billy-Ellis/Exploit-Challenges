#import <stdio.h>
#import <string.h>
#import <unistd.h>
#import <stdlib.h>

int internal_mode = 0;


void func(){

	printf("Hello world! Welcome to a function - an function that does absolutely nothing!\n");

}

void func_internal(){

	printf("\x1b[33mWelcome to a more interesting function with developer-only functionality ;P\x1b[0m\nWhat would you like to do?\n[1] Touch a file\n[2] Spawn a shell\n[3] Quit function\n");
    
    char input[1];
    scanf("%s",input);
    
    if (strcmp(input,"1") == 0){
        system("touch /created_by_roplevel3");
    }else if(strcmp(input,"2") == 0){
        system("/bin/sh");
    }else if(strcmp(input,"3") == 0){
        
    }else{
        printf("Invalid option");
    }

}

void validate(char func_id[]){
    
    if (strcmp(func_id,"1") == 0){
            func();
    }else if(strcmp(func_id,"2") == 0){
        if (internal_mode == 0){
            printf("You do not have permission to launch this function.\n");
        }else{
            func_internal();
        }
    }else if(strcmp(func_id,"3") == 0){
        exit(0);
    }else{
        printf("Invalid choice.\n");
    }
    
}


void write_anywhere(){

	__asm__("str r0, [r1]");
}

void gadget(){

	__asm__("pop {r0,r1,pc}");
}

int main(){
    
    int a = 1;

    printf("Welcome to ROPLevel3 by @bellis1000\n\n");
    
    while (a == 1){
    
    printf("Select an option:\n[1] Function\n[2] Function (internal)\n[3] Exit\n");

    char input[8];
    scanf("%s",input);

    validate(input);
        
    }
    
	return 0;
}
