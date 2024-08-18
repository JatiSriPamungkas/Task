#include <iostream>

using namespace std;

int main() {
	
	int data;
	
	cout << "Jumlah nilai yang ingin diinputkan : "; cin >> data;
	cout << endl;
	
	int nilai[data];
	int jumlahElemenArray = sizeof(nilai) / sizeof(int);
	
	cout << "Masukkan nilai [1 - 100] : " << endl;
	for (int i = 0; i < data; i++) {
		cout << "Nilai ke " << (i + 1) << " = "; cin >> nilai[i];
	}
	cout << endl;
	
	int cari = 0;
	cout << "Masukkan nilai yang Anda cari : "; cin >> cari;
	
	bool isKetemu = false;

	int i;
	for (i = 0; i < jumlahElemenArray; i++) {
		if (cari == nilai[i]) {
			isKetemu = true;
			break;
		}
	}
	cout << endl;
	
	if (isKetemu) {
		cout << "Data ditemukan pada index ke-" << i << endl << endl;
	} else {
		cout << "Data tidak ditemukan"  << endl << endl;
	}
	system("pause");
	return 0;
}