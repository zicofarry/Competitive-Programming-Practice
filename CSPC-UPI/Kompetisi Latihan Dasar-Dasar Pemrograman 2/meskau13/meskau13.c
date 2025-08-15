#include "meskau13.h"

int EOPkata(char pita[]){
    if(pita[indeks] == '.'){
        return 1;
    }else{
        return 0;
    }
}

void startkata(char pita[]){
    indeks = 0;
    panjangkata = 0;
    while(pita[indeks] == ' '){
        indeks++;
    }
    while(pita[indeks] != ' ' && pita[indeks] != '.'){
        ckata[panjangkata] = pita[indeks];
        indeks++;
        panjangkata++;
    }
    ckata[panjangkata] = '\0';
}

void inckata(char pita[]){
    panjangkata = 0;
    while(pita[indeks] == ' '){    
        indeks++;
    }
    while(pita[indeks] != ' ' && pita[indeks] != '.'){
        ckata[panjangkata] = pita[indeks];
        indeks++;
        panjangkata++;
    }
    ckata[panjangkata] = '\0';
}

char* getckata(){
    return ckata;
}

int getpanjangkata(){
    return panjangkata;
}

void swap(x *a, x *b){
    x temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int n, x *arr){
    int switched = 1;
    while(switched == 1){
        switched = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i].a < arr[i+1].a){
                swap(&arr[i], &arr[i+1]);
                switched = 1;
            }
        }
    }
}