#include <iostream>

using namespace std;

int main() {
	
	int nilai[] = {20, 10, 40, 80, 70, 50, 30, 60, 100, 75, 85};
	
	int jumlahElemenArray = sizeof(nilai) / sizeof(int);
	
	cout << "Data nilai : " << endl;
	for (int index = 0; index < jumlahElemenArray; index++) {
		cout << nilai[index] << " ";
	}
	
	cout << endl << endl;
	
	int cari = 0;
	cout << "Masukkan nilai yang Anda cari : "; cin >> cari;
	
	bool isKetemu = false;
	
	int index;
	for (index = 0; index < jumlahElemenArray; index++) {
		if (cari == nilai[index]) {
			isKetemu = true;
			break;
		}
	}
	cout << endl;
	
	if (isKetemu) {
		cout << "Data ditemukan pada index ke-" << index << endl << endl;
	} else {
		cout << "Data tidak ditemukan"  << endl << endl;
	}
	
	system("pause");
	return 0;
}