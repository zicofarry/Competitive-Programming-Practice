/*
problem setter	: Asisten Dosen Struktur Data
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2025-02-08
*/
#include <stdio.h> // include library stdio.h
#include <string.h> // include library string.h
#include <malloc.h> // include library malloc.h
#define slv solve();

// declare typedef struct
typedef struct{
    // contents of the container 
    int num;
}box;

typedef struct elmt *alamatelmt;
typedef struct elmt{
    box container;
    alamatelmt next;
}element;

typedef struct {
    element* top;
}stack;

// declare procedure and function
void createEmpty(stack *S);
int isEmpty(stack S);
int countElement(stack S);
void push(box tmp, stack *S);
void printElement(element* point, int i);
void printStack(stack S);
void solve();