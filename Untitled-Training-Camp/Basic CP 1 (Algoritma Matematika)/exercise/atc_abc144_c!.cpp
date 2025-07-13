#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long ans = N - 1;

    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            long long j = N / i;
            long long moves = (i - 1) + (j - 1);
            ans = min(ans, moves);
        }
    }

    cout << ans << endl;
    return 0;
}
