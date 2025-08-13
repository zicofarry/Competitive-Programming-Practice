#include "kocepot.h"

// procedure for move process
void move(int& x, int& y, int n, vs langkah, vi jumlah){
    for(int i = 0; i < n; i++){
        if(langkah[i] == "horizontal") x += jumlah[i];
        else if(langkah[i] == "-horizontal") x -= jumlah[i];
        else if(langkah[i] == "vertikal") y += jumlah[i];
        else if(langkah[i] == "-vertikal") y -= jumlah[i];
        else if(langkah[i] == "miring"){
            x += jumlah[i];
            y += jumlah[i];
        }else if(langkah[i] == "-miring"){
            x -= jumlah[i];
            y -= jumlah[i];
        }
    }
    cout << x << " " << y << nl;
}

// procedure to solve the problem
void solve(){
    int m; cin >> m;
    int n[m], x[m], y[m];
    for(int i = 0; i < m; i++){
        cin >> x[i] >> y[i];
        cin >> n[i];
        vs langkah(n[i]);
        vi jumlah(n[i]);
        for(int j = 0; j < n[i]; j++) cin >> langkah[j] >> jumlah[j];
        move(x[i], y[i], n[i], langkah, jumlah);
    }
}