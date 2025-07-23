/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2025-01-20
*/
#include <bits/stdc++.h>
#define DEBUG(str, var) cout << str << " = " << var << nl;
#define nl "\n"
#define sp ' '
#define dig0(n) setw(n) << setfill('0')
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
extern int idx; // deklarasi ulang variabel global index
extern char cc; // deklarasi ulang variabel global current character

// prosedur untuk memulai mesin karakter
void START(string pita);
int EOP();
void INC(string pita);
void DEC(string pita);
void ADV(string pita);
char GETCC();
int GETIdx();
void solve();