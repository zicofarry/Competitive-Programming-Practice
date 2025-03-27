/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-09-28
*/
#include <stdio.h> // include kan library yang dibutuhkan 
#include <math.h> // include kan library yang dibutuhkan

int main() {
    /*mendeklarasikan variabel untuk menampung nilai
    besar = masukan float besar dari user
    kecil = masukan integer kecil dari user
    count = untuk menghitung yang memenuhi ketentuan*/
    float besar[3];
	int kecil[3];
    int count = 0;

    // meminta masukan dari user
    for(int i = 0; i < 3; i++){ // loop sebanyak 3 kali
        scanf("%f", &besar[i]); // input untuk float besar
    }
    for(int i = 0; i < 3; i++){ // loop sebanyak 3 kali
        scanf("%d", &kecil[i]); // input untuk integer kecil
    }

    // memulai proses pengecekan yang memenuhi syarat
    for(int i = 0; i < 3; i++){ // loop sebanyak 3 kali untuk setiap index pada array float besar
        count = 0; // reset count jadi 0
        for(int j = 0; j < 3; j++){ // loop sebanyak 3 kali untuk setiap index pada array integer kecil
			int depanKoma = (int)besar[j]; // menyimpan nilai angka depan koma
			int belakangKoma = ((int)roundf(besar[j] * 100)) % 100; // menyimpan nilai angka belakang koma
		
            // jika angka depan koma dan belakang koma habis dibagi oleh integer kecil di index saat ini
			if (depanKoma % kecil[i] == 0 && belakangKoma % kecil[i] == 0){
                count++; // maka count up
            }
        }
        if (count >= 2){ // jika count lebih atau sama dengan 2
            // maka memenuhi syarat ketentuan soal
            printf("valid\n"); // dan print valid
            return 0; // program bisa langsung selesai
        }
    }

    // jika sampai akhir tidak ada count yang memenuhi syarat
    printf("tidak valid\n"); // maka print tidak valid
	return 0;
}