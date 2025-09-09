#include "tttoe213.h"

int main(){
    tiktok p[6]; // declare and input process
    for(int i = 0; i < 6; i++) scanf("%s %c %d %d", p[i].nama, &p[i].simbol, &p[i].x, &p[i].y);
    kalah(p); // call procedure to solve the program
    return 0;
}