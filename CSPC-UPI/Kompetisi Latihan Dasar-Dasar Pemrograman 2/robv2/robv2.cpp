#include "robv2.h"

void hadapKiri(char& d, int j){
    for(int i = 0; i < j; i++){
       if(d == 'n') d = 'w';
       else if(d == 'e') d = 'n';
       else if(d == 's') d = 'e';
       else if(d == 'w') d = 's';
    }
}

void hadapKanan(char& d, int j){
    for(int i = 0; i < j; i++){
       if(d == 'n') d = 'e';
       else if(d == 'e') d = 's';
       else if(d == 's') d = 'w';
       else if(d == 'w') d = 'n';
    }
}

void move(int& x, int& y, char& d, int n){
    if(n >= 1 && n <= 4){
        int j; cin >> j;
        if(n == 1){
            if(d == 'n') y += j;
            else if(d == 'e') x += j;
            else if(d == 's') y -= j;
            else if(d == 'w') x -= j;
            if(x > 9 || y > 9) cout << "-1" << nl;
        }else if(n == 2){
            if(d == 'n') y -= j;
            else if(d == 'e') x -= j;
            else if(d == 's') y += j;
            else if(d == 'w') x += j;
            if(x > 9 || y > 9) cout << "-1" << nl;
        }else if(n == 3) hadapKiri(d, j);
        else if(n == 4) hadapKanan(d, j);
    }else if(n >= 5 && n <= 6){
        if(n == 5){
            cout << x << sp << y << nl;
        }else if(n == 6){
            char map[10][10];
            for(int i = 0; i < 10; i++){
                for(int j = 0; j < 10; j++) map[i][j] = 'x';
            }
            map[abs(y-9)][abs(x)] = 'o';
            for(int i = 0; i < 10; i++){
                for(int j = 0; j < 10; j++) cout << map[i][j];
                cout << nl;
            }
        }
    }
}

void solve(){
    int n; cin >> n;
    int x; cin >> x;
    int y; cin >> y;
    char d; cin >> d;
    int m[n];
    for(int i = 0; i < n; i++){
        cin >> m[i];
        move(x, y, d, m[i]);
    }
}