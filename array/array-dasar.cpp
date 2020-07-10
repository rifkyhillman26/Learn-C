#include <iostream>
using namespace std;


int main () {
	
	int angka[5] = {1, 2, 3, 4, 5};
	string buah[] = { "Nanas", "Mangga"};
	string pesanan;
	int  jumlahpesanan;
	
	cout << "       " << "Menu Minuman Jus Segar" << endl;
	cout << "       " << "----------------------" << endl << endl;
	
	for(int i = 0; i < *(&buah+1)-buah; i++) {
		cout << "              " << buah[i] << endl;
	}
	 
	cout << endl << endl;
	cout << "mau memesan Jus apa ? ";
	cin >> pesanan;
	
	if(pesanan == buah[0] || pesanan == buah [1]) {
		cout << "mau pesan berapa ? ";
		cin >> jumlahpesanan;
	}else {
		cout << "pesan sesuai menu yang tersedia / Tulisan Anda Typo";
	}
	

	cout << endl << endl;
	cout << " " << jumlahpesanan << " Jus " << pesanan << " " << "siap di bikin !!!";
	
	
	
	//cara mengisi array secara terpisah
	/*
	int angka[5];
	
	angka[0] = 5;
	angka[1] = 1;
	angka[2] = 3;
	
	cout << angka[2];
	*/
	
	
	
	//cara mengubah isi array
	/*
	int angka[5] = {1, 2, 3, 4, 5};
	
	angka[3] = 6;
	
	cout << angka[3];
	*/
	
	
	return 0;
}

