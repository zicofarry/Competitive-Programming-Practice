/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-12-21
*/
#include <stdio.h>

int main(){
    // input process
    int n; scanf("%d", &n); // declare and input n value
    char in[n];
    for(int i = 0; i < n; i++) scanf(" %c", &in[i]); // loop input in
    int begin, end; scanf("%d %d", &begin, &end); // declare and input, begin and end
    int m; scanf("%d", &m); // declare and input m value

    // counting process
    int sama[m];
    for(int i = 0; i < m; i++){
        char banding; scanf(" %c", &banding);
        sama[i] = 0;
        for(int j = begin; j <= end; j++) if(banding == in[j]) sama[i]++;
    }

    // print output
    for(int i = 0; i < m; i++){
        if(i != m-1) printf("%d ", sama[i]);
        else printf("%d\n", sama[i]);
    }
    
    return 0;
}