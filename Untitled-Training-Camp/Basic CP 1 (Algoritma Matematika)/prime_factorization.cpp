#include <bits/stdc++.h>
using namespace std;

void primeFactorization(int x){
    for(int i = 2; i * i < x; i++){
        while(x % i == 0){
            cout << i << " ";
            x /= i;
        }
    }
    if(x) cout << endl;
    else cout << x << endl;
}

int main(){
    int n; cin >> n;
    primeFactorization(n);
    return 0;
}