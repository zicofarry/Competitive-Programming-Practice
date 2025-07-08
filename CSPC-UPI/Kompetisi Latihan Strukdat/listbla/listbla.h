/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2025-02-08
*/
#include <stdio.h>
#include <string.h>
#define slv solve();

// declare typedef struct
typedef struct{
    // contents of the container 
    char str[101];
}box;

typedef struct{
    box container;
    int prev;
    int next;
}elemen;

typedef struct{
    int first;
    int tail;
    elemen data[51];
}list;

// declare procedure and function
void createList(list *L);
int countElement(list L);
int emptyElement(list L);
void addFirst(box temp, list *L);
void addAfter(int before, box temp, list *L);
void addLast(box temp, list *L);
void printElement(elemen point, elemen point2);
void printList(list L);
void solve();