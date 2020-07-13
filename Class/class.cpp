#include <iostream>>
using namespace std;

class Myclass {
	public: 
		int angka;
		string nama;
};

int main () {
	Myclass myObj;
	
	myObj.angka = 10;
	myObj.nama = "Roni";
	
	cout << myObj.angka << endl;
	cout << myObj.nama;
	
	return 0;
}
