#include "fpbmat13.h"

int main(){
    // input for column
    char head; scanf(" %c", &head);
    int n; scanf("%d", &n);
    int kol[n];
    for(int i = 0; i < n; i++) scanf("%d", &kol[i]);

    // input for row
    scanf(" %c", &head);
    int m; scanf("%d", &m);
    int bar[m];
    for(int i = 0; i < m; i++) scanf("%d", &bar[i]);

    // print output
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) printf("%d\n", fpb(kol[j], bar[i]));

    return 0;
}
