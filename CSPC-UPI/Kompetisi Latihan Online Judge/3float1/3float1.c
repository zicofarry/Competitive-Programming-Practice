/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-12-21
*/
#include <stdio.h>
int main(){
	int valid = 0; // declare valid, set with 0
	for(int i = 0; i < 6; i++){ // loop for until 6
		float num; scanf("%f", &num); // declare and input num value
		if(((int)(num * 10) % 10) % 3 == 0 && ((int)(num * 10) % 10) != 0) valid++; // if valid, increment valid
	}
	if(valid >= 3) printf("valid\n");
	else printf("tidak valid\n");
	return 0;
}