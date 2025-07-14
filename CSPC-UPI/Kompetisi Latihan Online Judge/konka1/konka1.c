/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-09-19
*/
#include <stdio.h>

int main(){
    char input[6]; // declare array of char for the input
    // loop for input 6 char
    for(int i = 0; i < 6; i++) scanf(" %c", &input[i]);
    
    int i = 0; // declare i, start from 0
    int valid = 1; // declare valid, set with true or 1
    while(i < 6 && valid){ // loop while i less than 6 and valid is true
        if(!((input[i] >= 'a' && input[i] <= 'z') && (input[i+1] >= '0' &&
            input[i+1] <= '9')) && !((input[i] >= '0' && input[i] <= '9') &&
            (input[i+1] >= 'a' && input[i+1] <= 'z'))){ // if its doesnt valid
                valid = 0; // update valid with false or 0
            }
        i += 2; // increment
    }
    
    // print output
    if(valid) printf("kombinasi valid\n");
    else printf("kombinasi tidak valid\n");
	return 0;
}