#include<cmath>
#include<iostream>

using namespace std;

int main() {
	int angka [] = {10, 1, 3, 4, 5, 8, 11};
	int temp;

	for(int i = 0; i < *(&angka+1)-angka; i++) {
		if (i == 0) {
			temp = angka[0];
		} else {
			temp = min(temp, angka[i]);
			cout << "temp: " << temp << " i : " << i << endl;
		}
	}
	
	cout << temp;
	
	/*
	cara mencari .lenght(jumlah yang ada di dalam array)
	cout << *(&angka+1)-angka; */
	
	return 0;  
}
