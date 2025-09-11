#include "tttoe213.h"

void kalah(tiktok p[6]){
    tiktok p1[3], p2[3];
    int j1 = 0, j2 = 0;
    
    // counting process 
    for(int i = 0; i < 6; i++){
        if(strcmp(p[i].nama, "P1") == 0) p1[j1++] = p[i];
        else if(strcmp(p[i].nama, "P2") == 0) p2[j2++] = p[i];   
    }

    // condition if P1 loses
    if(!((p1[0].x == p1[1].x && p1[1].x == p1[2].x) ||
        (p1[0].y == p1[1].y && p1[1].y == p1[2].y) ||
        (p1[0].x == 0 && p1[0].y == 0 && p1[1].x == 1 && p1[1].y == 1 && p1[2].x == 2 && p1[2].y == 2) ||
        (p1[0].x == 0 && p1[0].y == 2 && p1[1].x == 1 && p1[1].y == 1 && p1[2].x == 2 && p1[2].y == 0))){
            printf("P1\n");
    }
    
    // condition if P2 loses
    if(!((p2[0].x == p2[1].x && p2[1].x == p2[2].x) ||
        (p2[0].y == p2[1].y && p2[1].y == p2[2].y) ||
        (p2[0].x == 0 && p2[0].y == 0 && p2[1].x == 1 && p2[1].y == 1 && p2[2].x == 2 && p2[2].y == 2) ||
        (p2[0].x == 0 && p2[0].y == 2 && p2[1].x == 1 && p2[1].y == 1 && p2[2].x == 2 && p2[2].y == 0))){
            printf("P2\n");
    }
}