#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
bool isPrime[MAXN + 5];

int main(){ // sieve of Eratosthenes, O(N log N)
    int n; cin >> n;
    memset(isPrime, true, sizeof isPrime);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= n; i++){
        if(!isPrime[i]) continue;
        for(int j = i * i; j <= n; j += i){
            isPrime[j] = false;
        }
    }
    int cnt = 0;
    for(int i = 0; i <= n; i++){
        if(isPrime[i]) cnt++;
    }
    cout << cnt << endl;

    return 0;
}