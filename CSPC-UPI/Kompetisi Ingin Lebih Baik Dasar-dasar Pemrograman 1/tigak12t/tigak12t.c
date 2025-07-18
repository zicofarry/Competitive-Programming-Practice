/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-12-21
*/
#include <stdio.h>
#include <math.h>

typedef struct{
    int a, b, c;
    int t, alas, miring;
    int luas;
}x;

int main(){
    x tri1, tri2;
    int jenis;
    int selisih;
    scanf("%d %d %d", &tri1.a, &tri1.b, &tri1.c);
    scanf("%d %d %d", &tri2.a, &tri2.b, &tri2.c);

    if((tri1.a == tri1.b && tri1.b == tri1.c) &&
        (tri2.a == tri2.b && tri2.b == tri2.c)){
        jenis = 1;
    }else if((tri1.a == tri1.b || tri1.b == tri1.c || tri1.c == tri1.a) &&
        (tri2.a == tri2.b || tri2.b == tri2.c || tri2.c == tri2.a)){
        jenis = 2;
    }else if(((tri1.a * tri1.a == tri1.b * tri1.b + tri1.c * tri1.c) ||
            (tri1.b * tri1.b == tri1.a * tri1.a + tri1.c * tri1.c) ||
            (tri1.c * tri1.c == tri1.b * tri1.b + tri1.a * tri1.a)) &&
            ((tri2.a * tri2.a == tri2.b * tri2.b + tri2.c * tri2.c) ||
            (tri2.b * tri2.b == tri2.a * tri2.a + tri2.c * tri2.c) ||
            (tri2.c * tri2.c == tri2.b * tri2.b + tri2.a * tri2.a))){
        jenis = 3;
    }else{
        jenis = 0;
    }

    switch(jenis){
        case 0 : {
            printf("tidak sama\n");
            break;
        }

        case 1 : {
            printf("segitiga sama sisi\n");
            tri1.t = sqrt((tri1.b * tri1.b) - (tri1.a/2 * tri1.a/2));
            tri2.t = sqrt((tri2.b * tri2.b) - (tri2.a/2 * tri2.a/2));

            tri1.luas = (tri1.a * tri1.t) / 2;
            tri2.luas = (tri2.a * tri2.t) / 2;

            if(tri1.luas > tri2.luas){
                selisih = tri1.luas - tri2.luas;
                printf("segitiga pertama\n");
                printf("selisih %d\n", selisih);
            }else{
                selisih = tri2.luas - tri1.luas;
                printf("segitiga kedua\n");
                printf("selisih %d\n", selisih);
            }
            break;
        }
        
        case 2 : {
            printf("segitiga sama kaki\n");
            if(tri1.a == tri1.b){
                tri1.alas = tri1.c;
                tri1.miring = tri1.a;
            }else if(tri1.b == tri1.c){
                tri1.alas = tri1.a;
                tri1.miring = tri1.b;
            }else if(tri1.a == tri1.c){
                tri1.alas = tri1.b;
                tri1.miring = tri1.c;
            }
            
            if(tri2.a == tri2.b){
                tri2.alas = tri2.c;
                tri2.miring = tri2.a;
            }else if(tri2.b == tri2.c){
                tri2.alas = tri2.a;
                tri2.miring = tri2.b;
            }else if(tri2.a == tri2.c){
                tri2.alas = tri2.b;
                tri2.miring = tri2.c;
            }

            tri1.t = sqrt((tri1.miring * tri1.miring) - (tri1.alas/2 * tri1.alas/2));
            tri2.t = sqrt((tri2.miring * tri2.miring) - (tri2.alas/2 * tri2.alas/2));

            tri1.luas = (tri1.alas * tri1.t) / 2;
            tri2.luas = (tri2.alas * tri2.t) / 2;

            if(tri1.luas > tri2.luas){
                selisih = tri1.luas - tri2.luas;
                printf("segitiga pertama\n");
                printf("selisih %d\n", selisih);
            }else{
                selisih = tri2.luas - tri1.luas;
                printf("segitiga kedua\n");
                printf("selisih %d\n", selisih);
            }
            break;
        }
        
        case 3 : {
            printf("segitiga siku-siku\n");
            tri1.luas = (tri1.a * tri1.b) / 2;
            tri2.luas = (tri2.a * tri2.b) / 2;
            if(tri1.luas > tri2.luas){
                selisih = tri1.luas - tri2.luas;
                printf("segitiga pertama\n");
                printf("selisih %d\n", selisih);
            }else{
                selisih = tri2.luas - tri1.luas;
                printf("segitiga kedua\n");
                printf("selisih %d\n", selisih);
            }
            break;
        }

    }

    return 0;
}