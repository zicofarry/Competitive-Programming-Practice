#include "pokoca13.h"

void solve(){
    din(n);
    int arr[3];
    int min[n], mid[n], max[n];
    for(int i = 0; i < n; i++){
        cin >> arr[0];
        min[i] = arr[0];
        mid[i] = arr[0];
        max[i] = arr[0];
        for(int j = 1; j < 3; j++){
            cin >> arr[j];
            if(min[i] > arr[j]) min[i] = arr[j];
            if(max[i] < arr[j]) max[i] = arr[j];
        }
        for(int j = 0; j < 3; j++){   
            if(arr[j] < max[i] && arr[j] > min[i]) mid[i] = arr[j];
        }
        cout << min[i] << sp << mid[i] << sp << max[i] << nl;
    }
    din(x);
    
    int stop = 0;
    int i = 0;
    while(i < n && !stop){
        if(min[i] * x == max[i]) stop = 1;
        else i++;
    }
    if(stop) cout << "valid\n";
    else cout << "tidak valid\n";
}