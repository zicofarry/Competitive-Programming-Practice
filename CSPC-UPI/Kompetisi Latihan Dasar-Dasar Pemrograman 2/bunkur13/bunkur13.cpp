#include "bunkur13.h"

// Fungsi untuk melakukan partisi dan mendapatkan posisi pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pilih elemen terakhir sebagai pivot
    int i = (low - 1); // Indeks elemen yang lebih kecil dari pivot
    
    for (int j = low; j <= high - 1; j++) {
        // Jika elemen saat ini lebih kecil atau sama dengan pivot
        if (arr[j] <= pivot) {
            i++; // Menambah indeks elemen yang lebih kecil
            swap(arr[i], arr[j]); // Tukar elemen
        }
    }
    swap(arr[i + 1], arr[high]); // Tempatkan pivot pada posisi yang benar
    return (i + 1); // Kembalikan indeks pivot
}

// Fungsi utama QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Temukan indeks pivot dan bagi array menjadi dua bagian
        int pi = partition(arr, low, high);

        // Urutkan elemen sebelum dan sesudah pivot secara rekursif
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi untuk mengurutkan array dengan Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Elemen yang akan disisipkan
        int j = i - 1;

        // Geser elemen-elemen yang lebih besar dari key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Sisipkan key pada posisi yang benar
    }
}

// Fungsi untuk mengurutkan array dengan Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Temukan elemen terkecil di bagian yang belum terurut
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j; // Menyimpan indeks elemen terkecil
            }
        }
        // Tukar elemen terkecil dengan elemen pertama yang belum terurut
        swap(arr[minIdx], arr[i]);
    }
}

void sorting(string sort, int arr[4]){
    if(sort == "quicksort"){   
        quickSort(arr, 0, 4-1);
    }else if(sort == "insertionsort"){
        insertionSort(arr, 4);
    }else if(sort == "selectionsort"){
        selectionSort(arr, 4);
    }
}

void sorted(int n, vector<bks>& arr){
    int switched = 1;
    while(switched == 1){
        switched = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i].num[3] > arr[i+1].num[3]){
                //tukar
                swap(arr[i], arr[i+1]);
                switched = 1;
            }
        }
    }
}

void solve(){
    sin(sort);
    din(n);
    bks arr[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++) cin >> arr[i].num[j];
        sorting(sort, arr[i].num);
        cin >> arr[i].x;
        arr[i].num[3] *= arr[i].x;
    }
    
    din(batas);

    din(m);
    bks arr2[m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < 4; j++) cin >> arr2[i].num[j];
        sorting(sort, arr2[i].num);
        cin >> arr2[i].x;
        arr2[i].num[3] *= arr2[i].x;
    }
    
    int o = 0;
    vector<bks> arr3(n+m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++) arr3[o].num[j] = arr[i].num[j];
        o++;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < 4; j++) arr3[o].num[j] = arr2[i].num[j];
        o++;
    }
    sorted(o, arr3);

    for(int i = 0; i < o; i++){
        for(int j = 0; j < 4; j++){
            cout << arr3[i].num[j];
            if(j != 3) cout << ' ';
            else cout << nl;
        }
    }

}