#include "ratany13.h"

int idx; // index
int wlen; // panjang current word
char cw[151]; // current word

// cek eop
int eop(string pita){
    if(pita[idx] == '.'){ // jika '.' return 1
        return 1;
    }
    else{
        return 0; // jika bukan '.' kembalikan 0
    }
}

// nyalakan mesin
void start(string pita){
    // set index dan panjang kata menjadi 0
    idx = 0;
    wlen = 0;

    if(pita[idx] == '"'){
        idx++;
        while(((pita[idx] != '"') && (eop(pita) == 0)) || ((pita[idx-1] == '\\') && (eop(pita) == 0))){
            if(pita[idx] == '\\' ){
                idx++;
            }
            
            cw[wlen] = pita[idx];
            wlen++;
            idx++;
        }
        cw[wlen] = '\0';
        idx++;
    }else{
        // masukkan kata baru
        while ((pita[idx] != ' ') && (eop(pita) == 0)){
            cw[wlen] = pita[idx];
            wlen++;
            idx++;
        }
        cw[wlen] = '\0'; // akhiri lagi
    }
}

// reset current word
void reset(){
    wlen = 0; // kembalikan panjang kata menjadi 0
    cw[wlen] = '\0'; // set current word menjadi null (siap diisi)
}

// pindah next kata
void inc(string pita){
    wlen = 0; // set panjang kata jadi 0 (memastikan)


    while (pita[idx] == ' '){ // ignore blank
        idx++;
    }
    
    if(pita[idx] == '"'){
        idx++;
        while(((pita[idx] != '"') && (eop(pita) == 0)) || ((pita[idx-1] == '\\') && (eop(pita) == 0))){
            if(pita[idx] == '\\' ){
                idx++;
            }
            
            cw[wlen] = pita[idx];
            wlen++;
            idx++;
        }
        cw[wlen] = '\0';
        idx++;
    }else{
        // masukkan kata baru
        while ((pita[idx] != ' ') && (eop(pita) == 0)){
            cw[wlen] = pita[idx];
            wlen++;
            idx++;
        }
        cw[wlen] = '\0'; // akhiri lagi
    }

}

void dec(string pita){
    if(idx > 0){

        while (idx >= 0 && (pita[idx] == ' ' || pita[idx] == ';')){ // ignore blank
            idx--;
        }

        if(pita[idx] == '"'){
            idx--;
            //memundurkan indeks ke kata sebelumnya
            while (idx >= 0 && (pita[idx] != '"') && (eop(pita) == 0) || ((pita[idx-1] == '\\') && (eop(pita) == 0))){
                idx--;
            }
            idx--;
            idx--;
        }else{
            //memundurkan indeks ke kata sebelumnya
            while (idx >= 0 && (pita[idx] != ' ') && (eop(pita) == 0)){
                idx--;
            }
            idx--;
        }
        
        
        wlen = 0; // set panjang kata jadi 0 (memastikan)
        
        if(pita[idx] == '"'){
            idx--;
            int lastc = idx;
            // menghitung panjang kata
            while (idx >= 0 && (pita[idx] != '"') && (eop(pita) == 0) || ((pita[idx-1] == '\\') && (eop(pita) == 0))){
                if(pita[idx] == '\\' ){
                    idx--;
                }
                
                wlen++;
                idx--;
            }
            // printf("|%d|", wlen);
            idx++; // masuk ke awal kata
            
            for(int i = 0; i < wlen; i++){
                if(pita[idx] == '\\' ){
                    idx++;
                }
                cw[i] = pita[idx++];
            }
            cw[wlen] = '\0'; // akhiri lagi
            idx++;
        }else{
            int lastc = idx;
            // menghitung panjang kata
            while (idx >= 0 && (pita[idx] != ' ') && (eop(pita) == 0)){
                wlen++;
                idx--;
            }
            idx++; // masuk ke awal kata
            
            for(int i = 0; i < wlen; i++){
                cw[i] = pita[idx++];
            }
            cw[wlen] = '\0'; // akhiri lagi
        }
    }
}

// mengembalikan current word
char* getcw(){
    return cw;
}


// mengembalikan panjang current word
int getlen(){
    return wlen;
}

void solve(){
    string pita;
    getline(cin, pita);
    din(n);

    start(pita);
    vs stra;
    while(!eop(pita)){
        int a = 0;
        for(int i = 0; i < getlen(); i++){
            if(getcw()[i] == 'a') a++;
        }
        if(a >= 2) stra.pb(getcw());
        inc(pita);
    }
    int a = 0;
    for(int i = 0; i < getlen(); i++){
        if(getcw()[i] == 'a') a++;
    }
    if(a >= 2) stra.pb(getcw());
    

    int len = 0;
    int space = 0;
    int tmp = 0;
    for (size_t i = 0; i < stra.size(); i++) {
        len += stra[i].size();  // Tambahkan panjang kata

        if (i > tmp) len += 1;

        if (len > n) {
            // Hitung jumlah spasi yang dibutuhkan untuk rata tengah
            space = n - (len - (stra[i].size() + 1));  // Total panjang - panjang kata yang sudah dicetak

            // Spasi kiri
            int leftSpace = (space + 1) / 2;
            for (int j = 0; j < leftSpace; j++) {
                cout << " ";
            }

            // Cetak kata-kata pada baris ini
            for (size_t j = tmp; j < i; j++) {
                if (j > tmp) cout << sp;  // Tambahkan spasi antar kata
                cout << stra[j];
            }

            tmp = i;
            len = stra[i].size();
            cout << nl;
        }
    }

    // Penanganan kata-kata terakhir (jika ada)
    if (tmp < stra.size()) {
        space = n - len;
        int leftSpace = (space + 1) / 2;
        for (int j = 0; j < leftSpace; j++) {
            cout << " ";
        }
        for (size_t j = tmp; j < stra.size(); j++) {
            if (j > tmp) cout << sp;  // Tambahkan spasi antar kata
            cout << stra[j];
        }
        cout << nl;
    }
}