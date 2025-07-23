#include "cacaA13.h"

int idx;
char cc;

// prosedur untuk memulai mesin karakter
void START(string pita){
    // memulai pembacaan mesin karakter
    idx = 0; // index pasti dimulai dari 0
    cc = pita[idx]; // cc adalah pita inputan ke idx = 0
}

// fungsi untuk memeriksa akhir dari proses (End of Process)
int EOP(){
    if(cc == '.'){ // jika cc saat ini '.'
        return 1; // kembalikan nilai 1 (marking eop true)
    }
    else{ // jika tidak
        return 0; // kembalikan nilai 0
    }
}

// prosedur untuk memajukan karakter pada pita
void INC(string pita){
    // menambah nilai indeks dan mengatur karakter yang dibaca
    idx++;
    cc = pita[idx];
}

// prosedur untuk menundurkan karakter pada pita
void DEC(string pita){
    // menambah nilai indeks dan mengatur karakter yang dibaca
    idx--;
    cc = pita[idx];
}

// prosedur untuk memajukan karakter hingga melewati spasi
void ADV(string pita){
    // menambah nilai indeks dan mengatur karakter yang dibaca
    idx++;
    cc = pita[idx];


    // proses looping jika karakter saat ini masih berupa spasi
    while((cc == ' ') && (EOP() == 0)){
        idx++;
        cc = pita[idx];
    }
}

// fungsi untuk mendapatkan karakter pita saat ini
char GETCC(){
    return cc;
}


// fungsi untuk mendapatkan indeks pita saat ini
int GETIdx(){
    return idx;
}

void solve(){
    string pita;
    getline(cin, pita);
    int n = 0;
    START(pita);
    while(!EOP()){
        if(GETCC() >= 'a' && GETCC() <= 'z'){
            INC(pita);
            if(GETCC() == 'a'){
                INC(pita);
                if(GETCC() >= 'a' && GETCC() <= 'z'){
                    n++;
                }
                DEC(pita);
            }
            DEC(pita);
        }
        INC(pita);
    }
    cout << n << nl;
}