#include "mainflo.h" // include header "mainflo.h"

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

// procedure to add element after element
void addAfter(element* prev, value temp, list *L){
    element* new;
    new = (element*) malloc(sizeof(element));
    new->container = temp;
    // if element at the end of list (prev next null)
    if(prev->next == NULL){
        new->next = NULL;
    }
    // if element is not at the end
    else{
        new->next = prev->next;
    }
    prev->next = new;
    new = NULL;  
}

// procedure to print the list
void printElement(element *point){
    printf("%.2f\n", point->container.num);
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
        value x; // declare value x
        scanf("%f", &x.num); // scan float x.num
        x.afterComma = ((int) (x.num * 100) % 100); // get number after comma
        
        element* before = NULL; // declare before element, start from NULL
        element* point = L.first; // declare pointer
        int mark = 0; // declare mark
        while(point != NULL && !mark){ // loop while its not NULL and mark is 0
            if(x.afterComma < point->container.afterComma){ // if x.afterComma is smaller than afterComma from point now
                mark = 1; // update value mark with 1, so loop while is stop
            }else{ // if its not
                before = point; // update before value with point now
                point = point->next; // update point with point next
            }
        }
        if(before == NULL){ // if before is NULL
            addFirst(x, &L); // addFirst x to the list
        }else{ // if its not
            addAfter(before, x, &L); // addLast x to the list
        }
    }
    printList(L); // print list
}
