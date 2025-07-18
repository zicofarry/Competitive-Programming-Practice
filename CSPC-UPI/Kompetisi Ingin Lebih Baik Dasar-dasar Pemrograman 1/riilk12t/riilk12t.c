/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-12-23
*/
#include <stdio.h>
#include <math.h>

int main(){
    int dep[4], bel[4];
    
    // input and split process
    for(int i = 0; i < 4; i++){
        float in; scanf("%f", &in);
        dep[i] = (int) in;
        bel[i] = (int) (ceil(in * 100)) % 100;
    }

    // swap process
    for(int i = 0; i < 2; i++){
        int a, b; scanf("%d %d", &a, &b);
        int tmp = bel[a - 1];
        bel[a - 1] = bel[b - 1];
        bel[b - 1] = tmp;
    }

    // print output
    for(int i = 0; i < 4; i++) printf("%d.%0.2d\n", dep[i], bel[i]);

    return 0;
}