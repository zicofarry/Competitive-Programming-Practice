#include<bits/stdc++.h>
using namespace std;

int LCM(int x, int y) {
    return x / __gcd(x, y) * y;
}

int main() {
    cout << LCM(12, 24) << endl;
    return 0;
}