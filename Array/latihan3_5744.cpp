#include <iostream>

using namespace std;

int main(){

	string nama[100];
	string Mk[100];
	int nilai[100];
	int jml;
	
	cout << "Masukkan jumlah mahasiswa: ";
	cin >> jml;
	cout << endl;
	
	// Input data
	for (int i = 1; i <= jml; i++) {
		cout << "Masukkan nama mahasiswa: ";
		cin >> nama[i];
		cout << "Masukkan matakuliah yang diambil: ";
		cin >> Mk[i];
		cout << "Masukkan nilai mahasiswa: ";
		cin >> nilai[i];
		cout << endl;
	}

	// Menampilkan data
	for (int i = 1; i <= jml; i++) {
		cout << "\nTampilkan data: " << endl;
		cout << "nama: " << nama[i] << "Nilai Matakuliah" << Mk[i] << "adalah=" << nilai[i] << endl;
	}
	
	
	system("pause");
	return 0;
}
