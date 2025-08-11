#include "kihajar.h"

int prima(int n){
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return 0;
    return 1;
}

int cariPrima(int n){
    int i = 2; int j = 0;
    while(true){
        if(prima(i)){
            j++;
            if(j == n) return i;
        }
        i++;
    }
}

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int m = cariPrima(i);
        cout << i << ' ' << i*m << nl;
    }
}