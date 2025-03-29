/*
problem setter	: Rosa A. S. & M. Shalahuddin
solved by 		: zicofarry/ Muhammad 'Azmi Salam
date solved		: 2024-09-25
*/
#include <stdio.h> // include kan library yang diperlukan

int main(){
	/*deklarasikan variabel untuk menampung nilai
	n = jumlah gehu
	m = jumlah bala-bala
	k = jumlah pisang goreng
	h = jumlah cireng
	r = jumlah hari
	lg = laba gehu
	lb = laba bala-bala
	lp = laba pisang goreng
	lc = laba cireng*/
	int n, m, k, h, r;
	int lg = 100;
	int lb = 150;
	int lp = 75;
	int lc = 175;
	
	// meminta masukan dari user
	scanf("%d", &n); // masukan untuk jumlah gehu
	scanf("%d", &m); // masukan untuk jumlah bala-bala
	scanf("%d", &k); // masukan untuk jumlah pisang goreng
	scanf("%d", &h); // masukan untuk jumlah cireng
	scanf("%d", &r); // masukan untuk jumlah hari
	
	// total merupakan total semua keuntungan dikali jumlah hari
	int total = (lg*n+lb*m+lp*k+lc*h)*r;
	
	// print hasilnya
	printf("%d\n", total);
	
	return 0;
}
//done