#include "tttoe13.h"

int main(){
    tiktok p[6]; // declare and input process
    for(int i = 0; i < 6; i++) scanf("%s %c %d %d", p[i].nama, &p[i].simbol, &p[i].x, &p[i].y);
    menang(p); // call procedure to solve the problem
    return 0;
}