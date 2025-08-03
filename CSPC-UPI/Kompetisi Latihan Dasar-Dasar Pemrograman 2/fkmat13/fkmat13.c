#include "fkmat13.h"

//fungsi rekursif untuk menghitung faktorial
int faktorial(int n){
    //base case: n! = 1 jika n <= 1
    if(n <= 1) return 1;
    //recursion case: n! n * (n-1)!
    return n * faktorial(n-1);
}