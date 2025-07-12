#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x < 2) return false;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    if(isPrime(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}