#include <iostream>
using namespace std;

class Example{
	public :
		
		void tulisan(string);
		
		void nomor(int angka) {
			cout << angka << endl;
		};
};



int main() {
	
	Example myObj;
	myObj.nomor(10);
	myObj.tulisan("masuk");
	return 0;
}


void Example::tulisan(string nama) {
	cout << nama;
}
