/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2025-01-20
*/
#include <bits/stdc++.h>
#define DEBUG(str, var) cout << str << " = " << var << nl;
#define nl "\n"
#define sp " "
#define vi vector<int>
#define vs vector<string>
#define sin(str)       \
    string str;        \
    cin >> str;        
#define din(n)         \
    int n;             \
    cin >> n;        
#define slv solve();
#define zicofarry                \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;

typedef struct{
    int num[4];
    int x;
}bks;

int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void sorting(string sort, int arr[4]);
void sorted(int n, vector<bks>& arr);
void solve();