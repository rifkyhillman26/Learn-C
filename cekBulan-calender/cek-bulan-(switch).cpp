#include <iostream>
using namespace std;


int main () {
	
	int bulan ;

	cout << "Bulan berapakah sekarang ? ";
	cin >> bulan;

	switch (bulan) {
		case 1:
			cout << "Sekarang Bulan january";
			break;
		case 2:
			cout << "Sekarang Bulan february";
			break;
		case 3:
			cout << "Sekarang Bulan maret";
			break;
		case 4:
			cout << "Sekarang Bulan april";
			break;
		case 5:
			cout << "Sekarang Bulan mei";
			break;
		case 6:
			cout << "Sekarang Bulan juni";
			break;
		case 7:
			cout << "Sekarang Bulan juli";
			break;
		case 8:
			cout << "Sekarang Bulan agustus";
			break;
		case 9:
			cout << "Sekarang Bulan september";
			break;
		case 10:
			cout << "Sekarang Bulan oktober";
			break;
		case 11:
			cout << "Sekarang Bulan november";
			break;
		case 12:
			cout << "Sekarang Bulan desember";
			break;
		default:
    		cout << "Hitungan bulan hanya 1 sampai 12 saja.";
	}

return 0;

}
