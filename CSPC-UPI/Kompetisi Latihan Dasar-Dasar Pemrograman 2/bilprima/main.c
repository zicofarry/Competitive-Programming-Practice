#include "bilprima.h"

int main(){
    int n; scanf("%d", &n); // deklarasi dan input nilai n
    for(int i = 0; i < n; i++){ // loop hingga n
        int num; scanf("%d", &num); // deklarasi dan input nilai num
        num = cari(num); // update num dengan angka prima bolak balik pertama setelahnya
        if(num < 1000) printf("%d\n", num); // print num jika ditemukan
        else printf("0\n"); // print 0 jika tidak ditemukan
    }
    return 0;
}