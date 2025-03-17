/*
problem setter	: Rosa A. S. 	
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-09-12
*/
#include <stdio.h> // includekan library stdio.h

int main(){
    int angka[6]; // deklarasi array untuk menyimpan 6 angka
    int genap[3], ganjil[3]; // deklarasikan array genap dan ganjil
    int gen = 0, gan = 0; // deklarasi (gen = jumlah angka genap) dan (gan = jumlah angka ganjil)
    for(int i = 0; i < 6; i++){ // loop sebanyak 6 kali
        scanf("%d", &angka[i]); // mengisi array angka di setiap indeksi
        if (angka[i] % 2 == 0){ // jika angka di indeks i merupakan bilangan genap
            genap[gen++] = angka[i]; // maka masuk ke array genap
        }else{ // jika tidak
            ganjil[gan++] = angka[i]; // maka masuk ke array ganjil
        }
    }

    if(gen == 3 && gan == 3){ // jika jumlah genap dan ganjilnya sama sama 3
        // maka print dengan pola genap ganjil sebanyak 3 kali
        for(int i = 0; i < 3; i++){ 
            printf("%d\n", genap[i]);
            printf("%d\n", ganjil[i]);
        }
    }else{ // jika tidak
        printf("tidak valid\n"); // maka print tidak valid
    }

    return 0;
}
