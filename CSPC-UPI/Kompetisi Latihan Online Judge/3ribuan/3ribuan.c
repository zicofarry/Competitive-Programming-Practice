/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-12-21
*/
#include <stdio.h>
int main(){
    int valid = 0; // declare valid, set with 0
    for(int i = 0; i < 6; i++){ // loop for until 6
        int in; scanf("%d", &in); // declare and input in value
        if(in >= 1000) valid++; // if valid, increment valid
    }
    if(valid >= 3) printf("ribuan 3 atau lebih\n");
    else printf("tidak valid\n");
    return 0;
}