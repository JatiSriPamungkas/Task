#include <iostream>

using namespace std;

struct Karyawan {
	int karyawanID;
	int umur;
	float gaji;
};

int main() {
	
	Karyawan joko;
	joko.karyawanID = 10;
	joko.umur = 25;
	joko.gaji = 24.15;
	
	Karyawan paijo = {11, 26, 28.32};
	
	float totalGaji = joko.gaji + paijo.gaji;
	cout << "Total gaji Joko dan Paijo = " << totalGaji << endl;
	
	if (paijo.gaji > joko.gaji)
		cout << "Gaji paijo lebih besar dari Joko" << endl;
	
	joko.gaji += 2.5;
	cout << "Gaji Joko setelah kenaikan gaji = " << joko.gaji << endl << endl;
	
	system("pause");
	return 0;
}
