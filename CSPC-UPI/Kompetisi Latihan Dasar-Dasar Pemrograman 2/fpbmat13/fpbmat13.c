#include "fpbmat13.h"

// mendeklarasikan fungsi fpb
int fpb(int a, int m){
    if(m==0){//jika m = 0 maka fpb nya a
        return a;
    }else{//jika tidak
        int temp = a % m;
        return fpb(m, temp);//lakukan operasi fpb (menggunakan pemanggilan rekursif)
    }
}