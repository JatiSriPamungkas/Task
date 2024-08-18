#include <iostream>

using namespace std;

// prototype fungsi
void cetakElemenArray(int array[], int jumlahElemenArray);
int getNilaiTerbesar(int array[], int jumlahElemenArray);
int getNilaiTerkecil(int array[], int jumlahElemenArray);

int main() {

	int jumlahArray;
	cout << "input jumlah array: ";
	cin >> jumlahArray;
	cout << endl;

	// deklarasi array
	int* nilaiArray = new int[jumlahArray];

	for (int i = 0; i < jumlahArray; i++) {
		cout << "Array ke " << (i + 1) << " = ";
		cin >> nilaiArray[i];
	}

	cout << "\nDaftar Array: " << endl;
	cetakElemenArray(nilaiArray, jumlahArray);

	int nilaiTerbesar = getNilaiTerbesar(nilaiArray, jumlahArray);
	cout << "Nilai terbesar\nAdalah: " << nilaiTerbesar << endl << endl;

	int nilaiTerkecil = getNilaiTerkecil(nilaiArray, jumlahArray);
	cout << "Nilai terkecil\nAdalah: " << nilaiTerkecil << endl << endl;

	system("pause");
	return 0;
}

void cetakElemenArray(int array[], int jumlahArray) {

	for (int i = 0; i < jumlahArray; i++) {
		cout << array[i] << " ";
	}
	cout << endl << endl;
}

int getNilaiTerbesar(int array[], int jumlahArray) {
	int nilaiTerbesar = array[0];

	for (int i = 1; i < jumlahArray; i++) {
		if (nilaiTerbesar < array[i])
			nilaiTerbesar = array[i];
	}

	return nilaiTerbesar;
}

int getNilaiTerkecil(int array[], int jumlahArray) {

	int nilaiTerkecil = array[0];
	for (int i = 1; i < jumlahArray; i++) {
		if (nilaiTerkecil > array[i])
			nilaiTerkecil = array[i];
	}

	return nilaiTerkecil;
}