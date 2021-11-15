//
//  ROPLevel4.c
//  
//
//  Created by Billy Ellis on 20/05/2017.
//
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char leakme[] = "hello roplevel4";

void leak_address(){
    
    printf("Address of leakme is: %p\n\n",leakme);
    char leak = [];
    sprintf(leak,"%p",leakme);
    
    FILE *f = fopen("/var/mobile/leak.txt","w");
    fprintf(f,"%s",leak);
    
}

int main(){
    
    char name[16];
    
    system("clear");
    
    printf("\x1B[35m================================================\n");
    printf("Welcome to ROPLevel4 by Billy Ellis (@bellis1000)\n");
    printf("================================================\x1B[0m\n\n");
    
    printf("Leaking address...\n");
    leak_address();
    
    printf("Enter your name:\n");
    scanf("%s",name);
    printf("Welcome, %s!\n",name);
    
    return 0;
    
}
