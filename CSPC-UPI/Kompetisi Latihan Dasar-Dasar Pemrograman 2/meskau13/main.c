#include "meskau13.h"

int main(){
    char pita[300];
    x arr[51];
    scanf("%299[^\n]s", &pita);

    startkata(pita);
    int j = 0;
    while(EOPkata(pita) == 0){
        strcpy(arr[j].str, getckata());
        arr[j].a = 0;
        for(int i = 0; i < strlen(getckata()); i++){
            if(getckata()[i] == 'a') arr[j].a++;
        }
        j++;
        inckata(pita);
    }
    if(getpanjangkata() > 0){
        strcpy(arr[j].str, getckata());
        arr[j].a = 0;
        for(int i = 0; i < strlen(getckata()); i++){
            if(getckata()[i] == 'a') arr[j].a++;
        }
    }
    bubble_sort(j+1, arr);
    
    for(int i = 0; i <= j; i++){
        if(arr[i].a > 0){
            if(i != j && arr[i+1].a != 0) printf("%s ", arr[i].str);
            else printf("%s\n", arr[i].str);
            
        }
    }

    return 0;
}