#include <iostream>

using namespace std;


int main(){

	// Isi nilai variable menggunakan masukkan
	int a, b, temp;
	
	cout << "Nilai variable A dan B Sebelum ditukar: \nA= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	
	temp = a;
	a = b;
	b = temp;
	
	cout << "\n Nilai variable A dan B Setelah ditukar: \nA= " << a << "\nB= " << b << endl;
	system("pause");
	return 0;
}
