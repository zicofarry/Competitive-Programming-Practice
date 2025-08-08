#include "jammony.h"

void solve(){
    din(n);
    vi m(n);
    for(int &i : m) cin >> i;
    sort(m.begin(), m.end());
    x wak;
    for(int i : m){
        wak.jam = (i / 3600) % 100;
        wak.men = (i % 3600) / 60;
        wak.det = i % 60;
        cout << dig0(2) << wak.jam << ':'
             << dig0(2) << wak.men << ':'
             << dig0(2) << wak.det << nl;
    }
}