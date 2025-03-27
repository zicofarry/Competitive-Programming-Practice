/*
problem setter	: Rosa A. S.
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-09-20
*/
#include <stdio.h>

int main(){
    /*deklarasikan variabel untuk menampung nilai
    input = char masukan dari user
    huruf = array of char yang menampung huruf
    angka = array of char yang menampung angka
    countHuruf = count untuk menghitung jumlah huruf
    countAngka = count untuk menghitung jumlah angka*/
    char input[6];
    char huruf[3];
    char angka[3];
    int countHuruf = 0;
    int countAngka = 0;

    // meminta masukan dari input
    for(int i = 0; i < 6; i++){ // loop sebanyak 6 kali
        scanf(" %c", &input[i]); // scan char di setiap index nya
        if(input[i] >= 'a' && input[i] <= 'z'){ // jika char input adalah huruf
            huruf[countHuruf++] = input[i]; // maka masuk ke array huruf dan countHuruf bertambah
        }else if(input[i] >= '0' && input[i] <= '9'){ // jika char input adalah angka
            angka[countAngka++] = input[i]; // maka masuk ke array angka dan countAngka bertambah
        }
    }

    // membuat kondisi untuk output sesuai ketentuan soal
    if(countHuruf == 3 && countAngka == 3){ // jika jumlah huruf dan angkanya adalah 3
        for(int i = 0; i < 3; i++){ // loop sebanyak 3 kali, dengan pola print huruf angka
            printf("%c\n", huruf[i]);
            printf("%c\n", angka[i]);
        }
    }else{ // jika tidak
        printf("tidak valid\n"); // maka print tidak valid
    }
	
    return 0;
}
