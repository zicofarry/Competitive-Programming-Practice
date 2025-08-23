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
#define pb push_back
#define pob pop_back
#define slv solve();
#define zicofarry                \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;

extern int idx; // index
extern int wlen; // panjang current word
extern char cw[151]; // current word

// deklarasi prosedur dan fungsi
int eop(string pita);
void start(string pita);
void reset();
void inc(string pita);
void dec(string pita);
char* getcw();
int getlen();
void solve();