#include <iostream>
using namespace std;

int main () {
	
   for (int i = 5; i >= 1; i--) {
    for (int j = i; j <= 5; j++) {
    	cout << j;
	}
	cout << endl;
  } 
  
 for( int a = 10; a > 0; a--){
    for(int i = 1; i <= a; i++){
        cout << "  ";
    }for(int a1 = 10; a1 > a; a1--){
        cout << "x";
    }for(int a2 = 11; a2 > a; a2--){
        cout << "x";
    }cout << endl;
  }	
  
 for( int a = 10; a < 0; a++){
    for(int i = 1; i >= a; i--){
        cout << "  ";
    }for(int a1 = 10; a1 < a; a1++){
        cout << "x";
    }for(int a2 = 11; a2 < a; a2++){
        cout << "x";
    }cout << endl;
  }	
	
	return 0;
}
