#include "listbla.h" // include header "listbla.h"

// procedure to create the list
void createList(list *L){
    (*L).first = -1;
    (*L).tail = -1;

    for(int i = 0; i < 51; i++){
        /*the process of initializing the contents of an array*/
        (*L).data[i].prev = -2;
        (*L).data[i].next = -2;
    }
}

// procedure to count the element
int countElement(list L){
    int result = 0;
    if(L.first != -1){
        /*list is not empty*/
        int point;

        /*initialization*/
        point = L.first;

        while(point != -1){
            /*process*/
            result = result + 1;

            /*iteration*/
            point = L.data[point].next;
        }
    }

    return result;
}

// procedure to create a new empty element
int emptyElement(list L){
    int result = -1;

    if(countElement(L) < 51){
        int find = 0;

        int i = 0;
        while((find == 0) && (i < 51)){
            if(L.data[i].next == -2){
                result = i;
                find = 1;
            }else{
                i = i + 1;
            }
        }
    }
    return result;
}

// procedure to add element to the first place
void addFirst(box temp, list *L){
    if(countElement(*L) < 51){ // if list exceeds limit
        int new = emptyElement(*L);
        (*L).data[new].container = temp;

        if((*L).first == -1){ // if list is empty
            (*L).data[new].prev = -1;
            (*L).data[new].next = -1;
            (*L).tail = new;
        }else{ // if list is not empty
            (*L).data[new].prev = -1;
            (*L).data[new].next = (*L).first;
            (*L).data[(*L).first].prev = new;
        }
        
        (*L).first = new;
    }else{
        /*process if array is full*/
        printf("can't be added anymore\n");
    }
}

// procedure to add element after element
void addAfter(int before, box temp, list *L){
    if(countElement(*L) < 51){ // if list exceeds limit
        int new = emptyElement(*L);
        (*L).data[new].container = temp;

        if((*L).data[before].next != -1){ // if element is not at the end
            (*L).data[new].prev = before;
            (*L).data[new].next = (*L).data[before].next;
            (*L).data[before].next = new;
            (*L).data[(*L).data[new].next].prev = new;
        }else{ // if element at the end of list
            (*L).data[new].prev = before;
            (*L).data[before].next = new;
            (*L).data[new].next = -1;
            (*L).tail = new;
        }
    }else{
        /*process if array is full*/
        printf("can't be added anymore\n");
    }
}

// procedure to add element to the last place
void addLast(box temp, list *L){
    if((*L).first == -1){ // if list is empty, call addFirst
        addFirst(temp, L);
    }else{ // if list is not empty 
        addAfter((*L).tail, temp, L);
    }
}

// procedure to print element
void printElement(elemen point, elemen point2){
    printf("%s %s\n", point.container.str, point2.container.str);
}

// procedure to print the list
void printList(list L){
    if(L.first != -1){ // if list its not empty
        
        /*initialization*/
        int point = L.first;
        int point2 = L.tail;
        int space = 0;
        while(point != -1 && point2 != -1){
            /*process*/
            for(int i = 0; i < space; i++) printf(" ");
            printElement(L.data[point], L.data[point2]);
            space += strlen(L.data[point].container.str);
            /*iteration*/
            point = L.data[point].next;
            point2 = L.data[point2].prev;
        }
    }else{ // if its not
        printf("empty list\n");
    }
}

void solve(){
    // declare and create list L
    list L;
    createList(&L);

    // declare and input n value
    int n; scanf("%d", &n);

    // loop until n
    for(int i = 0; i < n; i++){
        box new;
        scanf("%s", new.str); // input str value
        // add condition
        if(strcmp(new.str, "dawala") == 0) addAfter(countElement(L)/2-1, new, &L);
        else addLast(new, &L);
    }

    // print the list
    printList(L);
}