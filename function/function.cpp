#include <iostream>
using namespace std;


int main() {
	int a = 1;
	
	// &a => membaca kode memory variable a
	// int* b = &a; => b menyimpan nilai memori a
	
	int* b = &a;
	
	cout << b;
	
	return 0;
}


