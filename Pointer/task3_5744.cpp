#include <iostream>
#include <algorithm>

using namespace std;

// Fungsi untuk mengurutkan nilai secara descending
void sortDescending(int *arr, int n) {
    sort(arr, arr + n, greater<int>());
}

// Fungsi untuk mencari nilai yang dimasukkan oleh pengguna
bool findValue(int *arr, int n, int value) {
    for (int i = 0; i < n; ++i) {
        if (*arr == value) {
            return true;
        }
        arr++;
    }
    return false;
}

int main() {
    int n;
    cout << "Masukkan jumlah nilai: ";
    cin >> n;

    int *nilai = new int[n]; // Mengalokasikan memori untuk array

    for (int i = 0; i < n; ++i) {
        cout << "Nilai ke-" << i+1 << ": "; cin >> nilai[i];
    }
    cout << endl;

    // Mengurutkan nilai secara descending
    sortDescending(nilai, n);

    cout << "Nilai-nilai setelah diurutkan secara descending: ";
    for (int i = 0; i < n; ++i) {
        cout << nilai[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < n; i++) {
        cout << "Bilangan ke-" << (i+1) << " : " << nilai[i] << ", dengan alamat " << &nilai[i] << endl;
    }

    // Menghapus memori yang dialokasikan untuk array
    delete[] nilai;
    
    cout << endl << endl;
	system("pause");
    return 0;
}
