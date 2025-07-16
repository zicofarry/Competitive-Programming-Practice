/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-12-23
*/
#include <stdio.h>

int main(){
    int n; scanf("%d", &n); // declare and input n value

    //segmen 1
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n*5; j++) printf(" ");
        for(int j = n - 1; j >= i; j--) printf(" ");
        for(int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    //segmen 2
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) printf(" ");
        for(int j = n-1; j >= i; j--) printf(" ");
        for(int j = 1; j <= i; j++) printf("*");
        for(int j = 1; j <= n*2; j++) printf(" ");
        for(int j = 1; j <= n; j++) printf("*");
        for(int j = 1; j <= n*3; j++) printf(" ");
        for(int j = n-1; j >= i; j--) printf(" ");
        for(int j = 1; j <= i; j++) printf("*");
        for(int j = 1; j <= n; j++) printf(" ");
        for(int j = n; j >= i; j--) printf(" ");
        for(int j = 1; j <= i; j++) printf("*");
        for(int j = 1; j <= i-1; j++) printf("*");
        printf("\n");
    }

    //segmen 3
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) printf("*");
        for(int j = 1; j <= n*2; j++) printf(" ");
        for(int j = 1; j <= n*3; j++) printf("*");
        for(int j = 1; j <= n; j++) printf(" ");
        for(int j = 1; j <= n; j++) printf("*");
        for(int j = 1; j <= n*2; j++) printf(" ");
        for(int j = 1; j <= n*2+1; j++) printf("*");
        printf("\n");
    }

    //segmen 4
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) printf(" ");
        for(int j = 1; j <= i - 1; j++) printf(" ");
        for(int j = n; j>= i; j--) printf("*");
        for(int j = 1; j <= n*2; j++) printf(" ");
        for(int j = 1; j <= n; j++) printf("*");
        for(int j = 1; j <= n*3; j++) printf(" ");
        for(int j = 1; j <= i - 1; j++) printf(" ");
        for(int j = n; j>= i; j--) printf("*");
        for(int j = 1; j <= n; j++) printf(" ");
        for(int j = 1; j <= i; j++) printf(" ");
        for(int j = n; j>= i; j--) printf("*");
        for(int j = n - 2; j >= i - 1; j--) printf("*");
        printf("\n");
    }
    
    //segmen 5
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n*5; j++) printf(" ");
        for(int j = 1; j <= i - 1; j++) printf(" ");
        for(int j = n; j >= i; j--) printf("*");
        printf("\n");
    }

    return 0;
}