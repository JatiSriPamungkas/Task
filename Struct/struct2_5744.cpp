#include <iostream>

using namespace std;

struct Karyawan {
	int id;
	int umur;
	float gaji;
};
void inputDataKaryawan(Karyawan &target);
void cetakDataKaryawan(Karyawan &target);
float getTotalGaji(Karyawan a, Karyawan b);

int main() {
	
	Karyawan joko, paijo;
	
	// input data joko dan paijo
	inputDataKaryawan(joko);
	inputDataKaryawan(paijo);
	
	// cetak data karyawan
	cetakDataKaryawan(joko);
	cetakDataKaryawan(paijo);
	
	// total gaji joko dan paijo
	float totalGaji = getTotalGaji(joko, paijo);
	cout << "Total gaji Joko dan Paijo : " << totalGaji << endl << endl;
	
		
		system("pause");
	return 0;
}


void inputDataKaryawan(Karyawan &target) {
	cout << "Input Data Karyawan" << endl;
	cout << "===================" << endl;
	cout << "  ID   :"; cin >> target.id;
	cout << "  Umur :"; cin >> target.umur;
	cout << "  Gaji :"; cin >> target.gaji; 
	cout << endl;
}

void cetakDataKaryawan(Karyawan &target) {
	cout << "Data Karyawan" << endl;
	cout << "=============" << endl;
	cout << "  ID   :" << target.id << endl;
	cout << "  Umur :" << target.umur << endl;
	cout << "  Gaji :" << target.gaji << endl; 
	cout << endl;
}

float getTotalGaji(Karyawan a, Karyawan b) {
	return a.gaji + b.gaji;
}



