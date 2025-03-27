#include "liststr.h" // include header "liststr.h"

// procedure to create the list
void createList(list *L){
    (*L).first = NULL;    
}

// procedure to add element to the first place
void addFirst(value temp, list *L){
    element* new;
    new = (element*) malloc(sizeof(element));
    new->container = temp;

    // if list is empty    
    if((*L).first == NULL){
        new->next = NULL;
    // if list is not empty
    }else{
        new->next = (*L).first;
    }
    (*L).first = new;
    new = NULL;
}

// procedure to print the list
void printElement(element *point){
    printf("%s\n", point->container.str);
}

// procedure to print the list
void printList(list L){
    if(L.first != NULL){
        /*if list is not empty*/
        /*initialization*/
        element* point = L.first;
        int i = 1;
        while(point != NULL){
            /*process*/    
            printElement(point);

            /*iteration*/
            point = point->next;
            i++;
        }
    }else{
        /*process is list if empty*/
        printf("empty list\n");
    }
}

// procedure to solve the problem
void solve(){
    list L; // declare list L
    createList(&L); // create list L
    int n; // declare the number of elements in the list
    scanf("%d", &n);
    for(int i = 0; i < n; i++){ // loop as many as n
        value x; // declare string x
        scanf("%s", x.str); // scan string x
        addFirst(x, &L); // addFirst string x to the list
    }
    printList(L); // print list
}