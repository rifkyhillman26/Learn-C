#include <iostream>
using namespace std;

class data{
	public : 
		string nama;
		string asal;
		int umur;
		data(string a, string b,int c){
			nama = a;
			asal = b;
			umur = c;
		}
};


int main() {
	
	data dataObj1("Rifki", "lampung", 19);
	data dataObj2("anjas", "jakarta barat", 20);
	data dataObj3("anjes", "jawabarat", 17);

	cout << dataObj1.nama << endl;
	cout << dataObj1.umur << endl;
	cout << dataObj1.asal << endl;
	
	return 0;
}
