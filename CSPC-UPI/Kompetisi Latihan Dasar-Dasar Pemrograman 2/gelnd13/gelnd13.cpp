#include "gelnd13.h"

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

void gelinding(bks& arr){
    for(int i = 0; i < arr.x; i++){
        int tmp = arr.num[0];
        arr.num[0] = arr.num[2];
        arr.num[2] = arr.num[3];
        arr.num[3] = arr.num[1];
        arr.num[1] = tmp;
    }
}

void solve(){
    sin(sort);
    din(n);
    bks arr[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i].num[j];
        }
        cin >> arr[i].x;
        gelinding(arr[i]);
    }
    
    din(batas);

    din(m);
    bks arr2[m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr2[i].num[j];
        }
        cin >> arr2[i].x;
        gelinding(arr2[i]);
    }
    
    int o = 0;
    vector<bks> arr3(n+m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            arr3[o].num[j] = arr[i].num[j];
        }
        o++;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < 4; j++){
            arr3[o].num[j] = arr2[i].num[j];
        }
        o++;
    }
    sorted(o, arr3);

    for(int i = 0; i < o; i++){
        for(int j = 0; j < 4; j++){
            cout << arr3[i].num[j];
            if(j != 3){
                cout << ' ';
            }else{
                cout << nl;
            }
        }
    }

}