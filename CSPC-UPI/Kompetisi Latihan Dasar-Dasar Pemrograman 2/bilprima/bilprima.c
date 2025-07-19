#include "bilprima.h"

// fungsi untuk mengecek prima atau bukan
int prima(int n){
    for(int i = 2; i <= sqrt(n); i++){// looping hingga akar dari bilangan
        // jika bisa membagi maka dia bilangan komposit
        if(n % i == 0) return 0;
    }
    return 1;//jika tidak, maka dia bilangan prima
}

// fungsi untuk mengecek prima bolak balik atau bukan
int priboba(int n){
    if(n > 9 && n < 100){
        int m = ((n%10) * 10) + n/10;
        if(prima(n) && prima(m) && n != m) return 1;
    }else if(n > 99 && n < 1000){
        int m = ((n%10) * 100) + ((n%100)/10) * 10 + n/100;
        if(prima(n) && prima(m) && n != m) return 1;
    }
    return 0;
}

// fungsi untuk mencari prima bolak balik pertama setelah angka n
int cari(int n){
    // kondisi untuk mendapatkan start valuenya
    int i;
    if(n > 12) i = n;
    else i = 12;

    // loop hingga batas akhir
    int stop = 0;
    while(i < 1000 && !stop){
        if(priboba(i)) stop = 1;
        else i++;
    }

    // return nilai prima bolak baliknya
    return i; 
}