/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-09-09
*/
#include <stdio.h> // include library yang dibutuhkan

int main(){
    // deklarasikan variabel untuk menampung nilai
    int besar[3];
    int kecil[3];
    int count = 0;

    // meminta masukan dari user
    for(int i = 0; i < 3; i++){ // loop sebanyak 3 kali
        scanf("%d", &besar[i]); // masukan untuk int besar
    }
    for(int i = 0; i < 3; i++){ // loop sebanyak 3 kali
        scanf("%d", &kecil[i]); // masukan untuk int kecil
    }

    // memulai proses pengecekan yang memenuhi syarat
    for(int i = 0; i < 3; i++){ // loop sebanyak 3 kali
        count = 0; // reset count jadi 0
        for(int j = 0; j < 3; j++){ // loop sebanyak 3 kali
            /*jika int besar merupakan kelipatan
            dari int kecil di index saat ini*/
            if(besar[j] % kecil[i] == 0){
                count++; // maka count up
            }
        }

        if(count >= 2){ // jika count lebih dari atau sama dengan 2
            printf("valid\n"); // maka kondisi valid
            return 0; // program bisa langsung selesai
        }
    }

    // jika sampai akhir tidak ada count yang memenuhi syarat
    printf("tidak valid\n"); // maka print tidak valid
	
	return 0;
}