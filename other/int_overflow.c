//
//  int_overflow.c
//  
//
//  Created by Billy Ellis on 13/03/2018.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int get_length(char data[]){
    unsigned int size;
    for (size = 0; data[size] != '\0'; size++);
    
    return size;
}

void buffer_the_data(char data[]){
    char dataBuf[32];
    //copy data into dataBuf[]
    strcpy(dataBuf,data);
    printf("Data is %s\n",dataBuf);
}

int main(int argc, char *argv[]){
    
    if (argc < 2){
        printf("Usage: %s <DATA>\n",argv[0]);
        exit(-1);
    }
    
    unsigned char dataLen = get_length(argv[1]);
    
    if (dataLen < 32){
        printf("Data is valid!\n");
        buffer_the_data(argv[1]);
    }else{
        printf("The data you entered is too large. Data must be less than 32 bytes.\n");
    }
    
    return 0;
}
