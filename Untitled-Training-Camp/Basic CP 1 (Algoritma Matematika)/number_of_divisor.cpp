#include <bits/stdc++.h>
using namespace std;

int NoD(int x) {
    int cnt = 0;
    for (int i = 1; i * i <= x; i++) {
        if (i * i == x) cnt++;
        else if (x % i == 0) cnt += 2;
    }
    return cnt;
}

int main(){
    int n; cin >> n;
    cout << NoD(n) << endl;
    return 0;
}