#include "cacagj13.h"

void solve(){
    din(n);
    int min[n], max[n];
    for(int i = 0; i < n; i++){
        pecahan arr[2];
        float hasil[2];
        cin >> arr[0].pembilang >> arr[0].penyebut;
        cin >> arr[1].pembilang >> arr[1].penyebut;
        hasil[0] = arr[0].pembilang / arr[0].penyebut;
        hasil[1] = arr[1].pembilang / arr[1].penyebut;
        if(hasil[0] < hasil[1]){
            min[i] = hasil[0];
            max[i] = hasil[1];
            cout << arr[0].pembilang << sp << arr[0].penyebut << sp;
            cout << arr[1].pembilang << sp << arr[1].penyebut << nl;
        }else{
            min[i] = hasil[1];
            max[i] = hasil[0];
            cout << arr[1].pembilang << sp << arr[1].penyebut << sp;
            cout << arr[0].pembilang << sp << arr[0].penyebut << nl;
        }
    }
    din(x);
    
    int stop = 0;
    int i = 0;
    while(i < n && !stop){
        if(max[i] == x && max[i] % min[i] == 0) stop = 1;
        else i++;
    }
    if(stop) cout << "valid\n";
    else cout << "tidak valid\n";
}