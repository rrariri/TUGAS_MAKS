#include <iostream>
using namespace std; 

//variabel global 
	int a, b;
	
//program utama 
	int main (){
		cout << " Masukan Nilai A :";
		cin >> a; 
		cout << " Masukan Nilai B :";
		cin >> b;
		cout << "=====================" << endl; 
		if (a < b){
			cout << " Nilai Maksimum Adalah : " << b << endl; 	
			cout << " Nilai Minimum Adalah : " << a << endl; 	
		}
			else {
				cout << " Nilai Maksimum Adalah : " << a << endl; 
				cout << " Nilai Minimum Adalah : " << b << endl; 
			}
	return 0;
	}