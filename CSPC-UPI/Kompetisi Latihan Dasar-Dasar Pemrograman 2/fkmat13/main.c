#include "fkmat13.h"

int main(){
    // input process for column
    char head; scanf(" %c", &head);
    int n; scanf("%d", &n);
    long long fakkol[n];
    for(int i = 0; i < n; i++){
        int kol; scanf("%d", &kol);
        fakkol[i] = faktorial(kol);
    }

    // input process for row
    scanf(" %c", &head);
    int m; scanf("%d", &m);
    long long fakbar[m];
    for(int i = 0; i < m; i++){
        int bar; scanf("%d", &bar);
        fakbar[i] = faktorial(bar);
    }

    // print output
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) printf("%lld\n", fakbar[i] * fakkol[j]);
    }

    return 0;
}