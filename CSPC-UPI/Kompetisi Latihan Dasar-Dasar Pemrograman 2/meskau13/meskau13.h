/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2025-01-18
*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char str[51];
    int a;
}x;

int indeks;
int panjangkata;
char ckata[50];

// deklarasi prosedur dan fungsi
int EOPkata(char pita[]);
void startkata(char pita[]);
void inckata(char pita[]);
char* getckata();
int getpanjangkata();;
void swap(x *a, x *b);
void bubble_sort(int n, x *arr);