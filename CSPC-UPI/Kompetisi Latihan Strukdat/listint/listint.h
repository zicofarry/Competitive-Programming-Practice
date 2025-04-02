/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2025-02-03
*/
#include <stdio.h>
#include <string.h>
#include <malloc.h>

//declare macro
#define slv solve();

typedef struct{
    // contents of the container
    int num;
}value;

typedef struct elmt* alamatelmt;
typedef struct elmt{
    value container;
    alamatelmt next;
} element;

typedef struct{
    element* first;
}list;

// declare procedure
void createList(list *L);
void addFirst(value temp, list *L);
void printElement(element *point);
void printList(list L);
void solve();