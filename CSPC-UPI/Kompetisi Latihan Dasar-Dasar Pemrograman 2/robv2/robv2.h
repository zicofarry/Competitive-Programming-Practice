/*
problem setter	: Asisten
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2025-01-20
*/
#include <bits/stdc++.h>
#define nl "\n"
#define sp ' '
#define slv solve();
#define zicofarry                \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;

// declare procedure and function
void hadapKiri(char& d, int j);
void hadapKanan(char& d, int j);
void move(int& x, int& y, char& d, int n);
void solve();